// dllmain.h : Declaration of module class.

class CNHamlLanguagePackageModule : public CAtlDllModuleT< CNHamlLanguagePackageModule >
{
public :
//	DECLARE_LIBID(LIBID_NHamlLanguagePackageLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_NHAMLLANGUAGEPACKAGE, "{3de53663-f0a8-4644-afec-82d107d0e490}")

	virtual HRESULT AddCommonRGSReplacements(IRegistrarBase* pRegistrar) throw()
	{
		HRESULT hr = CAtlDllModuleT< CNHamlLanguagePackageModule >::AddCommonRGSReplacements(pRegistrar);
		
		WCHAR wszModule[MAX_PATH + 2];
		DWORD dwModuleLength = GetModuleFileNameW(_AtlBaseModule.GetModuleInstance(), wszModule, MAX_PATH);
		while (dwModuleLength != 0 && wszModule[dwModuleLength - 1] != L'\\')
			wszModule[--dwModuleLength] = '\0';

		if (SUCCEEDED(hr))
			hr = pRegistrar->AddReplacement(L"Module_Path", wszModule);

		return hr;
	}
};

extern class CNHamlLanguagePackageModule _AtlModule;
