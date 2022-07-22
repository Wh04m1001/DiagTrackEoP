

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __diag_h_h__
#define __diag_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

/* interface DefaultIfName */
/* [version][uuid] */ 

typedef struct Struct_12_t
    {
    long StructMember0;
    short StructMember1;
    short StructMember2;
    byte StructMember3[ 8 ];
    } 	Struct_12_t;

typedef struct Struct_24_t
    {
    struct Struct_12_t StructMember0;
    } 	Struct_24_t;

typedef struct Struct_102_t
    {
    struct Struct_12_t StructMember0;
    hyper StructMember1;
    long StructMember2;
    long StructMember3;
    hyper StructMember4;
    short StructMember5;
    } 	Struct_102_t;

typedef struct Struct_164_t
    {
    long StructMember0;
    long StructMember1;
    long StructMember2;
    long StructMember3;
    long StructMember4;
    long StructMember5;
    long StructMember6;
    long StructMember7;
    long StructMember8;
    } 	Struct_164_t;

typedef struct Struct_182_t
    {
    long StructMember0;
    long StructMember1;
    } 	Struct_182_t;

typedef struct Struct_274_t
    {
    short StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    } 	Struct_274_t;

typedef struct Struct_320_t
    {
    struct Struct_12_t StructMember0;
    struct Struct_12_t StructMember1;
    long StructMember2;
    } 	Struct_320_t;

long Proc0_UtcApi_IsScenarioActive( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [out] */ long *arg_2);

long Proc1_UtcApi_EscalateScenario( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [in] */ short arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6,
    /* [string][size_is][in] */ wchar_t **arg_7,
    /* [string][size_is][in] */ wchar_t **arg_8);

long Proc2_UtcApi_EscalateScenarioAsync( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [in] */ short arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6,
    /* [string][size_is][in] */ wchar_t **arg_7,
    /* [string][size_is][in] */ wchar_t **arg_8);

long Proc3_UtcApi_IsEscalationRunning( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [out] */ long *arg_2);

long Proc4_UtcApi_DownloadLatestSettingsForNamespace( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5);

long Proc5_UtcApi_DownloadLatestSettingsForNamespaceAsync( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5);

long Proc6_UtcApi_GetActiveScenarioList( 
    /* [in] */ handle_t IDL_handle,
    /* [size_is][size_is][ref][out] */ struct Struct_24_t **arg_1,
    /* [out] */ long *arg_2);

long Proc7_UtcApi_ForceUpload( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ unsigned char arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3);

long Proc8_UtcApi_ResetUsageMetrics( 
    /* [in] */ handle_t IDL_handle);

long Proc9_UtcApi_IsTraceRunning( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_1,
    /* [in] */ struct Struct_102_t *arg_2,
    /* [ref][out] */ short *arg_3);

long Proc10_UtcApi_GetActiveTraceRuntime( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_1,
    /* [out] */ hyper *arg_2,
    /* [out] */ hyper *arg_3);

long Proc11_UtcApi_GetKnownTraceList( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_1,
    /* [size_is][size_is][ref][out] */ struct Struct_102_t **arg_2,
    /* [out] */ long *arg_3);

long Proc12_UtcApi_DownloadLatestSettings( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2);

long Proc13_UtcApi_ReloadSettings( 
    /* [in] */ handle_t IDL_handle);

long Proc14_UtcApi_UpdateTimerConfiguration( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_164_t *arg_2);

long Proc15_UtcApi_ClearTimerConfiguration( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1);

long Proc16_UtcApi_GetNextScheduledFireTime( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ struct Struct_182_t *arg_3);

long Proc17_UtcApi_GetTimerConfiguration( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [out] */ struct Struct_164_t *arg_2,
    /* [out] */ long *arg_3);

long Proc18_UtcApi_GetCustomTraceList( 
    /* [in] */ handle_t IDL_handle,
    /* [string][size_is][size_is][ref][out] */ wchar_t ***arg_1,
    /* [out] */ long *arg_2);

long Proc19_UtcApi_StartCustomTrace( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ hyper arg_2);

long Proc20_UtcApi_SnapCustomTrace( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1);

long Proc21_UtcApi_StopCustomTrace( 
    /* [in] */ handle_t IDL_handle);

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
    /* [string][size_is][in] */ wchar_t **arg_9);

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
    /* [string][size_is][in] */ wchar_t **arg_9);

long Proc24_UtcApi_GetActiveTraceInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_1,
    /* [out] */ struct Struct_102_t *arg_2);

long Proc25_UtcApi_EnableWERLocalReports( 
    /* [in] */ handle_t IDL_handle);

long Proc26_UtcApi_RestoreWERLocalReportsSettings( 
    /* [in] */ handle_t IDL_handle);

long Proc27_UtcApi_QueryWERLocalReportsEnabled( 
    /* [in] */ handle_t IDL_handle,
    /* [string][ref][out] */ wchar_t **arg_1);

long Proc28_UtcApi_IsEscalationRunningEx( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_24_t *arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ struct Struct_12_t *arg_3);

long Proc29_UtcApi_QueryDiagnosticCollectionState( 
    /* [in] */ handle_t IDL_handle,
    /* [size_is][size_is][ref][out] */ struct Struct_274_t **arg_1,
    /* [out] */ long *arg_2);

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
    /* [out] */ long *arg_10);

long Proc31_UtcApi_GetIdsFromCategory( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][size_is][ref][out] */ long **arg_2,
    /* [out] */ long *arg_3);

long Proc32_UtcApi_GetRunningTraces( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][size_is][ref][out] */ long **arg_2,
    /* [out] */ long *arg_3);

long Proc33_UtcApi_GetContextProperty( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);

long Proc34_UtcApi_GetRunningEscalationsForContext( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][size_is][ref][out] */ struct Struct_320_t **arg_2,
    /* [out] */ long *arg_3);

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
    /* [out] */ long *arg_10);

long Proc36_UtcApi_GetApiVersion( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1,
    /* [out] */ long *arg_2);

long Proc37_UtcApi_DownloadLatestSettings2( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3);

long Proc38_UtcApi_DownloadLatestSettingsForNamespace2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6);

long Proc39_UtcApi_DownloadLatestSettingsForNamespaceAsync2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6);



extern RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec;
extern RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


