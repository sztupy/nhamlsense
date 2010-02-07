using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NHamlLanguagePackageLib;
using System.Runtime.InteropServices;

namespace NHamlLanguage
{
    public class LanguageSupervisor : ILanguageSupervisor, IVsProvideColorableItems
    {
        public void OnSourceAssociated(INHamlSource pSource)
        {
            var sourceSupervisor = new SourceSupervisor(pSource);
            pSource.SetSupervisor(sourceSupervisor);
        }

        private static readonly Dictionary<NHamlTokenType, IVsColorableItem> _colors =
            new Dictionary<NHamlTokenType, IVsColorableItem>
                {
                    {NHamlTokenType.PlainText, new ColorableItem("NHaml PlainText", _COLORINDEX.CI_BLACK)},
                    {NHamlTokenType.TagDefinition, new ColorableItem("NHaml % TagDefinition", _COLORINDEX.CI_RED)},
                    {NHamlTokenType.ClassDefinition, new ColorableItem("NHaml . ClassDefinition", _COLORINDEX.CI_BROWN)},
                    {NHamlTokenType.IdDefinition, new ColorableItem("NHaml # IdDefinition", _COLORINDEX.CI_GREEN)},
                    {NHamlTokenType.PartialDefinition, new ColorableItem("NHaml _ PartialDefinition", _COLORINDEX.CI_MAGENTA)},
                    {NHamlTokenType.CommentDefinition, new ColorableItem("NHaml / CommentDefinition", _COLORINDEX.CI_DARKGREEN)},
                    {NHamlTokenType.CodeDefinition, new ColorableItem("NHaml - CodeDefinition", _COLORINDEX.CI_MAGENTA)},
                    {NHamlTokenType.EquationDefinition, new ColorableItem("NHaml = EquationDefinition", _COLORINDEX.CI_MAGENTA)},
                };

        public void GetItemCount(out int piCount)
        {
            // NHamlTokenType.PlainText is 0 and is implied
            // all other color indexes are 1 based, and will be
            // returned by GetColorableItem from the _color collection

            var greatestTokenType = Enum.GetValues(typeof(NHamlTokenType)).Cast<NHamlTokenType>().Max();
            piCount = (int)greatestTokenType;
        }

        public void GetColorableItem(int iIndex, out IVsColorableItem ppItem)
        {
            if (!_colors.TryGetValue((NHamlTokenType)iIndex, out  ppItem))
            {
                throw new IndexOutOfRangeException();
            }
        }
    }
}
