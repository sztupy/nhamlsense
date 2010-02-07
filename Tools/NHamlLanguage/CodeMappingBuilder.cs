using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NHamlLanguagePackageLib;
using System.IO;

namespace NHamlLanguage
{
    public class CodeMappingBuilder
    {
        StringReader _input;
        StringBuilder _output;
        string _inputtext;
        List<_SOURCEMAPPING> _mapping;
        List<_SOURCEPAINTING> _painting;
        int _inputPosition;
        int _outputPosition;
        int _inputLineEndPosition;
        public string output { get { return _output.ToString(); } }
        public _SOURCEMAPPING[] mappings { get { return _mapping.ToArray(); } }
        public _SOURCEPAINTING[] paintings { get { return _painting.ToArray(); } }

        public CodeMappingBuilder(string inputText) {
            _input = new StringReader(inputText);
            _inputtext = inputText;
            _output = new StringBuilder();
            _mapping = new List<_SOURCEMAPPING>();
            _painting = new List<_SOURCEPAINTING>();
            _inputPosition = 0;
            _outputPosition = 0;
            _inputLineEndPosition = 0;
        }

        /// <summary>
        /// Appends text to the output that is not used in the input text
        /// </summary>
        /// <param name="text"></param>
        public void AppendOutputText(string text)
        {
            _output.Append(text);
            _outputPosition += text.Length;
        }

        /// <summary>
        /// Skips some characters in the input that won't be used in the output.
        /// You can also set the type of the text that is skipped.
        /// </summary>
        /// <param name="length">The characters to skip</param>
        /// <param name="painting">The painting of the skipped text</param>
        public void SkipInputText(int length, NHamlTokenType painting)
        {
            if (painting != NHamlTokenType.PlainText)
            {
                _painting.Add(new _SOURCEPAINTING
                    {
                        start = _inputPosition,
                        end = _inputPosition+length,
                        color = (int)painting
                    }
                );
            }

            _inputPosition += length;
        }

        /// <summary>
        /// Adds a section that is mapped between the input and output.
        /// </summary>
        /// <param name="length">Number of characters to map</param>
        public void AddMappedSection(int length)
        {
            _output.Append(_inputtext.Substring(_inputPosition, length));
            _mapping.Add(new _SOURCEMAPPING
                {
                    start1 = _inputPosition,
                    end1 = _inputPosition+length,
                    start2 = _outputPosition,
                    end2 = _outputPosition+length
                }
            );
            _inputPosition += length;
            _outputPosition += length;
        }

        /// <summary>
        /// Reads a line from the input text. Also adds the line delimeter to the returned text.
        /// Returns an empty string in case of end of file
        /// </summary>
        /// <returns>The next line from the input</returns>
        public string ReadLine()
        {
            _inputPosition = _inputLineEndPosition;
            StringBuilder line = new StringBuilder();
            int r = _input.Read();
            while (r >= 0)
            {
                char c = Convert.ToChar(r);
                line.Append(c);
                if (c == '\n') break;
                if (c == '\r')
                {
                    int peek = _input.Peek();
                    if (peek == -1) break;
                    if (Convert.ToChar(peek) != '\n') break;
                }
                r = _input.Read();
            }
            _inputLineEndPosition = _inputPosition + line.Length;
            return line.ToString();
        }
    }
}
