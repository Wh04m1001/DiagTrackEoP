

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for diag.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "diag_h.h"

#define TYPE_FORMAT_STRING_SIZE   419                               
#define PROC_FORMAT_STRING_SIZE   2165                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _diag_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } diag_MIDL_TYPE_FORMAT_STRING;

typedef struct _diag_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } diag_MIDL_PROC_FORMAT_STRING;

typedef struct _diag_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } diag_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const diag_MIDL_TYPE_FORMAT_STRING diag__MIDL_TypeFormatString;
extern const diag_MIDL_PROC_FORMAT_STRING diag__MIDL_ProcFormatString;
extern const diag_MIDL_EXPR_FORMAT_STRING diag__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: DefaultIfName, ver. 1.0,
   GUID={0x4c9dbf19,0xd39e,0x4bb9,{0x90,0xee,0x8f,0x71,0x79,0xb2,0x02,0x83}} */



static const RPC_CLIENT_INTERFACE DefaultIfName___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x4c9dbf19,0xd39e,0x4bb9,{0x90,0xee,0x8f,0x71,0x79,0xb2,0x02,0x83}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec = (RPC_IF_HANDLE)& DefaultIfName___RpcClientInterface;

extern const MIDL_STUB_DESC DefaultIfName_StubDesc;

static RPC_BINDING_HANDLE DefaultIfName__MIDL_AutoBindHandle;


long Proc0_UtcApi_IsScenarioActive( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [out] */ long *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc1_UtcApi_EscalateScenario( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [in] */ short arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6,
    /* [string][size_is][in] */ wchar_t **arg_7,
    /* [string][size_is][in] */ wchar_t **arg_8)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[46],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc2_UtcApi_EscalateScenarioAsync( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [in] */ short arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6,
    /* [string][size_is][in] */ wchar_t **arg_7,
    /* [string][size_is][in] */ wchar_t **arg_8)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[128],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc3_UtcApi_IsEscalationRunning( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [out] */ long *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[210],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc4_UtcApi_DownloadLatestSettingsForNamespace( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[256],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc5_UtcApi_DownloadLatestSettingsForNamespaceAsync( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[320],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc6_UtcApi_GetActiveScenarioList( 
    /* [in] */ handle_t IDL_handle,
    /* [size_is][size_is][ref][out] */ struct Struct_24_t **arg_1,
    /* [out] */ long *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[384],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc7_UtcApi_ForceUpload( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ unsigned char arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[430],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc8_UtcApi_ResetUsageMetrics( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[482],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc9_UtcApi_IsTraceRunning( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_1,
    /* [in] */ struct Struct_102_t *arg_2,
    /* [ref][out] */ short *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[516],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc10_UtcApi_GetActiveTraceRuntime( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_1,
    /* [out] */ hyper *arg_2,
    /* [out] */ hyper *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[568],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc11_UtcApi_GetKnownTraceList( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_1,
    /* [size_is][size_is][ref][out] */ struct Struct_102_t **arg_2,
    /* [out] */ long *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[620],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc12_UtcApi_DownloadLatestSettings( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[672],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc13_UtcApi_ReloadSettings( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[718],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc14_UtcApi_UpdateTimerConfiguration( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_164_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[752],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc15_UtcApi_ClearTimerConfiguration( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[798],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc16_UtcApi_GetNextScheduledFireTime( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ struct Struct_182_t *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[838],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc17_UtcApi_GetTimerConfiguration( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [out] */ struct Struct_164_t *arg_2,
    /* [out] */ long *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[890],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc18_UtcApi_GetCustomTraceList( 
    /* [in] */ handle_t IDL_handle,
    /* [string][size_is][size_is][ref][out] */ wchar_t ***arg_1,
    /* [out] */ long *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[942],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc19_UtcApi_StartCustomTrace( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ hyper arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[988],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc20_UtcApi_SnapCustomTrace( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1034],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc21_UtcApi_StopCustomTrace( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1074],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc22_UtcApi_EscalateScenario2( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [in] */ short arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ short arg_6,
    /* [in] */ long arg_7,
    /* [string][size_is][in] */ wchar_t **arg_8,
    /* [string][size_is][in] */ wchar_t **arg_9)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1108],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc23_UtcApi_EscalateScenarioAsync2( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [in] */ short arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ short arg_6,
    /* [in] */ long arg_7,
    /* [string][size_is][in] */ wchar_t **arg_8,
    /* [string][size_is][in] */ wchar_t **arg_9)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1196],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc24_UtcApi_GetActiveTraceInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_1,
    /* [out] */ struct Struct_102_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1284],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc25_UtcApi_EnableWERLocalReports( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1330],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc26_UtcApi_RestoreWERLocalReportsSettings( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1364],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc27_UtcApi_QueryWERLocalReportsEnabled( 
    /* [in] */ handle_t IDL_handle,
    /* [string][ref][out] */ wchar_t **arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1398],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc28_UtcApi_IsEscalationRunningEx( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ struct Struct_12_t *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1438],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc29_UtcApi_QueryDiagnosticCollectionState( 
    /* [in] */ handle_t IDL_handle,
    /* [size_is][size_is][ref][out] */ struct Struct_274_t **arg_1,
    /* [out] */ long *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1490],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc30_UtcApi_EscalateScenario3( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ short arg_5,
    /* [in] */ long arg_6,
    /* [string][size_is][in] */ wchar_t **arg_7,
    /* [string][size_is][in] */ wchar_t **arg_8,
    /* [size_is][size_is][ref][out] */ struct Struct_320_t **arg_9,
    /* [out] */ long *arg_10)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1536],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc31_UtcApi_GetIdsFromCategory( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][size_is][ref][out] */ long **arg_2,
    /* [out] */ long *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1630],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc32_UtcApi_GetRunningTraces( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][size_is][ref][out] */ long **arg_2,
    /* [out] */ long *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1682],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc33_UtcApi_GetContextProperty( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1734],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc34_UtcApi_GetRunningEscalationsForContext( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][size_is][ref][out] */ struct Struct_320_t **arg_2,
    /* [out] */ long *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1780],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc35_UtcApi_EscalateScenarioAsync3( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ short arg_5,
    /* [in] */ long arg_6,
    /* [string][size_is][in] */ wchar_t **arg_7,
    /* [string][size_is][in] */ wchar_t **arg_8,
    /* [size_is][size_is][ref][out] */ struct Struct_320_t **arg_9,
    /* [out] */ long *arg_10)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1832],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc36_UtcApi_GetApiVersion( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1,
    /* [out] */ long *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1926],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc37_UtcApi_DownloadLatestSettings2( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[1972],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc38_UtcApi_DownloadLatestSettingsForNamespace2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[2024],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc39_UtcApi_DownloadLatestSettingsForNamespaceAsync2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &diag__MIDL_ProcFormatString.Format[2094],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const diag_MIDL_PROC_FORMAT_STRING diag__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc0_UtcApi_IsScenarioActive */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x54 ),	/* 84 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 28 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter arg_2 */

/* 34 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 40 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc1_UtcApi_EscalateScenario */

/* 46 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 48 */	NdrFcLong( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x1 ),	/* 1 */
/* 54 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 56 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 60 */	NdrFcShort( 0x72 ),	/* 114 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 66 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x1 ),	/* 1 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 74 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 76 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 78 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter arg_2 */

/* 80 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 82 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 84 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 86 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 88 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 90 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_4 */

/* 92 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 94 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 96 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 98 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 100 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 106 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 110 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 112 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 114 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter arg_8 */

/* 116 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 118 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 120 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 124 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc2_UtcApi_EscalateScenarioAsync */

/* 128 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x2 ),	/* 2 */
/* 136 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 138 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 142 */	NdrFcShort( 0x72 ),	/* 114 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 148 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 156 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter arg_2 */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 168 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_4 */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 192 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 194 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 196 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter arg_8 */

/* 198 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 200 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 202 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 206 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc3_UtcApi_IsEscalationRunning */

/* 210 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x3 ),	/* 3 */
/* 218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 220 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 224 */	NdrFcShort( 0x54 ),	/* 84 */
/* 226 */	NdrFcShort( 0x24 ),	/* 36 */
/* 228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 230 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 238 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 242 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter arg_2 */

/* 244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc4_UtcApi_DownloadLatestSettingsForNamespace */

/* 256 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x4 ),	/* 4 */
/* 264 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 266 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 270 */	NdrFcShort( 0x18 ),	/* 24 */
/* 272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 274 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 284 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 288 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 290 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 294 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_3 */

/* 296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 310 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 316 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5_UtcApi_DownloadLatestSettingsForNamespaceAsync */

/* 320 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x5 ),	/* 5 */
/* 328 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 330 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 334 */	NdrFcShort( 0x18 ),	/* 24 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 348 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 354 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 358 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_3 */

/* 360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 368 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc6_UtcApi_GetActiveScenarioList */

/* 384 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x6 ),	/* 6 */
/* 392 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 394 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x24 ),	/* 36 */
/* 402 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 404 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 412 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 416 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter arg_2 */

/* 418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 426 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7_UtcApi_ForceUpload */

/* 430 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x7 ),	/* 7 */
/* 438 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 440 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 444 */	NdrFcShort( 0x15 ),	/* 21 */
/* 446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 450 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 462 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 478 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8_UtcApi_ResetUsageMetrics */

/* 482 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 492 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9_UtcApi_IsTraceRunning */

/* 516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x9 ),	/* 9 */
/* 524 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 526 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 530 */	NdrFcShort( 0x6 ),	/* 6 */
/* 532 */	NdrFcShort( 0x22 ),	/* 34 */
/* 534 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 548 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 550 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 554 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */

	/* Parameter arg_3 */

/* 556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 560 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 564 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10_UtcApi_GetActiveTraceRuntime */

/* 568 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0xa ),	/* 10 */
/* 576 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 578 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 582 */	NdrFcShort( 0x6 ),	/* 6 */
/* 584 */	NdrFcShort( 0x50 ),	/* 80 */
/* 586 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 600 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 606 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 612 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11_UtcApi_GetKnownTraceList */

/* 620 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0xb ),	/* 11 */
/* 628 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 630 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 634 */	NdrFcShort( 0x6 ),	/* 6 */
/* 636 */	NdrFcShort( 0x24 ),	/* 36 */
/* 638 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 640 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 652 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 654 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 658 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Parameter arg_3 */

/* 660 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 668 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12_UtcApi_DownloadLatestSettings */

/* 672 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0xc ),	/* 12 */
/* 680 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 682 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 686 */	NdrFcShort( 0x10 ),	/* 16 */
/* 688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13_UtcApi_ReloadSettings */

/* 718 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0xd ),	/* 13 */
/* 726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 728 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 736 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 738 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14_UtcApi_UpdateTimerConfiguration */

/* 752 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0xe ),	/* 14 */
/* 760 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 762 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 766 */	NdrFcShort( 0x48 ),	/* 72 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 780 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 786 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc15_UtcApi_ClearTimerConfiguration */

/* 798 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0xf ),	/* 15 */
/* 806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 808 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 816 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 818 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 826 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 830 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16_UtcApi_GetNextScheduledFireTime */

/* 838 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x10 ),	/* 16 */
/* 846 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 848 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x50 ),	/* 80 */
/* 856 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 858 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 866 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 870 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 872 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 874 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 878 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 882 */	NdrFcShort( 0xba ),	/* Type Offset=186 */

	/* Return value */

/* 884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 886 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17_UtcApi_GetTimerConfiguration */

/* 890 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x11 ),	/* 17 */
/* 898 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 900 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x6c ),	/* 108 */
/* 908 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 910 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 918 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 922 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 924 */	NdrFcShort( 0xa112 ),	/* Flags:  must free, out, simple ref, srv alloc size=40 */
/* 926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 928 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Parameter arg_3 */

/* 930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc18_UtcApi_GetCustomTraceList */

/* 942 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x12 ),	/* 18 */
/* 950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 952 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 954 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x24 ),	/* 36 */
/* 960 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 962 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 970 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 974 */	NdrFcShort( 0xc6 ),	/* Type Offset=198 */

	/* Parameter arg_2 */

/* 976 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 978 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 984 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc19_UtcApi_StartCustomTrace */

/* 988 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x13 ),	/* 19 */
/* 996 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 998 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1002 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1016 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1020 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 1022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1026 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc20_UtcApi_SnapCustomTrace */

/* 1034 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1044 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1054 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc21_UtcApi_StopCustomTrace */

/* 1074 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1084 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1092 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1094 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc22_UtcApi_EscalateScenario2 */

/* 1108 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1116 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1118 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1122 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1126 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1128 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1136 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1140 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter arg_2 */

/* 1142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1146 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1148 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1152 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_4 */

/* 1154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1156 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1162 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1168 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1170 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 1172 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1174 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 1178 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1180 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1182 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter arg_9 */

/* 1184 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1186 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1188 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Return value */

/* 1190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1192 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc23_UtcApi_EscalateScenarioAsync2 */

/* 1196 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1204 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1206 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1208 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1210 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1216 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1224 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter arg_2 */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1236 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1240 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_4 */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1256 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1258 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 1260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1262 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 1266 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1268 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1270 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter arg_9 */

/* 1272 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1274 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1276 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Return value */

/* 1278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1280 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc24_UtcApi_GetActiveTraceInfo */

/* 1284 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1294 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1298 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1302 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1316 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1318 */	NdrFcShort( 0xc113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=48 */
/* 1320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1322 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */

	/* Return value */

/* 1324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc25_UtcApi_EnableWERLocalReports */

/* 1330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc26_UtcApi_RestoreWERLocalReportsSettings */

/* 1364 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1370 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1374 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1382 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1384 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc27_UtcApi_QueryWERLocalReportsEnabled */

/* 1398 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1408 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1416 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1418 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1426 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1430 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Return value */

/* 1432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc28_UtcApi_IsEscalationRunningEx */

/* 1438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1446 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1448 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1452 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1454 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1458 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1466 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1470 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter arg_2 */

/* 1472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1478 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1480 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1482 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 1484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1486 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc29_UtcApi_QueryDiagnosticCollectionState */

/* 1490 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1498 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1500 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1508 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1510 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1518 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1520 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1522 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Parameter arg_2 */

/* 1524 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc30_UtcApi_EscalateScenario3 */

/* 1536 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1544 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1546 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1548 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1550 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1552 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1554 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 1556 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1564 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1568 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 1570 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1574 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_3 */

/* 1576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1584 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1590 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1592 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1596 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 1600 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1602 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1604 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter arg_8 */

/* 1606 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1608 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1610 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter arg_9 */

/* 1612 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1614 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1616 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */

	/* Parameter arg_10 */

/* 1618 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1620 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1626 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc31_UtcApi_GetIdsFromCategory */

/* 1630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1638 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1640 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1642 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1648 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1650 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1652 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1658 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1660 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1662 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 1664 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1668 */	NdrFcShort( 0x176 ),	/* Type Offset=374 */

	/* Parameter arg_3 */

/* 1670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1678 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc32_UtcApi_GetRunningTraces */

/* 1682 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1690 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1692 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1694 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1700 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1702 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1710 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1714 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 1716 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1720 */	NdrFcShort( 0x176 ),	/* Type Offset=374 */

	/* Parameter arg_3 */

/* 1722 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1724 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1730 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc33_UtcApi_GetContextProperty */

/* 1734 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1742 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1744 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1746 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1752 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1754 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1762 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1766 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 1768 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1772 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Return value */

/* 1774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc34_UtcApi_GetRunningEscalationsForContext */

/* 1780 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1788 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1790 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1798 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1800 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1808 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1812 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 1814 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1818 */	NdrFcShort( 0x18a ),	/* Type Offset=394 */

	/* Parameter arg_3 */

/* 1820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1828 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc35_UtcApi_EscalateScenarioAsync3 */

/* 1832 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1840 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1842 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1844 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1846 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1848 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1850 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 1852 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1854 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1860 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1864 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 1866 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1870 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_3 */

/* 1872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1880 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1886 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1888 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1892 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 1896 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1898 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1900 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter arg_8 */

/* 1902 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1904 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1906 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter arg_9 */

/* 1908 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1910 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1912 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */

	/* Parameter arg_10 */

/* 1914 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1916 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1922 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc36_UtcApi_GetApiVersion */

/* 1926 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1936 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1938 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1944 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1946 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1954 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc37_UtcApi_DownloadLatestSettings2 */

/* 1972 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1980 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1982 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1984 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1986 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1990 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1992 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 2012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc38_UtcApi_DownloadLatestSettingsForNamespace2 */

/* 2024 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2030 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2032 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2034 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2038 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2042 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2052 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2056 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 2058 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2062 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_3 */

/* 2064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2066 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 2070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2072 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 2076 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2078 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 2082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2084 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2090 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc39_UtcApi_DownloadLatestSettingsForNamespaceAsync2 */

/* 2094 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2102 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2104 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2106 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2108 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2112 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2122 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2126 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_2 */

/* 2128 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2132 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter arg_3 */

/* 2134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 2140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 2146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2148 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 2152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2154 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2160 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const diag_MIDL_TYPE_FORMAT_STRING diag__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x14 ),	/* Offset= 20 (24) */
/*  6 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 12 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 18 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 20 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (6) */
			0x5b,		/* FC_END */
/* 24 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 26 */	NdrFcShort( 0x10 ),	/* 16 */
/* 28 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 30 */	NdrFcShort( 0xffee ),	/* Offset= -18 (12) */
/* 32 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 34 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 36 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 40 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 42 */	
			0x11, 0x0,	/* FC_RP */
/* 44 */	NdrFcShort( 0x2 ),	/* Offset= 2 (46) */
/* 46 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 52 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 54 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 56 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 60 */	NdrFcShort( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x1 ),	/* 1 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 72 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 76 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 78 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 84 */	NdrFcShort( 0x2 ),	/* Offset= 2 (86) */
/* 86 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 88 */	NdrFcShort( 0x10 ),	/* 16 */
/* 90 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 92 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 94 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 96 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 98 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (24) */
/* 100 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 102 */	
			0x11, 0x0,	/* FC_RP */
/* 104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (106) */
/* 106 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 108 */	NdrFcShort( 0x30 ),	/* 48 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* Offset= 0 (112) */
/* 114 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0xff98 ),	/* Offset= -104 (12) */
/* 118 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 120 */	0x8,		/* FC_LONG */
			0xb,		/* FC_HYPER */
/* 122 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 124 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 126 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 128 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 130 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 132 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (138) */
/* 138 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 150 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 152 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 156 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 158 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0xffca ),	/* Offset= -54 (106) */
/* 162 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 164 */	
			0x11, 0x0,	/* FC_RP */
/* 166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (168) */
/* 168 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 170 */	NdrFcShort( 0x24 ),	/* 36 */
/* 172 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 174 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 176 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 178 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 180 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 182 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (186) */
/* 186 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 192 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 194 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 196 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (168) */
/* 198 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 200 */	NdrFcShort( 0x2 ),	/* Offset= 2 (202) */
/* 202 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 204 */	NdrFcShort( 0x2 ),	/* Offset= 2 (206) */
/* 206 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0x4 ),	/* 4 */
/* 210 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 216 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 218 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 232 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 234 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 236 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 238 */	
			0x11, 0x0,	/* FC_RP */
/* 240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (242) */
/* 242 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 244 */	NdrFcShort( 0x4 ),	/* 4 */
/* 246 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 248 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 250 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 252 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 254 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 256 */	NdrFcShort( 0x4 ),	/* 4 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 268 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 270 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 272 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 274 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 276 */	NdrFcShort( 0xff56 ),	/* Offset= -170 (106) */
/* 278 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 280 */	NdrFcShort( 0x2 ),	/* Offset= 2 (282) */
/* 282 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 284 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 286 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 288 */	NdrFcShort( 0xfeec ),	/* Offset= -276 (12) */
/* 290 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 292 */	NdrFcShort( 0x2 ),	/* Offset= 2 (294) */
/* 294 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 296 */	NdrFcShort( 0x12 ),	/* Offset= 18 (314) */
/* 298 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x6 ),	/* Offset= 6 (310) */
/* 306 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 308 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 310 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 312 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 314 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 322 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 324 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 328 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 330 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 332 */	NdrFcShort( 0xffde ),	/* Offset= -34 (298) */
/* 334 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 336 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 338 */	NdrFcShort( 0x2 ),	/* Offset= 2 (340) */
/* 340 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 342 */	NdrFcShort( 0x10 ),	/* Offset= 16 (358) */
/* 344 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 346 */	NdrFcShort( 0x24 ),	/* 36 */
/* 348 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 350 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (12) */
/* 352 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 354 */	NdrFcShort( 0xfeaa ),	/* Offset= -342 (12) */
/* 356 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 358 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 362 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 364 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 366 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 368 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 370 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (344) */
/* 372 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 374 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 376 */	NdrFcShort( 0x2 ),	/* Offset= 2 (378) */
/* 378 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 380 */	NdrFcShort( 0x2 ),	/* Offset= 2 (382) */
/* 382 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 384 */	NdrFcShort( 0x4 ),	/* 4 */
/* 386 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 390 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 392 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 394 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (398) */
/* 398 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (402) */
/* 402 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 404 */	NdrFcShort( 0x24 ),	/* 36 */
/* 406 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 408 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 410 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 412 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 414 */	NdrFcShort( 0xffba ),	/* Offset= -70 (344) */
/* 416 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short DefaultIfName_FormatStringOffsetTable[] =
    {
    0,
    46,
    128,
    210,
    256,
    320,
    384,
    430,
    482,
    516,
    568,
    620,
    672,
    718,
    752,
    798,
    838,
    890,
    942,
    988,
    1034,
    1074,
    1108,
    1196,
    1284,
    1330,
    1364,
    1398,
    1438,
    1490,
    1536,
    1630,
    1682,
    1734,
    1780,
    1832,
    1926,
    1972,
    2024,
    2094
    };


static const MIDL_STUB_DESC DefaultIfName_StubDesc = 
    {
    (void *)& DefaultIfName___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &DefaultIfName__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    diag__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

