using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using NHamlLanguagePackageLib;

namespace NHamlLanguage
{
    public class SourceSupervisor : ISourceSupervisor
    {
        readonly INHamlSource _source;
        readonly string _path;

        uint _dwLastCookie;
        readonly IDictionary<uint, ISourceSupervisorEvents> _events = new Dictionary<uint, ISourceSupervisorEvents>();

        public SourceSupervisor(INHamlSource source)
        {
            _source = source;

            IVsHierarchy hierarchy;
            uint itemid;
            IVsTextLines buffer;
            _source.GetDocument(out hierarchy, out itemid, out buffer);
            _path = GetDocumentPath(hierarchy, itemid);
        }

        private static string GetDocumentPath(IVsHierarchy hierarchy, uint itemid)
        {
            var rootid = -2;
            var rootItem = new HierarchyItem(hierarchy, (uint)rootid);
            var viewItem = rootItem.FirstOrDefault(child => child.Name == "Views");

            var docItem = new HierarchyItem(hierarchy, itemid);
            var path = docItem.Name;
            while (!Equals(docItem.Parent, viewItem) &&
                   !Equals(docItem.Parent, rootItem))
            {
                docItem = docItem.Parent;
                path = docItem.Name + "\\" + path;
            }

            if (Equals(docItem.Parent, rootItem))
                path = "$\\" + path;

            return path;
        }

        public void Advise(ISourceSupervisorEvents pEvents, out uint pdwCookie)
        {
            pdwCookie = ++_dwLastCookie;
            _events[_dwLastCookie] = pEvents;
        }

        public void Unadvise(uint dwCookie)
        {
            if (_events.ContainsKey(dwCookie))
                _events.Remove(dwCookie);
        }


        public void PrimaryTextChanged(int processImmediately)
        {
            string primaryText = _source.GetPrimaryText();
            var sb = new NHamlParser(primaryText);

            sb.Parse();

            var result = sb.codeMapper.output;
            var mappings = sb.codeMapper.mappings;
            var paints = sb.codeMapper.paintings;

            int cMappings = mappings.Length;
            if (cMappings == 0)
                mappings = new _SOURCEMAPPING[1];

            int cPaints = paints.Length;
            if (cPaints == 0)
                paints = new _SOURCEPAINTING[1];

            foreach (var events in _events.Values)
            {
                events.OnGenerated(
                    primaryText,
                    result,
                    cMappings,
                    ref mappings[0],
                    cPaints,
                    ref paints[0]);
            }
        }

        public void OnTypeChar(IVsTextView pView, string ch)
        {
        }

    }
}
