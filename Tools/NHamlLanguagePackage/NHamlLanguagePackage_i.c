

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 03 23:12:29 2010
 */
/* Compiler settings for .\NHamlLanguagePackage.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_INHamlPackage,0xe162798c,0x580d,0x4c06,0x86,0xf4,0x21,0x81,0x19,0xff,0xab,0xb1);


MIDL_DEFINE_GUID(IID, IID_INHamlLanguage,0x22a05037,0x36fd,0x441b,0x90,0x73,0x00,0x2c,0x8c,0x5b,0x55,0xe1);


MIDL_DEFINE_GUID(IID, IID_NHamlLanguageService,0xd69e4857,0x0cd5,0x41f3,0x91,0xc9,0xbb,0xf9,0xd8,0x9c,0xcb,0xf6);


MIDL_DEFINE_GUID(IID, IID_INHamlSource,0x226bd6da,0x2ebe,0x4410,0xab,0x22,0x03,0xda,0xac,0x4f,0xbe,0x9b);


MIDL_DEFINE_GUID(IID, IID_ILanguageSupervisor,0xc30c3f1b,0x4df2,0x4169,0xa8,0x3c,0x41,0xe3,0x90,0x5a,0x30,0x98);


MIDL_DEFINE_GUID(IID, IID_ISourceSupervisor,0x44441712,0xde0c,0x4f4b,0xb0,0xf0,0x42,0x44,0xcb,0x69,0xca,0xbd);


MIDL_DEFINE_GUID(IID, IID_ISourceSupervisorEvents,0x7cf10c9a,0x33d8,0x4d3e,0xa1,0x66,0x7a,0x47,0x2c,0x8c,0xae,0xaf);


MIDL_DEFINE_GUID(IID, LIBID_NHamlLanguagePackageLib,0xb5442924,0xfb3a,0x4458,0xb8,0xa5,0xa2,0xd0,0x49,0xdb,0x7c,0xba);


MIDL_DEFINE_GUID(IID, IID_IVsLanguageInfo,0x11DDB920,0x52C7,0x4237,0x86,0x10,0x9F,0xE8,0xBB,0x11,0x65,0x6D);


MIDL_DEFINE_GUID(IID, IID_IVsProvideColorableItems,0x100B9A33,0x905C,0x4312,0xB2,0xA2,0x45,0x21,0x89,0xF1,0x9A,0xB9);


MIDL_DEFINE_GUID(CLSID, CLSID_Package,0x129e4f09,0xabae,0x4d87,0xab,0xf3,0xb8,0xae,0x19,0x2d,0xf3,0xc0);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



