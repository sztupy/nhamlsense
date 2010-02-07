using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NUnit.Framework;

namespace NHamlLanguage.Tests
{
    [TestFixture]
    class CodeMappingBuilderTests
    {
        [Test]
        public void ReadLineTest()
        {
            string input = "Line1\rLine2\r\nLine3\n\n\r\nLine6\r";
            var sbtest = new CodeMappingBuilder(input);

            Assert.AreEqual("Line1\r", sbtest.ReadLine());
            Assert.AreEqual("Line2\r\n", sbtest.ReadLine());
            Assert.AreEqual("Line3\n", sbtest.ReadLine());
            Assert.AreEqual("\n", sbtest.ReadLine());
            Assert.AreEqual("\r\n", sbtest.ReadLine());
            Assert.AreEqual("Line6\r", sbtest.ReadLine());
            Assert.AreEqual("", sbtest.ReadLine());
            Assert.AreEqual("", sbtest.ReadLine());
        }

        [Test]
        public void AppendToOutputTest()
        {
            string input = "Line1\nLine2\nLine3\n";
            var sbtest = new CodeMappingBuilder(input);
            string line;

            sbtest.AppendOutputText("Line0\n");
            line = sbtest.ReadLine();
            sbtest.SkipInputText(line.Length,NHamlTokenType.CommentDefinition);
            line = sbtest.ReadLine();
            sbtest.AddMappedSection(line.Length);

            Assert.AreEqual("Line0\nLine2\n",sbtest.output);
        }

        [Test]
        public void MappingTest()
        {
            string input = "Yes\nNo\nYesNo\n";
            var sbtest = new CodeMappingBuilder(input);
            string line;

            sbtest.AppendOutputText("Maybe\n");
            line = sbtest.ReadLine();
            sbtest.AddMappedSection(line.Length);
            line = sbtest.ReadLine();
            sbtest.SkipInputText(line.Length, NHamlTokenType.IdDefinition);
            line = sbtest.ReadLine();
            sbtest.AddMappedSection(3);
            sbtest.SkipInputText(3, NHamlTokenType.CommentDefinition);

            var output = sbtest.output;

            Assert.AreEqual("Maybe\nYes\nYes", output);
            Assert.AreEqual(2, sbtest.mappings.Length);
            Assert.AreEqual(2, sbtest.paintings.Length);
            Assert.AreEqual("Yes\n", input.Substring(sbtest.mappings[0].start1, sbtest.mappings[0].end1 - sbtest.mappings[0].start1));
            Assert.AreEqual("Yes", input.Substring(sbtest.mappings[1].start1, sbtest.mappings[1].end1 - sbtest.mappings[1].start1));
            Assert.AreEqual("Yes\n", output.Substring(sbtest.mappings[0].start2, sbtest.mappings[0].end2 - sbtest.mappings[0].start2));
            Assert.AreEqual("Yes", output.Substring(sbtest.mappings[1].start2, sbtest.mappings[1].end2 - sbtest.mappings[1].start2));
            Assert.AreEqual("No\n", input.Substring(sbtest.paintings[0].start, sbtest.paintings[0].end - sbtest.paintings[0].start));
            Assert.AreEqual("No\n", input.Substring(sbtest.paintings[1].start, sbtest.paintings[1].end - sbtest.paintings[1].start));
        }
    }
}
