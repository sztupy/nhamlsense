using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

namespace NHamlLanguage
{
    public class NHamlParser
    {
        public const string UsingDirectives = @"using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using System.Web;
using System.Web.Mvc;
using System.Web.Mvc.Html;
using System.Web.Routing;
using NHaml.Web.Mvc;
";
        public const string _InitialText = @"namespace NHamlOutput {
  public class NHamlClass : System.Web.Mvc.ViewPage<GENERIC> {
    public NHamlClass() {
";

        Stack<int> openedBraces;

        public static string InitialText(string generic_class)
        {
            if (generic_class == null)
            {
                return _InitialText.Replace("<GENERIC>", "");
            }
            else
            {
                return _InitialText.Replace("GENERIC", generic_class);
            }
        }

        public const string EndText = @"} } }";

        public CodeMappingBuilder codeMapper { get; private set; }

        public NHamlParser(string input)
        {
            codeMapper = new CodeMappingBuilder(input);
            openedBraces = new Stack<int>();
        }

        public void Parse()
        {
            // Tests for using and model directives
            string line = codeMapper.ReadLine();
            string model = null;
            List<string> usings = new List<string>();
            var match = Regex.Match(line, "^@(.*)=([^\r\n]*)");
            while (match.Success)
            {
                if (match.Groups[1].ToString() == "namespace")
                {
                    usings.Add(match.Groups[2].ToString());
                }
                else if (match.Groups[1].ToString() == "type")
                {
                    model = match.Groups[2].ToString();
                }
                line = codeMapper.ReadLine();
                match = Regex.Match(line, "^@(.*)=([^\r\n]*)");
            }

            codeMapper.AppendOutputText(UsingDirectives);
            foreach (string s in usings)
            {
                codeMapper.AppendOutputText("using " + s + ";" + System.Environment.NewLine);
            }
            codeMapper.AppendOutputText(InitialText(model));

            while (line != "")
            {
                HandleLine(line);
                line = codeMapper.ReadLine();
            }

            codeMapper.AppendOutputText(EndText);
        }

        void HandleLine(string line)
        {
            var match = Regex.Match(line, @"^( *)([%.#-=/_])([^ \r\n]*)([^\r\n]*)");
            if (match.Success)
            {
                NHamlTokenType type = NHamlTokenType.PlainText;
                int spaceLength = match.Groups[1].Length; // initial whitespace
                string capturedChar = match.Groups[2].ToString(); // determining character
                string definition = match.Groups[3].ToString(); // rest of the tag definiton (like 'tag' in '%tag')
                string text = match.Groups[4].ToString(); // rest of the line
                if (openedBraces.Count>0) {
                    if (spaceLength <= openedBraces.Peek()) {
                        openedBraces.Pop();
                        codeMapper.AppendOutputText("}");
                    }
                }
                switch (capturedChar)
                {
                    case "%":
                    case ".":
                    case "#":
                        codeMapper.SkipInputText(spaceLength, NHamlTokenType.PlainText);
                        foreach (Match m in Regex.Matches(capturedChar+definition,"([%.#])([^%.#]*)"))
                        {
                            char char1 = m.Groups[1].ToString()[0];
                            string def = m.Groups[2].ToString();
                            switch (char1) {
                                case '%': type = NHamlTokenType.TagDefinition; break;
                                case '.': type = NHamlTokenType.ClassDefinition; break;
                                case '#': type = NHamlTokenType.IdDefinition; break;
                            }
                            codeMapper.SkipInputText(1 + def.Length, type);
                        }
                        type = NHamlTokenType.PlainText;
                        break;
                    case "-":
                        type = NHamlTokenType.CodeDefinition;
                        if (definition == "//")
                        {
                            type = NHamlTokenType.CommentDefinition;
                        }
                        else
                        {
                            openedBraces.Push(spaceLength);
                        }
                        break;
                    case "=":
                        type = NHamlTokenType.EquationDefinition;
                        break;
                    case "/":
                        type = NHamlTokenType.CommentDefinition;
                        break;
                    case "_":
                        type = NHamlTokenType.PartialDefinition;
                        break;
                    default:
                        throw new InvalidOperationException();
                }
                if (type!=NHamlTokenType.PlainText) codeMapper.SkipInputText(spaceLength + 1 + definition.Length, type);

                if ((type == NHamlTokenType.EquationDefinition) ||
                    (definition.Length>0 && definition[definition.Length-1]=='=')) {
                        codeMapper.AppendOutputText("System.Console.WriteLine(");
                        codeMapper.AddMappedSection(text.Length);
                        codeMapper.AppendOutputText(");" + System.Environment.NewLine);
                    
                }
                if ((type == NHamlTokenType.CodeDefinition))
                {
                    codeMapper.AddMappedSection(text.Length);
                    codeMapper.AppendOutputText(" {");
                    codeMapper.AppendOutputText(System.Environment.NewLine);
                }
            }
            else
            {
                codeMapper.SkipInputText(line.Length, NHamlTokenType.PlainText);
            }
        }
    }
}
