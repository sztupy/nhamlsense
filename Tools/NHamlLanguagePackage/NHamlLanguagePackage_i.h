

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __NHamlLanguagePackage_i_h__
#define __NHamlLanguagePackage_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INHamlPackage_FWD_DEFINED__
#define __INHamlPackage_FWD_DEFINED__
typedef interface INHamlPackage INHamlPackage;
#endif 	/* __INHamlPackage_FWD_DEFINED__ */


#ifndef __INHamlLanguage_FWD_DEFINED__
#define __INHamlLanguage_FWD_DEFINED__
typedef interface INHamlLanguage INHamlLanguage;
#endif 	/* __INHamlLanguage_FWD_DEFINED__ */


#ifndef __NHamlLanguageService_FWD_DEFINED__
#define __NHamlLanguageService_FWD_DEFINED__
typedef interface NHamlLanguageService NHamlLanguageService;
#endif 	/* __NHamlLanguageService_FWD_DEFINED__ */


#ifndef __INHamlSource_FWD_DEFINED__
#define __INHamlSource_FWD_DEFINED__
typedef interface INHamlSource INHamlSource;
#endif 	/* __INHamlSource_FWD_DEFINED__ */


#ifndef __ILanguageSupervisor_FWD_DEFINED__
#define __ILanguageSupervisor_FWD_DEFINED__
typedef interface ILanguageSupervisor ILanguageSupervisor;
#endif 	/* __ILanguageSupervisor_FWD_DEFINED__ */


#ifndef __ISourceSupervisor_FWD_DEFINED__
#define __ISourceSupervisor_FWD_DEFINED__
typedef interface ISourceSupervisor ISourceSupervisor;
#endif 	/* __ISourceSupervisor_FWD_DEFINED__ */


#ifndef __ISourceSupervisorEvents_FWD_DEFINED__
#define __ISourceSupervisorEvents_FWD_DEFINED__
typedef interface ISourceSupervisorEvents ISourceSupervisorEvents;
#endif 	/* __ISourceSupervisorEvents_FWD_DEFINED__ */


#ifndef __IVsLanguageInfo_FWD_DEFINED__
#define __IVsLanguageInfo_FWD_DEFINED__
typedef interface IVsLanguageInfo IVsLanguageInfo;
#endif 	/* __IVsLanguageInfo_FWD_DEFINED__ */


#ifndef __IVsProvideColorableItems_FWD_DEFINED__
#define __IVsProvideColorableItems_FWD_DEFINED__
typedef interface IVsProvideColorableItems IVsProvideColorableItems;
#endif 	/* __IVsProvideColorableItems_FWD_DEFINED__ */


#ifndef __ILanguageSupervisor_FWD_DEFINED__
#define __ILanguageSupervisor_FWD_DEFINED__
typedef interface ILanguageSupervisor ILanguageSupervisor;
#endif 	/* __ILanguageSupervisor_FWD_DEFINED__ */


#ifndef __ISourceSupervisor_FWD_DEFINED__
#define __ISourceSupervisor_FWD_DEFINED__
typedef interface ISourceSupervisor ISourceSupervisor;
#endif 	/* __ISourceSupervisor_FWD_DEFINED__ */


#ifndef __NHamlLanguageService_FWD_DEFINED__
#define __NHamlLanguageService_FWD_DEFINED__
typedef interface NHamlLanguageService NHamlLanguageService;
#endif 	/* __NHamlLanguageService_FWD_DEFINED__ */


#ifndef __Package_FWD_DEFINED__
#define __Package_FWD_DEFINED__

#ifdef __cplusplus
typedef class Package Package;
#else
typedef struct Package Package;
#endif /* __cplusplus */

#endif 	/* __Package_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "singlefileeditor.h"
#include "containedlanguage.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_NHamlLanguagePackage_0000_0000 */
/* [local] */ 







typedef struct _SOURCEMAPPING
    {
    long start1;
    long end1;
    long start2;
    long end2;
    } 	SourceMapping;

typedef struct _SOURCEPAINTING
    {
    long start;
    long end;
    int color;
    } 	SourcePainting;



extern RPC_IF_HANDLE __MIDL_itf_NHamlLanguagePackage_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_NHamlLanguagePackage_0000_0000_v0_0_s_ifspec;

#ifndef __INHamlPackage_INTERFACE_DEFINED__
#define __INHamlPackage_INTERFACE_DEFINED__

/* interface INHamlPackage */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_INHamlPackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e162798c-580d-4c06-86f4-218119ffabb1")
    INHamlPackage : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct INHamlPackageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INHamlPackage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INHamlPackage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INHamlPackage * This);
        
        END_INTERFACE
    } INHamlPackageVtbl;

    interface INHamlPackage
    {
        CONST_VTBL struct INHamlPackageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INHamlPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INHamlPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INHamlPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INHamlPackage_INTERFACE_DEFINED__ */


#ifndef __INHamlLanguage_INTERFACE_DEFINED__
#define __INHamlLanguage_INTERFACE_DEFINED__

/* interface INHamlLanguage */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_INHamlLanguage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22a05037-36fd-441b-9073-002c8c5b55e1")
    INHamlLanguage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSupervisor( 
            /* [in] */ ILanguageSupervisor *pSupervisor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSupervisor( 
            /* [retval][out] */ ILanguageSupervisor **ppSupervisor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSource( 
            /* [in] */ IVsTextBuffer *pBuffer,
            /* [out] */ INHamlSource **ppSource) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INHamlLanguageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INHamlLanguage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INHamlLanguage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INHamlLanguage * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetSupervisor )( 
            INHamlLanguage * This,
            /* [in] */ ILanguageSupervisor *pSupervisor);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupervisor )( 
            INHamlLanguage * This,
            /* [retval][out] */ ILanguageSupervisor **ppSupervisor);
        
        HRESULT ( STDMETHODCALLTYPE *GetSource )( 
            INHamlLanguage * This,
            /* [in] */ IVsTextBuffer *pBuffer,
            /* [out] */ INHamlSource **ppSource);
        
        END_INTERFACE
    } INHamlLanguageVtbl;

    interface INHamlLanguage
    {
        CONST_VTBL struct INHamlLanguageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INHamlLanguage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INHamlLanguage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INHamlLanguage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INHamlLanguage_SetSupervisor(This,pSupervisor)	\
    ( (This)->lpVtbl -> SetSupervisor(This,pSupervisor) ) 

#define INHamlLanguage_GetSupervisor(This,ppSupervisor)	\
    ( (This)->lpVtbl -> GetSupervisor(This,ppSupervisor) ) 

#define INHamlLanguage_GetSource(This,pBuffer,ppSource)	\
    ( (This)->lpVtbl -> GetSource(This,pBuffer,ppSource) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INHamlLanguage_INTERFACE_DEFINED__ */


#ifndef __NHamlLanguageService_INTERFACE_DEFINED__
#define __NHamlLanguageService_INTERFACE_DEFINED__

/* interface NHamlLanguageService */
/* [object][uuid] */ 


EXTERN_C const IID IID_NHamlLanguageService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d69e4857-0cd5-41f3-91c9-bbf9d89ccbf6")
    NHamlLanguageService : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct NHamlLanguageServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            NHamlLanguageService * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            NHamlLanguageService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            NHamlLanguageService * This);
        
        END_INTERFACE
    } NHamlLanguageServiceVtbl;

    interface NHamlLanguageService
    {
        CONST_VTBL struct NHamlLanguageServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define NHamlLanguageService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define NHamlLanguageService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define NHamlLanguageService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __NHamlLanguageService_INTERFACE_DEFINED__ */


#ifndef __INHamlSource_INTERFACE_DEFINED__
#define __INHamlSource_INTERFACE_DEFINED__

/* interface INHamlSource */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_INHamlSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("226bd6da-2ebe-4410-ab22-03daac4fbe9b")
    INHamlSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSupervisor( 
            /* [in] */ ISourceSupervisor *pSupervisor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSupervisor( 
            /* [retval][out] */ ISourceSupervisor **ppSupervisor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIntellisenseProjectManager( 
            /* [retval][out] */ IVsIntellisenseProjectManager **ppProjectManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContainedLanguage( 
            /* [retval][out] */ IVsContainedLanguage **ppContainedLanguage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextBufferCoordinator( 
            /* [retval][out] */ IVsTextBufferCoordinator **ppCoordinator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDocument( 
            /* [out] */ IVsHierarchy **ppHierarchy,
            /* [out] */ VSITEMID *pItemId,
            /* [out] */ IVsTextLines **pBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrimaryText( 
            /* [retval][out] */ BSTR *pText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRunningDocumentText( 
            /* [in] */ BSTR CanonicalName,
            /* [retval][out] */ BSTR *pText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPaint( 
            /* [out] */ long *cPaint,
            /* [size_is][size_is][out] */ SourcePainting **prgPaint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultPageBaseType( 
            /* [retval][out] */ BSTR *pPageBaseType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INHamlSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INHamlSource * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INHamlSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INHamlSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetSupervisor )( 
            INHamlSource * This,
            /* [in] */ ISourceSupervisor *pSupervisor);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupervisor )( 
            INHamlSource * This,
            /* [retval][out] */ ISourceSupervisor **ppSupervisor);
        
        HRESULT ( STDMETHODCALLTYPE *GetIntellisenseProjectManager )( 
            INHamlSource * This,
            /* [retval][out] */ IVsIntellisenseProjectManager **ppProjectManager);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainedLanguage )( 
            INHamlSource * This,
            /* [retval][out] */ IVsContainedLanguage **ppContainedLanguage);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextBufferCoordinator )( 
            INHamlSource * This,
            /* [retval][out] */ IVsTextBufferCoordinator **ppCoordinator);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocument )( 
            INHamlSource * This,
            /* [out] */ IVsHierarchy **ppHierarchy,
            /* [out] */ VSITEMID *pItemId,
            /* [out] */ IVsTextLines **pBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrimaryText )( 
            INHamlSource * This,
            /* [retval][out] */ BSTR *pText);
        
        HRESULT ( STDMETHODCALLTYPE *GetRunningDocumentText )( 
            INHamlSource * This,
            /* [in] */ BSTR CanonicalName,
            /* [retval][out] */ BSTR *pText);
        
        HRESULT ( STDMETHODCALLTYPE *GetPaint )( 
            INHamlSource * This,
            /* [out] */ long *cPaint,
            /* [size_is][size_is][out] */ SourcePainting **prgPaint);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultPageBaseType )( 
            INHamlSource * This,
            /* [retval][out] */ BSTR *pPageBaseType);
        
        END_INTERFACE
    } INHamlSourceVtbl;

    interface INHamlSource
    {
        CONST_VTBL struct INHamlSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INHamlSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INHamlSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INHamlSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INHamlSource_SetSupervisor(This,pSupervisor)	\
    ( (This)->lpVtbl -> SetSupervisor(This,pSupervisor) ) 

#define INHamlSource_GetSupervisor(This,ppSupervisor)	\
    ( (This)->lpVtbl -> GetSupervisor(This,ppSupervisor) ) 

#define INHamlSource_GetIntellisenseProjectManager(This,ppProjectManager)	\
    ( (This)->lpVtbl -> GetIntellisenseProjectManager(This,ppProjectManager) ) 

#define INHamlSource_GetContainedLanguage(This,ppContainedLanguage)	\
    ( (This)->lpVtbl -> GetContainedLanguage(This,ppContainedLanguage) ) 

#define INHamlSource_GetTextBufferCoordinator(This,ppCoordinator)	\
    ( (This)->lpVtbl -> GetTextBufferCoordinator(This,ppCoordinator) ) 

#define INHamlSource_GetDocument(This,ppHierarchy,pItemId,pBuffer)	\
    ( (This)->lpVtbl -> GetDocument(This,ppHierarchy,pItemId,pBuffer) ) 

#define INHamlSource_GetPrimaryText(This,pText)	\
    ( (This)->lpVtbl -> GetPrimaryText(This,pText) ) 

#define INHamlSource_GetRunningDocumentText(This,CanonicalName,pText)	\
    ( (This)->lpVtbl -> GetRunningDocumentText(This,CanonicalName,pText) ) 

#define INHamlSource_GetPaint(This,cPaint,prgPaint)	\
    ( (This)->lpVtbl -> GetPaint(This,cPaint,prgPaint) ) 

#define INHamlSource_GetDefaultPageBaseType(This,pPageBaseType)	\
    ( (This)->lpVtbl -> GetDefaultPageBaseType(This,pPageBaseType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INHamlSource_INTERFACE_DEFINED__ */


#ifndef __ILanguageSupervisor_INTERFACE_DEFINED__
#define __ILanguageSupervisor_INTERFACE_DEFINED__

/* interface ILanguageSupervisor */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ILanguageSupervisor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c30c3f1b-4df2-4169-a83c-41e3905a3098")
    ILanguageSupervisor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnSourceAssociated( 
            /* [in] */ INHamlSource *pSource) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILanguageSupervisorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILanguageSupervisor * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILanguageSupervisor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILanguageSupervisor * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnSourceAssociated )( 
            ILanguageSupervisor * This,
            /* [in] */ INHamlSource *pSource);
        
        END_INTERFACE
    } ILanguageSupervisorVtbl;

    interface ILanguageSupervisor
    {
        CONST_VTBL struct ILanguageSupervisorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILanguageSupervisor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILanguageSupervisor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILanguageSupervisor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILanguageSupervisor_OnSourceAssociated(This,pSource)	\
    ( (This)->lpVtbl -> OnSourceAssociated(This,pSource) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILanguageSupervisor_INTERFACE_DEFINED__ */


#ifndef __ISourceSupervisor_INTERFACE_DEFINED__
#define __ISourceSupervisor_INTERFACE_DEFINED__

/* interface ISourceSupervisor */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISourceSupervisor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44441712-de0c-4f4b-b0f0-4244cb69cabd")
    ISourceSupervisor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ISourceSupervisorEvents *pEvents,
            /* [out] */ DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrimaryTextChanged( 
            /* [in] */ BOOL processImmediately) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnTypeChar( 
            /* [in] */ IVsTextView *pView,
            /* [in] */ BSTR ch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISourceSupervisorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISourceSupervisor * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISourceSupervisor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISourceSupervisor * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ISourceSupervisor * This,
            /* [in] */ ISourceSupervisorEvents *pEvents,
            /* [out] */ DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ISourceSupervisor * This,
            /* [in] */ DWORD pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *PrimaryTextChanged )( 
            ISourceSupervisor * This,
            /* [in] */ BOOL processImmediately);
        
        HRESULT ( STDMETHODCALLTYPE *OnTypeChar )( 
            ISourceSupervisor * This,
            /* [in] */ IVsTextView *pView,
            /* [in] */ BSTR ch);
        
        END_INTERFACE
    } ISourceSupervisorVtbl;

    interface ISourceSupervisor
    {
        CONST_VTBL struct ISourceSupervisorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISourceSupervisor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISourceSupervisor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISourceSupervisor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISourceSupervisor_Advise(This,pEvents,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pEvents,pdwCookie) ) 

#define ISourceSupervisor_Unadvise(This,pdwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,pdwCookie) ) 

#define ISourceSupervisor_PrimaryTextChanged(This,processImmediately)	\
    ( (This)->lpVtbl -> PrimaryTextChanged(This,processImmediately) ) 

#define ISourceSupervisor_OnTypeChar(This,pView,ch)	\
    ( (This)->lpVtbl -> OnTypeChar(This,pView,ch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISourceSupervisor_INTERFACE_DEFINED__ */


#ifndef __ISourceSupervisorEvents_INTERFACE_DEFINED__
#define __ISourceSupervisorEvents_INTERFACE_DEFINED__

/* interface ISourceSupervisorEvents */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISourceSupervisorEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7cf10c9a-33d8-4d3e-a166-7a472c8caeaf")
    ISourceSupervisorEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnGenerated( 
            /* [in] */ BSTR primaryText,
            /* [in] */ BSTR secondaryText,
            /* [in] */ long cMappings,
            /* [size_is][in] */ SourceMapping *rgSpans,
            /* [in] */ long cPaints,
            /* [size_is][in] */ SourcePainting *rgPaints) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISourceSupervisorEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISourceSupervisorEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISourceSupervisorEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISourceSupervisorEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnGenerated )( 
            ISourceSupervisorEvents * This,
            /* [in] */ BSTR primaryText,
            /* [in] */ BSTR secondaryText,
            /* [in] */ long cMappings,
            /* [size_is][in] */ SourceMapping *rgSpans,
            /* [in] */ long cPaints,
            /* [size_is][in] */ SourcePainting *rgPaints);
        
        END_INTERFACE
    } ISourceSupervisorEventsVtbl;

    interface ISourceSupervisorEvents
    {
        CONST_VTBL struct ISourceSupervisorEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISourceSupervisorEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISourceSupervisorEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISourceSupervisorEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISourceSupervisorEvents_OnGenerated(This,primaryText,secondaryText,cMappings,rgSpans,cPaints,rgPaints)	\
    ( (This)->lpVtbl -> OnGenerated(This,primaryText,secondaryText,cMappings,rgSpans,cPaints,rgPaints) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISourceSupervisorEvents_INTERFACE_DEFINED__ */



#ifndef __NHamlLanguagePackageLib_LIBRARY_DEFINED__
#define __NHamlLanguagePackageLib_LIBRARY_DEFINED__

/* library NHamlLanguagePackageLib */
/* [helpstring][version][uuid] */ 









EXTERN_C const IID LIBID_NHamlLanguagePackageLib;

#ifndef __IVsLanguageInfo_INTERFACE_DEFINED__
#define __IVsLanguageInfo_INTERFACE_DEFINED__

/* interface IVsLanguageInfo */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsLanguageInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11DDB920-52C7-4237-8610-9FE8BB11656D")
    IVsLanguageInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLanguageName( 
            /* [out] */ BSTR *bstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileExtensions( 
            /* [out] */ BSTR *pbstrExtensions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColorizer( 
            /* [in] */ IVsTextLines *pBuffer,
            /* [out] */ IVsColorizer **ppColorizer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodeWindowManager( 
            /* [in] */ IVsCodeWindow *pCodeWin,
            /* [out] */ IVsCodeWindowManager **ppCodeWinMgr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVsLanguageInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsLanguageInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsLanguageInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsLanguageInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLanguageName )( 
            IVsLanguageInfo * This,
            /* [out] */ BSTR *bstrName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileExtensions )( 
            IVsLanguageInfo * This,
            /* [out] */ BSTR *pbstrExtensions);
        
        HRESULT ( STDMETHODCALLTYPE *GetColorizer )( 
            IVsLanguageInfo * This,
            /* [in] */ IVsTextLines *pBuffer,
            /* [out] */ IVsColorizer **ppColorizer);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodeWindowManager )( 
            IVsLanguageInfo * This,
            /* [in] */ IVsCodeWindow *pCodeWin,
            /* [out] */ IVsCodeWindowManager **ppCodeWinMgr);
        
        END_INTERFACE
    } IVsLanguageInfoVtbl;

    interface IVsLanguageInfo
    {
        CONST_VTBL struct IVsLanguageInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsLanguageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsLanguageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsLanguageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsLanguageInfo_GetLanguageName(This,bstrName)	\
    ( (This)->lpVtbl -> GetLanguageName(This,bstrName) ) 

#define IVsLanguageInfo_GetFileExtensions(This,pbstrExtensions)	\
    ( (This)->lpVtbl -> GetFileExtensions(This,pbstrExtensions) ) 

#define IVsLanguageInfo_GetColorizer(This,pBuffer,ppColorizer)	\
    ( (This)->lpVtbl -> GetColorizer(This,pBuffer,ppColorizer) ) 

#define IVsLanguageInfo_GetCodeWindowManager(This,pCodeWin,ppCodeWinMgr)	\
    ( (This)->lpVtbl -> GetCodeWindowManager(This,pCodeWin,ppCodeWinMgr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IVsLanguageInfo_GetLanguageName_Proxy( 
    IVsLanguageInfo * This,
    /* [out] */ BSTR *bstrName);


void __RPC_STUB IVsLanguageInfo_GetLanguageName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IVsLanguageInfo_GetFileExtensions_Proxy( 
    IVsLanguageInfo * This,
    /* [out] */ BSTR *pbstrExtensions);


void __RPC_STUB IVsLanguageInfo_GetFileExtensions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IVsLanguageInfo_GetColorizer_Proxy( 
    IVsLanguageInfo * This,
    /* [in] */ IVsTextLines *pBuffer,
    /* [out] */ IVsColorizer **ppColorizer);


void __RPC_STUB IVsLanguageInfo_GetColorizer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IVsLanguageInfo_GetCodeWindowManager_Proxy( 
    IVsLanguageInfo * This,
    /* [in] */ IVsCodeWindow *pCodeWin,
    /* [out] */ IVsCodeWindowManager **ppCodeWinMgr);


void __RPC_STUB IVsLanguageInfo_GetCodeWindowManager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVsLanguageInfo_INTERFACE_DEFINED__ */


#ifndef __IVsProvideColorableItems_INTERFACE_DEFINED__
#define __IVsProvideColorableItems_INTERFACE_DEFINED__

/* interface IVsProvideColorableItems */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVsProvideColorableItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("100B9A33-905C-4312-B2A2-452189F19AB9")
    IVsProvideColorableItems : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetItemCount( 
            /* [out] */ int *piCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColorableItem( 
            /* [in] */ int iIndex,
            /* [out] */ IVsColorableItem **ppItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVsProvideColorableItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVsProvideColorableItems * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVsProvideColorableItems * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVsProvideColorableItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemCount )( 
            IVsProvideColorableItems * This,
            /* [out] */ int *piCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetColorableItem )( 
            IVsProvideColorableItems * This,
            /* [in] */ int iIndex,
            /* [out] */ IVsColorableItem **ppItem);
        
        END_INTERFACE
    } IVsProvideColorableItemsVtbl;

    interface IVsProvideColorableItems
    {
        CONST_VTBL struct IVsProvideColorableItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVsProvideColorableItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVsProvideColorableItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVsProvideColorableItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVsProvideColorableItems_GetItemCount(This,piCount)	\
    ( (This)->lpVtbl -> GetItemCount(This,piCount) ) 

#define IVsProvideColorableItems_GetColorableItem(This,iIndex,ppItem)	\
    ( (This)->lpVtbl -> GetColorableItem(This,iIndex,ppItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IVsProvideColorableItems_GetItemCount_Proxy( 
    IVsProvideColorableItems * This,
    /* [out] */ int *piCount);


void __RPC_STUB IVsProvideColorableItems_GetItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IVsProvideColorableItems_GetColorableItem_Proxy( 
    IVsProvideColorableItems * This,
    /* [in] */ int iIndex,
    /* [out] */ IVsColorableItem **ppItem);


void __RPC_STUB IVsProvideColorableItems_GetColorableItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVsProvideColorableItems_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Package;

#ifdef __cplusplus

class DECLSPEC_UUID("129e4f09-abae-4d87-abf3-b8ae192df3c0")
Package;
#endif
#endif /* __NHamlLanguagePackageLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


