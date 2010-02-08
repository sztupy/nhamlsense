using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NUnit.Framework;

namespace NHamlLanguage.Tests
{
    [TestFixture]
    class ParserTests
    {
        [Test]
        public void CodeGenerationTest()
        {
            string input = @"
- var x = new StringBuilder(""y"");
= x
%span= x+x";
            var parser = new NHamlParser(input);
            parser.Parse();

            Assert.AreEqual(NHamlParser.UsingDirectives+NHamlParser.InitialText(null)+
@" var x = new StringBuilder(""y""); {
}System.Console.WriteLine( x);
System.Console.WriteLine( x+x);
" + NHamlParser.EndText,parser.codeMapper.output);
        }

        [Test]
        public void PrologTest()
        {
            string input = @"@namespace=System.Web.Mvc
@namespace=System.Generic
@type=List<string>
%tag";
            var parser = new NHamlParser(input);
            parser.Parse();

            Assert.AreEqual(NHamlParser.UsingDirectives +
                "using System.Web.Mvc;" + System.Environment.NewLine +
                "using System.Generic;" + System.Environment.NewLine +
                NHamlParser.InitialText("List<string>") +
                NHamlParser.EndText,
                parser.codeMapper.output);

            input = @"@type=List<string>
%tag";
            parser = new NHamlParser(input);
            parser.Parse();

            Assert.AreEqual(NHamlParser.UsingDirectives +
                NHamlParser.InitialText("List<string>") +
                NHamlParser.EndText,
                parser.codeMapper.output);
        }

        [Test]
        public void BlockCodeTest()
        {
            string input = @"
- using (string s in Strings)
  = s
  - using (char c in s)
    = c
    = c+c
  = s+s
%span= null";
            var parser = new NHamlParser(input);
            parser.Parse();

            Assert.AreEqual(NHamlParser.UsingDirectives + NHamlParser.InitialText(null) +
@" using (string s in Strings) {
System.Console.WriteLine( s);
 using (char c in s) {
System.Console.WriteLine( c);
System.Console.WriteLine( c+c);
}System.Console.WriteLine( s+s);
}System.Console.WriteLine( null);
" + NHamlParser.EndText, parser.codeMapper.output);
        }

        [Test]
        public void CodeMappingTest()
        {
            string input = @"
- var x = new StringBuilder(""y"");
%span= x+x
%ul
  %li One
  %li Two
  %li= x
Three
";
            var parser = new NHamlParser(input);
            parser.Parse();
            var output = parser.codeMapper.output;

            Assert.AreEqual(" var x = new StringBuilder(\"y\");",
                output.Substring(parser.codeMapper.mappings[0].start2, parser.codeMapper.mappings[0].end2 - parser.codeMapper.mappings[0].start2));
            Assert.AreEqual(" x+x",
                output.Substring(parser.codeMapper.mappings[1].start2, parser.codeMapper.mappings[1].end2 - parser.codeMapper.mappings[1].start2));
            Assert.AreEqual(" x",
                output.Substring(parser.codeMapper.mappings[2].start2, parser.codeMapper.mappings[2].end2 - parser.codeMapper.mappings[2].start2));
        }
    }
}
