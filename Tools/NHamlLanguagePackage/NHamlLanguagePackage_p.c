

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "NHamlLanguagePackage_i.h"

#define TYPE_FORMAT_STRING_SIZE   391                               
#define PROC_FORMAT_STRING_SIZE   757                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _NHamlLanguagePackage_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } NHamlLanguagePackage_MIDL_TYPE_FORMAT_STRING;

typedef struct _NHamlLanguagePackage_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } NHamlLanguagePackage_MIDL_PROC_FORMAT_STRING;

typedef struct _NHamlLanguagePackage_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } NHamlLanguagePackage_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const NHamlLanguagePackage_MIDL_TYPE_FORMAT_STRING NHamlLanguagePackage__MIDL_TypeFormatString;
extern const NHamlLanguagePackage_MIDL_PROC_FORMAT_STRING NHamlLanguagePackage__MIDL_ProcFormatString;
extern const NHamlLanguagePackage_MIDL_EXPR_FORMAT_STRING NHamlLanguagePackage__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INHamlPackage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INHamlPackage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INHamlLanguage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INHamlLanguage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO NHamlLanguageService_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO NHamlLanguageService_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INHamlSource_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INHamlSource_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILanguageSupervisor_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILanguageSupervisor_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISourceSupervisor_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISourceSupervisor_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISourceSupervisorEvents_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISourceSupervisorEvents_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const NHamlLanguagePackage_MIDL_PROC_FORMAT_STRING NHamlLanguagePackage__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SetSupervisor */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSupervisor */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSupervisor */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppSupervisor */

/* 60 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSource */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x5 ),	/* 5 */
/* 80 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBuffer */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter ppSource */

/* 102 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSupervisor */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x3 ),	/* 3 */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSupervisor */

/* 138 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSupervisor */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppSupervisor */

/* 174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIntellisenseProjectManager */

/* 186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x5 ),	/* 5 */
/* 194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppProjectManager */

/* 210 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 214 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainedLanguage */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x6 ),	/* 6 */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppContainedLanguage */

/* 246 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTextBufferCoordinator */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x7 ),	/* 7 */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppCoordinator */

/* 282 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDocument */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 302 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x24 ),	/* 36 */
/* 308 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppHierarchy */

/* 318 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Parameter pItemId */

/* 324 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBuffer */

/* 330 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPrimaryText */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x9 ),	/* 9 */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 358 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 360 */	NdrFcShort( 0x1 ),	/* 1 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pText */

/* 366 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRunningDocumentText */

/* 378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0xa ),	/* 10 */
/* 386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 392 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 394 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter CanonicalName */

/* 402 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 406 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Parameter pText */

/* 408 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 412 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPaint */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0xb ),	/* 11 */
/* 428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x24 ),	/* 36 */
/* 434 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 436 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cPaint */

/* 444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgPaint */

/* 450 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDefaultPageBaseType */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0xc ),	/* 12 */
/* 470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 478 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 480 */	NdrFcShort( 0x6 ),	/* 6 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPageBaseType */

/* 486 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnSourceAssociated */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x3 ),	/* 3 */
/* 506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSource */

/* 522 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 526 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Advise */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x3 ),	/* 3 */
/* 542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x24 ),	/* 36 */
/* 548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 550 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEvents */

/* 558 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 562 */	NdrFcShort( 0x130 ),	/* Type Offset=304 */

	/* Parameter pdwCookie */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Unadvise */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x4 ),	/* 4 */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCookie */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PrimaryTextChanged */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x5 ),	/* 5 */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter processImmediately */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTypeChar */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x6 ),	/* 6 */
/* 656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 664 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pView */

/* 672 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Parameter ch */

/* 678 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnGenerated */

/* 690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x3 ),	/* 3 */
/* 698 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 700 */	NdrFcShort( 0x10 ),	/* 16 */
/* 702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 704 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 706 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter primaryText */

/* 714 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 718 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Parameter secondaryText */

/* 720 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 724 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Parameter cMappings */

/* 726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgSpans */

/* 732 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 736 */	NdrFcShort( 0x162 ),	/* Type Offset=354 */

	/* Parameter cPaints */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgPaints */

/* 744 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 746 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 748 */	NdrFcShort( 0x176 ),	/* Type Offset=374 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const NHamlLanguagePackage_MIDL_TYPE_FORMAT_STRING NHamlLanguagePackage__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0xc30c3f1b ),	/* -1022607589 */
/*  8 */	NdrFcShort( 0x4df2 ),	/* 19954 */
/* 10 */	NdrFcShort( 0x4169 ),	/* 16745 */
/* 12 */	0xa8,		/* 168 */
			0x3c,		/* 60 */
/* 14 */	0x41,		/* 65 */
			0xe3,		/* 227 */
/* 16 */	0x90,		/* 144 */
			0x5a,		/* 90 */
/* 18 */	0x30,		/* 48 */
			0x98,		/* 152 */
/* 20 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 22 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2) */
/* 24 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 26 */	NdrFcLong( 0xc08e5275 ),	/* -1064414603 */
/* 30 */	NdrFcShort( 0xd26 ),	/* 3366 */
/* 32 */	NdrFcShort( 0x4de9 ),	/* 19945 */
/* 34 */	0x88,		/* 136 */
			0x92,		/* 146 */
/* 36 */	0x99,		/* 153 */
			0x40,		/* 64 */
/* 38 */	0x24,		/* 36 */
			0xc2,		/* 194 */
/* 40 */	0x37,		/* 55 */
			0x50,		/* 80 */
/* 42 */	0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 44 */	NdrFcShort( 0x2 ),	/* Offset= 2 (46) */
/* 46 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 48 */	NdrFcLong( 0x226bd6da ),	/* 577492698 */
/* 52 */	NdrFcShort( 0x2ebe ),	/* 11966 */
/* 54 */	NdrFcShort( 0x4410 ),	/* 17424 */
/* 56 */	0xab,		/* 171 */
			0x22,		/* 34 */
/* 58 */	0x3,		/* 3 */
			0xda,		/* 218 */
/* 60 */	0xac,		/* 172 */
			0x4f,		/* 79 */
/* 62 */	0xbe,		/* 190 */
			0x9b,		/* 155 */
/* 64 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 66 */	NdrFcLong( 0x44441712 ),	/* 1145313042 */
/* 70 */	NdrFcShort( 0xde0c ),	/* -8692 */
/* 72 */	NdrFcShort( 0x4f4b ),	/* 20299 */
/* 74 */	0xb0,		/* 176 */
			0xf0,		/* 240 */
/* 76 */	0x42,		/* 66 */
			0x44,		/* 68 */
/* 78 */	0xcb,		/* 203 */
			0x69,		/* 105 */
/* 80 */	0xca,		/* 202 */
			0xbd,		/* 189 */
/* 82 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 84 */	NdrFcShort( 0xffec ),	/* Offset= -20 (64) */
/* 86 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 88 */	NdrFcShort( 0x2 ),	/* Offset= 2 (90) */
/* 90 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 92 */	NdrFcLong( 0xb299765f ),	/* -1298565537 */
/* 96 */	NdrFcShort( 0x1fc2 ),	/* 8130 */
/* 98 */	NdrFcShort( 0x41a7 ),	/* 16807 */
/* 100 */	0xbe,		/* 190 */
			0xc1,		/* 193 */
/* 102 */	0x64,		/* 100 */
			0x72,		/* 114 */
/* 104 */	0x1d,		/* 29 */
			0x86,		/* 134 */
/* 106 */	0xe6,		/* 230 */
			0x58,		/* 88 */
/* 108 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (112) */
/* 112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 114 */	NdrFcLong( 0x518ab114 ),	/* 1368043796 */
/* 118 */	NdrFcShort( 0xe3c6 ),	/* -7226 */
/* 120 */	NdrFcShort( 0x4bbc ),	/* 19388 */
/* 122 */	0xa4,		/* 164 */
			0x69,		/* 105 */
/* 124 */	0x99,		/* 153 */
			0x27,		/* 39 */
/* 126 */	0x9f,		/* 159 */
			0x1a,		/* 26 */
/* 128 */	0x54,		/* 84 */
			0xe9,		/* 233 */
/* 130 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (134) */
/* 134 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 136 */	NdrFcLong( 0x84465401 ),	/* -2075765759 */
/* 140 */	NdrFcShort( 0x2886 ),	/* 10374 */
/* 142 */	NdrFcShort( 0x4ce0 ),	/* 19680 */
/* 144 */	0xaf,		/* 175 */
			0x50,		/* 80 */
/* 146 */	0xc0,		/* 192 */
			0x56,		/* 86 */
/* 148 */	0x2,		/* 2 */
			0x26,		/* 38 */
/* 150 */	0xed,		/* 237 */
			0x40,		/* 64 */
/* 152 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 154 */	NdrFcShort( 0x2 ),	/* Offset= 2 (156) */
/* 156 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 158 */	NdrFcLong( 0x59b2d1d0 ),	/* 1504891344 */
/* 162 */	NdrFcShort( 0x5db0 ),	/* 23984 */
/* 164 */	NdrFcShort( 0x4f9f ),	/* 20383 */
/* 166 */	0x96,		/* 150 */
			0x9,		/* 9 */
/* 168 */	0x13,		/* 19 */
			0xf0,		/* 240 */
/* 170 */	0x16,		/* 22 */
			0x85,		/* 133 */
/* 172 */	0x16,		/* 22 */
			0xd6,		/* 214 */
/* 174 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 176 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 180 */	NdrFcShort( 0x2 ),	/* Offset= 2 (182) */
/* 182 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 184 */	NdrFcLong( 0xecf3e19d ),	/* -319561315 */
/* 188 */	NdrFcShort( 0x149c ),	/* 5276 */
/* 190 */	NdrFcShort( 0x43aa ),	/* 17322 */
/* 192 */	0x80,		/* 128 */
			0xc2,		/* 194 */
/* 194 */	0xd0,		/* 208 */
			0xa4,		/* 164 */
/* 196 */	0x69,		/* 105 */
			0x46,		/* 70 */
/* 198 */	0xda,		/* 218 */
			0xa3,		/* 163 */
/* 200 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 202 */	NdrFcShort( 0x1c ),	/* Offset= 28 (230) */
/* 204 */	
			0x13, 0x0,	/* FC_OP */
/* 206 */	NdrFcShort( 0xe ),	/* Offset= 14 (220) */
/* 208 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 210 */	NdrFcShort( 0x2 ),	/* 2 */
/* 212 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 214 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 216 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 218 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 220 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (208) */
/* 226 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 228 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 230 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0xffde ),	/* Offset= -34 (204) */
/* 240 */	
			0x12, 0x0,	/* FC_UP */
/* 242 */	NdrFcShort( 0xffea ),	/* Offset= -22 (220) */
/* 244 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x4 ),	/* 4 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (240) */
/* 254 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 256 */	NdrFcShort( 0x2 ),	/* Offset= 2 (258) */
/* 258 */	
			0x13, 0x0,	/* FC_OP */
/* 260 */	NdrFcShort( 0xa ),	/* Offset= 10 (270) */
/* 262 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 264 */	NdrFcShort( 0xc ),	/* 12 */
/* 266 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 268 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 270 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 272 */	NdrFcShort( 0xc ),	/* 12 */
/* 274 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 278 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 280 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 282 */	NdrFcShort( 0xffec ),	/* Offset= -20 (262) */
/* 284 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 286 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 288 */	NdrFcLong( 0x226bd6da ),	/* 577492698 */
/* 292 */	NdrFcShort( 0x2ebe ),	/* 11966 */
/* 294 */	NdrFcShort( 0x4410 ),	/* 17424 */
/* 296 */	0xab,		/* 171 */
			0x22,		/* 34 */
/* 298 */	0x3,		/* 3 */
			0xda,		/* 218 */
/* 300 */	0xac,		/* 172 */
			0x4f,		/* 79 */
/* 302 */	0xbe,		/* 190 */
			0x9b,		/* 155 */
/* 304 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 306 */	NdrFcLong( 0x7cf10c9a ),	/* 2096172186 */
/* 310 */	NdrFcShort( 0x33d8 ),	/* 13272 */
/* 312 */	NdrFcShort( 0x4d3e ),	/* 19774 */
/* 314 */	0xa1,		/* 161 */
			0x66,		/* 102 */
/* 316 */	0x7a,		/* 122 */
			0x47,		/* 71 */
/* 318 */	0x2c,		/* 44 */
			0x8c,		/* 140 */
/* 320 */	0xae,		/* 174 */
			0xaf,		/* 175 */
/* 322 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 324 */	NdrFcLong( 0xbb23a14b ),	/* -1155292853 */
/* 328 */	NdrFcShort( 0x7c61 ),	/* 31841 */
/* 330 */	NdrFcShort( 0x469a ),	/* 18074 */
/* 332 */	0x98,		/* 152 */
			0x90,		/* 144 */
/* 334 */	0xa9,		/* 169 */
			0x56,		/* 86 */
/* 336 */	0x48,		/* 72 */
			0xce,		/* 206 */
/* 338 */	0xd5,		/* 213 */
			0xe6,		/* 230 */
/* 340 */	
			0x11, 0x0,	/* FC_RP */
/* 342 */	NdrFcShort( 0xc ),	/* Offset= 12 (354) */
/* 344 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 346 */	NdrFcShort( 0x10 ),	/* 16 */
/* 348 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 350 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 352 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 354 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 356 */	NdrFcShort( 0x10 ),	/* 16 */
/* 358 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 362 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 364 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 366 */	NdrFcShort( 0xffea ),	/* Offset= -22 (344) */
/* 368 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 370 */	
			0x11, 0x0,	/* FC_RP */
/* 372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (374) */
/* 374 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 376 */	NdrFcShort( 0xc ),	/* 12 */
/* 378 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 380 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 382 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 384 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 386 */	NdrFcShort( 0xff84 ),	/* Offset= -124 (262) */
/* 388 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Standard interface: __MIDL_itf_NHamlLanguagePackage_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: INHamlPackage, ver. 0.0,
   GUID={0xe162798c,0x580d,0x4c06,{0x86,0xf4,0x21,0x81,0x19,0xff,0xab,0xb1}} */

#pragma code_seg(".orpc")
static const unsigned short INHamlPackage_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO INHamlPackage_ProxyInfo =
    {
    &Object_StubDesc,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &INHamlPackage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO INHamlPackage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &INHamlPackage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _INHamlPackageProxyVtbl = 
{
    0,
    &IID_INHamlPackage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _INHamlPackageStubVtbl =
{
    &IID_INHamlPackage,
    &INHamlPackage_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: INHamlLanguage, ver. 0.0,
   GUID={0x22a05037,0x36fd,0x441b,{0x90,0x73,0x00,0x2c,0x8c,0x5b,0x55,0xe1}} */

#pragma code_seg(".orpc")
static const unsigned short INHamlLanguage_FormatStringOffsetTable[] =
    {
    0,
    36,
    72
    };

static const MIDL_STUBLESS_PROXY_INFO INHamlLanguage_ProxyInfo =
    {
    &Object_StubDesc,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &INHamlLanguage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO INHamlLanguage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &INHamlLanguage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _INHamlLanguageProxyVtbl = 
{
    &INHamlLanguage_ProxyInfo,
    &IID_INHamlLanguage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* INHamlLanguage::SetSupervisor */ ,
    (void *) (INT_PTR) -1 /* INHamlLanguage::GetSupervisor */ ,
    (void *) (INT_PTR) -1 /* INHamlLanguage::GetSource */
};

const CInterfaceStubVtbl _INHamlLanguageStubVtbl =
{
    &IID_INHamlLanguage,
    &INHamlLanguage_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: NHamlLanguageService, ver. 0.0,
   GUID={0xd69e4857,0x0cd5,0x41f3,{0x91,0xc9,0xbb,0xf9,0xd8,0x9c,0xcb,0xf6}} */

#pragma code_seg(".orpc")
static const unsigned short NHamlLanguageService_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO NHamlLanguageService_ProxyInfo =
    {
    &Object_StubDesc,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &NHamlLanguageService_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO NHamlLanguageService_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &NHamlLanguageService_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _NHamlLanguageServiceProxyVtbl = 
{
    0,
    &IID_NHamlLanguageService,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _NHamlLanguageServiceStubVtbl =
{
    &IID_NHamlLanguageService,
    &NHamlLanguageService_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: INHamlSource, ver. 0.0,
   GUID={0x226bd6da,0x2ebe,0x4410,{0xab,0x22,0x03,0xda,0xac,0x4f,0xbe,0x9b}} */

#pragma code_seg(".orpc")
static const unsigned short INHamlSource_FormatStringOffsetTable[] =
    {
    114,
    150,
    186,
    222,
    258,
    294,
    342,
    378,
    420,
    462
    };

static const MIDL_STUBLESS_PROXY_INFO INHamlSource_ProxyInfo =
    {
    &Object_StubDesc,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &INHamlSource_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO INHamlSource_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &INHamlSource_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _INHamlSourceProxyVtbl = 
{
    &INHamlSource_ProxyInfo,
    &IID_INHamlSource,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* INHamlSource::SetSupervisor */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetSupervisor */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetIntellisenseProjectManager */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetContainedLanguage */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetTextBufferCoordinator */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetDocument */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetPrimaryText */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetRunningDocumentText */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetPaint */ ,
    (void *) (INT_PTR) -1 /* INHamlSource::GetDefaultPageBaseType */
};

const CInterfaceStubVtbl _INHamlSourceStubVtbl =
{
    &IID_INHamlSource,
    &INHamlSource_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ILanguageSupervisor, ver. 0.0,
   GUID={0xc30c3f1b,0x4df2,0x4169,{0xa8,0x3c,0x41,0xe3,0x90,0x5a,0x30,0x98}} */

#pragma code_seg(".orpc")
static const unsigned short ILanguageSupervisor_FormatStringOffsetTable[] =
    {
    498
    };

static const MIDL_STUBLESS_PROXY_INFO ILanguageSupervisor_ProxyInfo =
    {
    &Object_StubDesc,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &ILanguageSupervisor_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILanguageSupervisor_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &ILanguageSupervisor_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ILanguageSupervisorProxyVtbl = 
{
    &ILanguageSupervisor_ProxyInfo,
    &IID_ILanguageSupervisor,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ILanguageSupervisor::OnSourceAssociated */
};

const CInterfaceStubVtbl _ILanguageSupervisorStubVtbl =
{
    &IID_ILanguageSupervisor,
    &ILanguageSupervisor_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISourceSupervisor, ver. 0.0,
   GUID={0x44441712,0xde0c,0x4f4b,{0xb0,0xf0,0x42,0x44,0xcb,0x69,0xca,0xbd}} */

#pragma code_seg(".orpc")
static const unsigned short ISourceSupervisor_FormatStringOffsetTable[] =
    {
    534,
    576,
    612,
    648
    };

static const MIDL_STUBLESS_PROXY_INFO ISourceSupervisor_ProxyInfo =
    {
    &Object_StubDesc,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &ISourceSupervisor_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISourceSupervisor_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &ISourceSupervisor_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ISourceSupervisorProxyVtbl = 
{
    &ISourceSupervisor_ProxyInfo,
    &IID_ISourceSupervisor,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISourceSupervisor::Advise */ ,
    (void *) (INT_PTR) -1 /* ISourceSupervisor::Unadvise */ ,
    (void *) (INT_PTR) -1 /* ISourceSupervisor::PrimaryTextChanged */ ,
    (void *) (INT_PTR) -1 /* ISourceSupervisor::OnTypeChar */
};

const CInterfaceStubVtbl _ISourceSupervisorStubVtbl =
{
    &IID_ISourceSupervisor,
    &ISourceSupervisor_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISourceSupervisorEvents, ver. 0.0,
   GUID={0x7cf10c9a,0x33d8,0x4d3e,{0xa1,0x66,0x7a,0x47,0x2c,0x8c,0xae,0xaf}} */

#pragma code_seg(".orpc")
static const unsigned short ISourceSupervisorEvents_FormatStringOffsetTable[] =
    {
    690
    };

static const MIDL_STUBLESS_PROXY_INFO ISourceSupervisorEvents_ProxyInfo =
    {
    &Object_StubDesc,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &ISourceSupervisorEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISourceSupervisorEvents_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NHamlLanguagePackage__MIDL_ProcFormatString.Format,
    &ISourceSupervisorEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ISourceSupervisorEventsProxyVtbl = 
{
    &ISourceSupervisorEvents_ProxyInfo,
    &IID_ISourceSupervisorEvents,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISourceSupervisorEvents::OnGenerated */
};

const CInterfaceStubVtbl _ISourceSupervisorEventsStubVtbl =
{
    &IID_ISourceSupervisorEvents,
    &ISourceSupervisorEvents_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    NHamlLanguagePackage__MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _NHamlLanguagePackage_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ISourceSupervisorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ILanguageSupervisorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INHamlLanguageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_NHamlLanguageServiceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INHamlPackageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISourceSupervisorEventsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INHamlSourceProxyVtbl,
    0
};

const CInterfaceStubVtbl * _NHamlLanguagePackage_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ISourceSupervisorStubVtbl,
    ( CInterfaceStubVtbl *) &_ILanguageSupervisorStubVtbl,
    ( CInterfaceStubVtbl *) &_INHamlLanguageStubVtbl,
    ( CInterfaceStubVtbl *) &_NHamlLanguageServiceStubVtbl,
    ( CInterfaceStubVtbl *) &_INHamlPackageStubVtbl,
    ( CInterfaceStubVtbl *) &_ISourceSupervisorEventsStubVtbl,
    ( CInterfaceStubVtbl *) &_INHamlSourceStubVtbl,
    0
};

PCInterfaceName const _NHamlLanguagePackage_InterfaceNamesList[] = 
{
    "ISourceSupervisor",
    "ILanguageSupervisor",
    "INHamlLanguage",
    "NHamlLanguageService",
    "INHamlPackage",
    "ISourceSupervisorEvents",
    "INHamlSource",
    0
};


#define _NHamlLanguagePackage_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _NHamlLanguagePackage, pIID, n)

int __stdcall _NHamlLanguagePackage_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _NHamlLanguagePackage, 7, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _NHamlLanguagePackage, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _NHamlLanguagePackage, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _NHamlLanguagePackage, 7, *pIndex )
    
}

const ExtendedProxyFileInfo NHamlLanguagePackage_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _NHamlLanguagePackage_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _NHamlLanguagePackage_StubVtblList,
    (const PCInterfaceName * ) & _NHamlLanguagePackage_InterfaceNamesList,
    0, // no delegation
    & _NHamlLanguagePackage_IID_Lookup, 
    7,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

