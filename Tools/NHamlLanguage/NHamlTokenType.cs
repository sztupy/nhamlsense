using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace NHamlLanguage
{
    public enum NHamlTokenType
    {
        PlainText = 0,
        TagDefinition,
        ClassDefinition,
        IdDefinition,
        PartialDefinition,
        CommentDefinition,
        CodeDefinition,
        EquationDefinition,
    }
}
