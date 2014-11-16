/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Apr 01 21:13:40 2013
 */
/* Compiler settings for mwcomtypes.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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

#ifndef __mwcomtypes_h__
#define __mwcomtypes_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IObjectInfo_FWD_DEFINED__
#define __IObjectInfo_FWD_DEFINED__
typedef interface IObjectInfo IObjectInfo;
#endif 	/* __IObjectInfo_FWD_DEFINED__ */


#ifndef __IMWArrayFormatFlags_FWD_DEFINED__
#define __IMWArrayFormatFlags_FWD_DEFINED__
typedef interface IMWArrayFormatFlags IMWArrayFormatFlags;
#endif 	/* __IMWArrayFormatFlags_FWD_DEFINED__ */


#ifndef __IMWDataConversionFlags_FWD_DEFINED__
#define __IMWDataConversionFlags_FWD_DEFINED__
typedef interface IMWDataConversionFlags IMWDataConversionFlags;
#endif 	/* __IMWDataConversionFlags_FWD_DEFINED__ */


#ifndef __IMWFlags_FWD_DEFINED__
#define __IMWFlags_FWD_DEFINED__
typedef interface IMWFlags IMWFlags;
#endif 	/* __IMWFlags_FWD_DEFINED__ */


#ifndef __IMWField_FWD_DEFINED__
#define __IMWField_FWD_DEFINED__
typedef interface IMWField IMWField;
#endif 	/* __IMWField_FWD_DEFINED__ */


#ifndef __IMWStruct_FWD_DEFINED__
#define __IMWStruct_FWD_DEFINED__
typedef interface IMWStruct IMWStruct;
#endif 	/* __IMWStruct_FWD_DEFINED__ */


#ifndef __IMWComplex_FWD_DEFINED__
#define __IMWComplex_FWD_DEFINED__
typedef interface IMWComplex IMWComplex;
#endif 	/* __IMWComplex_FWD_DEFINED__ */


#ifndef __IMWSparse_FWD_DEFINED__
#define __IMWSparse_FWD_DEFINED__
typedef interface IMWSparse IMWSparse;
#endif 	/* __IMWSparse_FWD_DEFINED__ */


#ifndef __IMWArg_FWD_DEFINED__
#define __IMWArg_FWD_DEFINED__
typedef interface IMWArg IMWArg;
#endif 	/* __IMWArg_FWD_DEFINED__ */


#ifndef __IMWEnumVararg_FWD_DEFINED__
#define __IMWEnumVararg_FWD_DEFINED__
typedef interface IMWEnumVararg IMWEnumVararg;
#endif 	/* __IMWEnumVararg_FWD_DEFINED__ */


#ifndef __IMWMethodArgInfo_FWD_DEFINED__
#define __IMWMethodArgInfo_FWD_DEFINED__
typedef interface IMWMethodArgInfo IMWMethodArgInfo;
#endif 	/* __IMWMethodArgInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_mwcomtypes_0000 */
/* [local] */ 

typedef /* [helpstring][uuid] */ 
enum mwArrayFormat
    {	mwArrayFormatAsIs	= 0,
	mwArrayFormatMatrix	= 1,
	mwArrayFormatCell	= 2
    }	mwArrayFormat;

typedef /* [helpstring][uuid] */ 
enum mwDataType
    {	mwTypeDefault	= 0,
	mwTypeLogical	= 3,
	mwTypeChar	= 4,
	mwTypeDouble	= 6,
	mwTypeSingle	= 7,
	mwTypeInt8	= 8,
	mwTypeUint8	= 9,
	mwTypeInt16	= 10,
	mwTypeUint16	= 11,
	mwTypeInt32	= 12,
	mwTypeUint32	= 13
    }	mwDataType;

typedef /* [helpstring][uuid] */ 
enum mwDateFormat
    {	mwDateFormatNumeric	= 0,
	mwDateFormatString	= 1
    }	mwDateFormat;



extern RPC_IF_HANDLE __MIDL_itf_mwcomtypes_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mwcomtypes_0000_v0_0_s_ifspec;

#ifndef __IObjectInfo_INTERFACE_DEFINED__
#define __IObjectInfo_INTERFACE_DEFINED__

/* interface IObjectInfo */
/* [unique][helpstring][hidden][uuid][object] */ 


EXTERN_C const IID IID_IObjectInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92EA75F7-994E-4925-8C88-2F9C56F87756")
    IObjectInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIsRange( 
            /* [in] */ long n,
            /* [out] */ VARIANT_BOOL __RPC_FAR *pbIsRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsObject( 
            /* [in] */ long n,
            /* [out] */ VARIANT_BOOL __RPC_FAR *pbIsObject) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObjectInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObjectInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObjectInfo __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObjectInfo __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIsRange )( 
            IObjectInfo __RPC_FAR * This,
            /* [in] */ long n,
            /* [out] */ VARIANT_BOOL __RPC_FAR *pbIsRange);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIsObject )( 
            IObjectInfo __RPC_FAR * This,
            /* [in] */ long n,
            /* [out] */ VARIANT_BOOL __RPC_FAR *pbIsObject);
        
        END_INTERFACE
    } IObjectInfoVtbl;

    interface IObjectInfo
    {
        CONST_VTBL struct IObjectInfoVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObjectInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObjectInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObjectInfo_GetIsRange(This,n,pbIsRange)	\
    (This)->lpVtbl -> GetIsRange(This,n,pbIsRange)

#define IObjectInfo_GetIsObject(This,n,pbIsObject)	\
    (This)->lpVtbl -> GetIsObject(This,n,pbIsObject)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IObjectInfo_GetIsRange_Proxy( 
    IObjectInfo __RPC_FAR * This,
    /* [in] */ long n,
    /* [out] */ VARIANT_BOOL __RPC_FAR *pbIsRange);


void __RPC_STUB IObjectInfo_GetIsRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IObjectInfo_GetIsObject_Proxy( 
    IObjectInfo __RPC_FAR * This,
    /* [in] */ long n,
    /* [out] */ VARIANT_BOOL __RPC_FAR *pbIsObject);


void __RPC_STUB IObjectInfo_GetIsObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObjectInfo_INTERFACE_DEFINED__ */


#ifndef __IMWArrayFormatFlags_INTERFACE_DEFINED__
#define __IMWArrayFormatFlags_INTERFACE_DEFINED__

/* interface IMWArrayFormatFlags */
/* [unique][helpstring][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWArrayFormatFlags;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30C8EBCB-1A50-4dee-A5E8-0C6F7DD52D4C")
    IMWArrayFormatFlags : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InputArrayFormat( 
            /* [retval][out] */ mwArrayFormat __RPC_FAR *pInputFmt) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InputArrayFormat( 
            /* [in] */ mwArrayFormat InputFmt) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InputArrayIndFlag( 
            /* [retval][out] */ long __RPC_FAR *pnInputInd) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InputArrayIndFlag( 
            /* [in] */ long nInputInd) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OutputArrayFormat( 
            /* [retval][out] */ mwArrayFormat __RPC_FAR *pOutputFmt) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OutputArrayFormat( 
            /* [in] */ mwArrayFormat OutputFmt) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OutputArrayIndFlag( 
            /* [retval][out] */ long __RPC_FAR *pnOutputInd) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OutputArrayIndFlag( 
            /* [in] */ long nOutputInd) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoResizeOutput( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbResize) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoResizeOutput( 
            /* [in] */ VARIANT_BOOL bResize) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransposeOutput( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbTranspose) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransposeOutput( 
            /* [in] */ VARIANT_BOOL bTranspose) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWArrayFormatFlagsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWArrayFormatFlags __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWArrayFormatFlags __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_InputArrayFormat )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [retval][out] */ mwArrayFormat __RPC_FAR *pInputFmt);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_InputArrayFormat )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ mwArrayFormat InputFmt);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_InputArrayIndFlag )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnInputInd);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_InputArrayIndFlag )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ long nInputInd);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_OutputArrayFormat )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [retval][out] */ mwArrayFormat __RPC_FAR *pOutputFmt);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_OutputArrayFormat )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ mwArrayFormat OutputFmt);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_OutputArrayIndFlag )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnOutputInd);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_OutputArrayIndFlag )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ long nOutputInd);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_AutoResizeOutput )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbResize);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_AutoResizeOutput )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bResize);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TransposeOutput )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbTranspose);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_TransposeOutput )( 
            IMWArrayFormatFlags __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bTranspose);
        
        END_INTERFACE
    } IMWArrayFormatFlagsVtbl;

    interface IMWArrayFormatFlags
    {
        CONST_VTBL struct IMWArrayFormatFlagsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWArrayFormatFlags_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWArrayFormatFlags_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWArrayFormatFlags_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWArrayFormatFlags_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWArrayFormatFlags_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWArrayFormatFlags_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWArrayFormatFlags_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWArrayFormatFlags_get_InputArrayFormat(This,pInputFmt)	\
    (This)->lpVtbl -> get_InputArrayFormat(This,pInputFmt)

#define IMWArrayFormatFlags_put_InputArrayFormat(This,InputFmt)	\
    (This)->lpVtbl -> put_InputArrayFormat(This,InputFmt)

#define IMWArrayFormatFlags_get_InputArrayIndFlag(This,pnInputInd)	\
    (This)->lpVtbl -> get_InputArrayIndFlag(This,pnInputInd)

#define IMWArrayFormatFlags_put_InputArrayIndFlag(This,nInputInd)	\
    (This)->lpVtbl -> put_InputArrayIndFlag(This,nInputInd)

#define IMWArrayFormatFlags_get_OutputArrayFormat(This,pOutputFmt)	\
    (This)->lpVtbl -> get_OutputArrayFormat(This,pOutputFmt)

#define IMWArrayFormatFlags_put_OutputArrayFormat(This,OutputFmt)	\
    (This)->lpVtbl -> put_OutputArrayFormat(This,OutputFmt)

#define IMWArrayFormatFlags_get_OutputArrayIndFlag(This,pnOutputInd)	\
    (This)->lpVtbl -> get_OutputArrayIndFlag(This,pnOutputInd)

#define IMWArrayFormatFlags_put_OutputArrayIndFlag(This,nOutputInd)	\
    (This)->lpVtbl -> put_OutputArrayIndFlag(This,nOutputInd)

#define IMWArrayFormatFlags_get_AutoResizeOutput(This,pbResize)	\
    (This)->lpVtbl -> get_AutoResizeOutput(This,pbResize)

#define IMWArrayFormatFlags_put_AutoResizeOutput(This,bResize)	\
    (This)->lpVtbl -> put_AutoResizeOutput(This,bResize)

#define IMWArrayFormatFlags_get_TransposeOutput(This,pbTranspose)	\
    (This)->lpVtbl -> get_TransposeOutput(This,pbTranspose)

#define IMWArrayFormatFlags_put_TransposeOutput(This,bTranspose)	\
    (This)->lpVtbl -> put_TransposeOutput(This,bTranspose)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_get_InputArrayFormat_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [retval][out] */ mwArrayFormat __RPC_FAR *pInputFmt);


void __RPC_STUB IMWArrayFormatFlags_get_InputArrayFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_put_InputArrayFormat_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [in] */ mwArrayFormat InputFmt);


void __RPC_STUB IMWArrayFormatFlags_put_InputArrayFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_get_InputArrayIndFlag_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnInputInd);


void __RPC_STUB IMWArrayFormatFlags_get_InputArrayIndFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_put_InputArrayIndFlag_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [in] */ long nInputInd);


void __RPC_STUB IMWArrayFormatFlags_put_InputArrayIndFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_get_OutputArrayFormat_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [retval][out] */ mwArrayFormat __RPC_FAR *pOutputFmt);


void __RPC_STUB IMWArrayFormatFlags_get_OutputArrayFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_put_OutputArrayFormat_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [in] */ mwArrayFormat OutputFmt);


void __RPC_STUB IMWArrayFormatFlags_put_OutputArrayFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_get_OutputArrayIndFlag_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnOutputInd);


void __RPC_STUB IMWArrayFormatFlags_get_OutputArrayIndFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_put_OutputArrayIndFlag_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [in] */ long nOutputInd);


void __RPC_STUB IMWArrayFormatFlags_put_OutputArrayIndFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_get_AutoResizeOutput_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbResize);


void __RPC_STUB IMWArrayFormatFlags_get_AutoResizeOutput_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_put_AutoResizeOutput_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bResize);


void __RPC_STUB IMWArrayFormatFlags_put_AutoResizeOutput_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_get_TransposeOutput_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbTranspose);


void __RPC_STUB IMWArrayFormatFlags_get_TransposeOutput_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWArrayFormatFlags_put_TransposeOutput_Proxy( 
    IMWArrayFormatFlags __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bTranspose);


void __RPC_STUB IMWArrayFormatFlags_put_TransposeOutput_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWArrayFormatFlags_INTERFACE_DEFINED__ */


#ifndef __IMWDataConversionFlags_INTERFACE_DEFINED__
#define __IMWDataConversionFlags_INTERFACE_DEFINED__

/* interface IMWDataConversionFlags */
/* [unique][helpstring][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWDataConversionFlags;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E0BBECB-CE72-4461-ADB8-0446AB32CF51")
    IMWDataConversionFlags : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CoerceNumericToType( 
            /* [retval][out] */ mwDataType __RPC_FAR *pType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CoerceNumericToType( 
            /* [in] */ mwDataType Type) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InputDateFormat( 
            /* [retval][out] */ mwDateFormat __RPC_FAR *pDateFmt) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InputDateFormat( 
            /* [in] */ mwDateFormat DateFmt) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OutputAsDate( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbDate) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OutputAsDate( 
            /* [in] */ VARIANT_BOOL bDate) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DateBias( 
            /* [retval][out] */ long __RPC_FAR *pnBias) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DateBias( 
            /* [in] */ long nBias) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWDataConversionFlagsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWDataConversionFlags __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWDataConversionFlags __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CoerceNumericToType )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [retval][out] */ mwDataType __RPC_FAR *pType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_CoerceNumericToType )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [in] */ mwDataType Type);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_InputDateFormat )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [retval][out] */ mwDateFormat __RPC_FAR *pDateFmt);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_InputDateFormat )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [in] */ mwDateFormat DateFmt);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_OutputAsDate )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbDate);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_OutputAsDate )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bDate);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DateBias )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnBias);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_DateBias )( 
            IMWDataConversionFlags __RPC_FAR * This,
            /* [in] */ long nBias);
        
        END_INTERFACE
    } IMWDataConversionFlagsVtbl;

    interface IMWDataConversionFlags
    {
        CONST_VTBL struct IMWDataConversionFlagsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWDataConversionFlags_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWDataConversionFlags_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWDataConversionFlags_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWDataConversionFlags_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWDataConversionFlags_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWDataConversionFlags_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWDataConversionFlags_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWDataConversionFlags_get_CoerceNumericToType(This,pType)	\
    (This)->lpVtbl -> get_CoerceNumericToType(This,pType)

#define IMWDataConversionFlags_put_CoerceNumericToType(This,Type)	\
    (This)->lpVtbl -> put_CoerceNumericToType(This,Type)

#define IMWDataConversionFlags_get_InputDateFormat(This,pDateFmt)	\
    (This)->lpVtbl -> get_InputDateFormat(This,pDateFmt)

#define IMWDataConversionFlags_put_InputDateFormat(This,DateFmt)	\
    (This)->lpVtbl -> put_InputDateFormat(This,DateFmt)

#define IMWDataConversionFlags_get_OutputAsDate(This,pbDate)	\
    (This)->lpVtbl -> get_OutputAsDate(This,pbDate)

#define IMWDataConversionFlags_put_OutputAsDate(This,bDate)	\
    (This)->lpVtbl -> put_OutputAsDate(This,bDate)

#define IMWDataConversionFlags_get_DateBias(This,pnBias)	\
    (This)->lpVtbl -> get_DateBias(This,pnBias)

#define IMWDataConversionFlags_put_DateBias(This,nBias)	\
    (This)->lpVtbl -> put_DateBias(This,nBias)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWDataConversionFlags_get_CoerceNumericToType_Proxy( 
    IMWDataConversionFlags __RPC_FAR * This,
    /* [retval][out] */ mwDataType __RPC_FAR *pType);


void __RPC_STUB IMWDataConversionFlags_get_CoerceNumericToType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWDataConversionFlags_put_CoerceNumericToType_Proxy( 
    IMWDataConversionFlags __RPC_FAR * This,
    /* [in] */ mwDataType Type);


void __RPC_STUB IMWDataConversionFlags_put_CoerceNumericToType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWDataConversionFlags_get_InputDateFormat_Proxy( 
    IMWDataConversionFlags __RPC_FAR * This,
    /* [retval][out] */ mwDateFormat __RPC_FAR *pDateFmt);


void __RPC_STUB IMWDataConversionFlags_get_InputDateFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWDataConversionFlags_put_InputDateFormat_Proxy( 
    IMWDataConversionFlags __RPC_FAR * This,
    /* [in] */ mwDateFormat DateFmt);


void __RPC_STUB IMWDataConversionFlags_put_InputDateFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWDataConversionFlags_get_OutputAsDate_Proxy( 
    IMWDataConversionFlags __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbDate);


void __RPC_STUB IMWDataConversionFlags_get_OutputAsDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWDataConversionFlags_put_OutputAsDate_Proxy( 
    IMWDataConversionFlags __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bDate);


void __RPC_STUB IMWDataConversionFlags_put_OutputAsDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWDataConversionFlags_get_DateBias_Proxy( 
    IMWDataConversionFlags __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnBias);


void __RPC_STUB IMWDataConversionFlags_get_DateBias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWDataConversionFlags_put_DateBias_Proxy( 
    IMWDataConversionFlags __RPC_FAR * This,
    /* [in] */ long nBias);


void __RPC_STUB IMWDataConversionFlags_put_DateBias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWDataConversionFlags_INTERFACE_DEFINED__ */


#ifndef __IMWFlags_INTERFACE_DEFINED__
#define __IMWFlags_INTERFACE_DEFINED__

/* interface IMWFlags */
/* [unique][helpstring][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWFlags;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0A295776-23A1-410a-94BD-0C6C61B891B7")
    IMWFlags : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ArrayFormatFlags( 
            /* [retval][out] */ IMWArrayFormatFlags __RPC_FAR *__RPC_FAR *ppFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ArrayFormatFlags( 
            /* [in] */ IMWArrayFormatFlags __RPC_FAR *pFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataConversionFlags( 
            /* [retval][out] */ IMWDataConversionFlags __RPC_FAR *__RPC_FAR *ppFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DataConversionFlags( 
            /* [in] */ IMWDataConversionFlags __RPC_FAR *pFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            IMWFlags __RPC_FAR *__RPC_FAR *ppFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWFlagsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWFlags __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWFlags __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWFlags __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWFlags __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWFlags __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWFlags __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWFlags __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ArrayFormatFlags )( 
            IMWFlags __RPC_FAR * This,
            /* [retval][out] */ IMWArrayFormatFlags __RPC_FAR *__RPC_FAR *ppFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ArrayFormatFlags )( 
            IMWFlags __RPC_FAR * This,
            /* [in] */ IMWArrayFormatFlags __RPC_FAR *pFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DataConversionFlags )( 
            IMWFlags __RPC_FAR * This,
            /* [retval][out] */ IMWDataConversionFlags __RPC_FAR *__RPC_FAR *ppFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_DataConversionFlags )( 
            IMWFlags __RPC_FAR * This,
            /* [in] */ IMWDataConversionFlags __RPC_FAR *pFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IMWFlags __RPC_FAR * This,
            IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);
        
        END_INTERFACE
    } IMWFlagsVtbl;

    interface IMWFlags
    {
        CONST_VTBL struct IMWFlagsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWFlags_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWFlags_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWFlags_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWFlags_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWFlags_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWFlags_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWFlags_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWFlags_get_ArrayFormatFlags(This,ppFlags)	\
    (This)->lpVtbl -> get_ArrayFormatFlags(This,ppFlags)

#define IMWFlags_put_ArrayFormatFlags(This,pFlags)	\
    (This)->lpVtbl -> put_ArrayFormatFlags(This,pFlags)

#define IMWFlags_get_DataConversionFlags(This,ppFlags)	\
    (This)->lpVtbl -> get_DataConversionFlags(This,ppFlags)

#define IMWFlags_put_DataConversionFlags(This,pFlags)	\
    (This)->lpVtbl -> put_DataConversionFlags(This,pFlags)

#define IMWFlags_Clone(This,ppFlags)	\
    (This)->lpVtbl -> Clone(This,ppFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWFlags_get_ArrayFormatFlags_Proxy( 
    IMWFlags __RPC_FAR * This,
    /* [retval][out] */ IMWArrayFormatFlags __RPC_FAR *__RPC_FAR *ppFlags);


void __RPC_STUB IMWFlags_get_ArrayFormatFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWFlags_put_ArrayFormatFlags_Proxy( 
    IMWFlags __RPC_FAR * This,
    /* [in] */ IMWArrayFormatFlags __RPC_FAR *pFlags);


void __RPC_STUB IMWFlags_put_ArrayFormatFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWFlags_get_DataConversionFlags_Proxy( 
    IMWFlags __RPC_FAR * This,
    /* [retval][out] */ IMWDataConversionFlags __RPC_FAR *__RPC_FAR *ppFlags);


void __RPC_STUB IMWFlags_get_DataConversionFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWFlags_put_DataConversionFlags_Proxy( 
    IMWFlags __RPC_FAR * This,
    /* [in] */ IMWDataConversionFlags __RPC_FAR *pFlags);


void __RPC_STUB IMWFlags_put_DataConversionFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWFlags_Clone_Proxy( 
    IMWFlags __RPC_FAR * This,
    IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);


void __RPC_STUB IMWFlags_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWFlags_INTERFACE_DEFINED__ */


#ifndef __IMWField_INTERFACE_DEFINED__
#define __IMWField_INTERFACE_DEFINED__

/* interface IMWField */
/* [unique][helpstring][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWField;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AEC9FFB-AB0D-4a09-BE9C-78857A1B8580")
    IMWField : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMWField __RPC_FAR *__RPC_FAR *ppField) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWFieldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWField __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWField __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWField __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWField __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWField __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWField __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWField __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Value )( 
            IMWField __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Value )( 
            IMWField __RPC_FAR * This,
            /* [in] */ VARIANT varValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IMWField __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            IMWField __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            IMWField __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IMWField __RPC_FAR * This,
            /* [out] */ IMWField __RPC_FAR *__RPC_FAR *ppField);
        
        END_INTERFACE
    } IMWFieldVtbl;

    interface IMWField
    {
        CONST_VTBL struct IMWFieldVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWField_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWField_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWField_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWField_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWField_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWField_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWField_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWField_get_Value(This,pvarValue)	\
    (This)->lpVtbl -> get_Value(This,pvarValue)

#define IMWField_put_Value(This,varValue)	\
    (This)->lpVtbl -> put_Value(This,varValue)

#define IMWField_get_Name(This,pbstrName)	\
    (This)->lpVtbl -> get_Name(This,pbstrName)

#define IMWField_get_MWFlags(This,ppFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppFlags)

#define IMWField_put_MWFlags(This,pFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pFlags)

#define IMWField_Clone(This,ppField)	\
    (This)->lpVtbl -> Clone(This,ppField)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWField_get_Value_Proxy( 
    IMWField __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);


void __RPC_STUB IMWField_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWField_put_Value_Proxy( 
    IMWField __RPC_FAR * This,
    /* [in] */ VARIANT varValue);


void __RPC_STUB IMWField_put_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWField_get_Name_Proxy( 
    IMWField __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMWField_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWField_get_MWFlags_Proxy( 
    IMWField __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);


void __RPC_STUB IMWField_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWField_put_MWFlags_Proxy( 
    IMWField __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pFlags);


void __RPC_STUB IMWField_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWField_Clone_Proxy( 
    IMWField __RPC_FAR * This,
    /* [out] */ IMWField __RPC_FAR *__RPC_FAR *ppField);


void __RPC_STUB IMWField_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWField_INTERFACE_DEFINED__ */


#ifndef __IMWStruct_INTERFACE_DEFINED__
#define __IMWStruct_INTERFACE_DEFINED__

/* interface IMWStruct */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWStruct;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C70BB67-3F76-4176-8809-C66393B1FA23")
    IMWStruct : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [optional][in] */ VARIANT i0,
            /* [optional][in] */ VARIANT i1,
            /* [optional][in] */ VARIANT i2,
            /* [optional][in] */ VARIANT i3,
            /* [optional][in] */ VARIANT i4,
            /* [optional][in] */ VARIANT i5,
            /* [optional][in] */ VARIANT i6,
            /* [optional][in] */ VARIANT i7,
            /* [optional][in] */ VARIANT i8,
            /* [optional][in] */ VARIANT i9,
            /* [optional][in] */ VARIANT i10,
            /* [optional][in] */ VARIANT i11,
            /* [optional][in] */ VARIANT i12,
            /* [optional][in] */ VARIANT i13,
            /* [optional][in] */ VARIANT i14,
            /* [optional][in] */ VARIANT i15,
            /* [optional][in] */ VARIANT i16,
            /* [optional][in] */ VARIANT i17,
            /* [optional][in] */ VARIANT i18,
            /* [optional][in] */ VARIANT i19,
            /* [optional][in] */ VARIANT i20,
            /* [optional][in] */ VARIANT i21,
            /* [optional][in] */ VARIANT i22,
            /* [optional][in] */ VARIANT i23,
            /* [optional][in] */ VARIANT i24,
            /* [optional][in] */ VARIANT i25,
            /* [optional][in] */ VARIANT i26,
            /* [optional][in] */ VARIANT i27,
            /* [optional][in] */ VARIANT i28,
            /* [optional][in] */ VARIANT i29,
            /* [optional][in] */ VARIANT i30,
            /* [optional][in] */ VARIANT i31,
            /* [retval][out] */ IMWField __RPC_FAR *__RPC_FAR *ppField) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [optional][in] */ VARIANT varDims,
            /* [optional][in] */ VARIANT varFieldNames) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfFields( 
            /* [retval][out] */ long __RPC_FAR *pnFields) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfDims( 
            /* [retval][out] */ long __RPC_FAR *pnDims) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Dims( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarDims) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FieldNames( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarFieldNames) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMWStruct __RPC_FAR *__RPC_FAR *ppStruct) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWStructVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWStruct __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWStruct __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWStruct __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWStruct __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWStruct __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWStruct __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWStruct __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IMWStruct __RPC_FAR * This,
            /* [optional][in] */ VARIANT i0,
            /* [optional][in] */ VARIANT i1,
            /* [optional][in] */ VARIANT i2,
            /* [optional][in] */ VARIANT i3,
            /* [optional][in] */ VARIANT i4,
            /* [optional][in] */ VARIANT i5,
            /* [optional][in] */ VARIANT i6,
            /* [optional][in] */ VARIANT i7,
            /* [optional][in] */ VARIANT i8,
            /* [optional][in] */ VARIANT i9,
            /* [optional][in] */ VARIANT i10,
            /* [optional][in] */ VARIANT i11,
            /* [optional][in] */ VARIANT i12,
            /* [optional][in] */ VARIANT i13,
            /* [optional][in] */ VARIANT i14,
            /* [optional][in] */ VARIANT i15,
            /* [optional][in] */ VARIANT i16,
            /* [optional][in] */ VARIANT i17,
            /* [optional][in] */ VARIANT i18,
            /* [optional][in] */ VARIANT i19,
            /* [optional][in] */ VARIANT i20,
            /* [optional][in] */ VARIANT i21,
            /* [optional][in] */ VARIANT i22,
            /* [optional][in] */ VARIANT i23,
            /* [optional][in] */ VARIANT i24,
            /* [optional][in] */ VARIANT i25,
            /* [optional][in] */ VARIANT i26,
            /* [optional][in] */ VARIANT i27,
            /* [optional][in] */ VARIANT i28,
            /* [optional][in] */ VARIANT i29,
            /* [optional][in] */ VARIANT i30,
            /* [optional][in] */ VARIANT i31,
            /* [retval][out] */ IMWField __RPC_FAR *__RPC_FAR *ppField);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IMWStruct __RPC_FAR * This,
            /* [optional][in] */ VARIANT varDims,
            /* [optional][in] */ VARIANT varFieldNames);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_NumberOfFields )( 
            IMWStruct __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnFields);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_NumberOfDims )( 
            IMWStruct __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnDims);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Dims )( 
            IMWStruct __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarDims);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FieldNames )( 
            IMWStruct __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarFieldNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IMWStruct __RPC_FAR * This,
            /* [out] */ IMWStruct __RPC_FAR *__RPC_FAR *ppStruct);
        
        END_INTERFACE
    } IMWStructVtbl;

    interface IMWStruct
    {
        CONST_VTBL struct IMWStructVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWStruct_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWStruct_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWStruct_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWStruct_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWStruct_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWStruct_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWStruct_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWStruct_get_Item(This,i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20,i21,i22,i23,i24,i25,i26,i27,i28,i29,i30,i31,ppField)	\
    (This)->lpVtbl -> get_Item(This,i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20,i21,i22,i23,i24,i25,i26,i27,i28,i29,i30,i31,ppField)

#define IMWStruct_Initialize(This,varDims,varFieldNames)	\
    (This)->lpVtbl -> Initialize(This,varDims,varFieldNames)

#define IMWStruct_get_NumberOfFields(This,pnFields)	\
    (This)->lpVtbl -> get_NumberOfFields(This,pnFields)

#define IMWStruct_get_NumberOfDims(This,pnDims)	\
    (This)->lpVtbl -> get_NumberOfDims(This,pnDims)

#define IMWStruct_get_Dims(This,pvarDims)	\
    (This)->lpVtbl -> get_Dims(This,pvarDims)

#define IMWStruct_get_FieldNames(This,pvarFieldNames)	\
    (This)->lpVtbl -> get_FieldNames(This,pvarFieldNames)

#define IMWStruct_Clone(This,ppStruct)	\
    (This)->lpVtbl -> Clone(This,ppStruct)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWStruct_get_Item_Proxy( 
    IMWStruct __RPC_FAR * This,
    /* [optional][in] */ VARIANT i0,
    /* [optional][in] */ VARIANT i1,
    /* [optional][in] */ VARIANT i2,
    /* [optional][in] */ VARIANT i3,
    /* [optional][in] */ VARIANT i4,
    /* [optional][in] */ VARIANT i5,
    /* [optional][in] */ VARIANT i6,
    /* [optional][in] */ VARIANT i7,
    /* [optional][in] */ VARIANT i8,
    /* [optional][in] */ VARIANT i9,
    /* [optional][in] */ VARIANT i10,
    /* [optional][in] */ VARIANT i11,
    /* [optional][in] */ VARIANT i12,
    /* [optional][in] */ VARIANT i13,
    /* [optional][in] */ VARIANT i14,
    /* [optional][in] */ VARIANT i15,
    /* [optional][in] */ VARIANT i16,
    /* [optional][in] */ VARIANT i17,
    /* [optional][in] */ VARIANT i18,
    /* [optional][in] */ VARIANT i19,
    /* [optional][in] */ VARIANT i20,
    /* [optional][in] */ VARIANT i21,
    /* [optional][in] */ VARIANT i22,
    /* [optional][in] */ VARIANT i23,
    /* [optional][in] */ VARIANT i24,
    /* [optional][in] */ VARIANT i25,
    /* [optional][in] */ VARIANT i26,
    /* [optional][in] */ VARIANT i27,
    /* [optional][in] */ VARIANT i28,
    /* [optional][in] */ VARIANT i29,
    /* [optional][in] */ VARIANT i30,
    /* [optional][in] */ VARIANT i31,
    /* [retval][out] */ IMWField __RPC_FAR *__RPC_FAR *ppField);


void __RPC_STUB IMWStruct_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWStruct_Initialize_Proxy( 
    IMWStruct __RPC_FAR * This,
    /* [optional][in] */ VARIANT varDims,
    /* [optional][in] */ VARIANT varFieldNames);


void __RPC_STUB IMWStruct_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWStruct_get_NumberOfFields_Proxy( 
    IMWStruct __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnFields);


void __RPC_STUB IMWStruct_get_NumberOfFields_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWStruct_get_NumberOfDims_Proxy( 
    IMWStruct __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnDims);


void __RPC_STUB IMWStruct_get_NumberOfDims_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWStruct_get_Dims_Proxy( 
    IMWStruct __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarDims);


void __RPC_STUB IMWStruct_get_Dims_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWStruct_get_FieldNames_Proxy( 
    IMWStruct __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarFieldNames);


void __RPC_STUB IMWStruct_get_FieldNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWStruct_Clone_Proxy( 
    IMWStruct __RPC_FAR * This,
    /* [out] */ IMWStruct __RPC_FAR *__RPC_FAR *ppStruct);


void __RPC_STUB IMWStruct_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWStruct_INTERFACE_DEFINED__ */


#ifndef __IMWComplex_INTERFACE_DEFINED__
#define __IMWComplex_INTERFACE_DEFINED__

/* interface IMWComplex */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWComplex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CDD4BBF-A84C-4C50-B600-F5E90008491D")
    IMWComplex : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Real( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Real( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Imag( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Imag( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMWComplex __RPC_FAR *__RPC_FAR *ppComplex) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWComplexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWComplex __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWComplex __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWComplex __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWComplex __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWComplex __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWComplex __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWComplex __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Real )( 
            IMWComplex __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Real )( 
            IMWComplex __RPC_FAR * This,
            /* [in] */ VARIANT varValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Imag )( 
            IMWComplex __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Imag )( 
            IMWComplex __RPC_FAR * This,
            /* [in] */ VARIANT varValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            IMWComplex __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            IMWComplex __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IMWComplex __RPC_FAR * This,
            /* [out] */ IMWComplex __RPC_FAR *__RPC_FAR *ppComplex);
        
        END_INTERFACE
    } IMWComplexVtbl;

    interface IMWComplex
    {
        CONST_VTBL struct IMWComplexVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWComplex_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWComplex_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWComplex_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWComplex_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWComplex_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWComplex_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWComplex_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWComplex_get_Real(This,pvarValue)	\
    (This)->lpVtbl -> get_Real(This,pvarValue)

#define IMWComplex_put_Real(This,varValue)	\
    (This)->lpVtbl -> put_Real(This,varValue)

#define IMWComplex_get_Imag(This,pvarValue)	\
    (This)->lpVtbl -> get_Imag(This,pvarValue)

#define IMWComplex_put_Imag(This,varValue)	\
    (This)->lpVtbl -> put_Imag(This,varValue)

#define IMWComplex_get_MWFlags(This,ppFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppFlags)

#define IMWComplex_put_MWFlags(This,pFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pFlags)

#define IMWComplex_Clone(This,ppComplex)	\
    (This)->lpVtbl -> Clone(This,ppComplex)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWComplex_get_Real_Proxy( 
    IMWComplex __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);


void __RPC_STUB IMWComplex_get_Real_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWComplex_put_Real_Proxy( 
    IMWComplex __RPC_FAR * This,
    /* [in] */ VARIANT varValue);


void __RPC_STUB IMWComplex_put_Real_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWComplex_get_Imag_Proxy( 
    IMWComplex __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);


void __RPC_STUB IMWComplex_get_Imag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWComplex_put_Imag_Proxy( 
    IMWComplex __RPC_FAR * This,
    /* [in] */ VARIANT varValue);


void __RPC_STUB IMWComplex_put_Imag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWComplex_get_MWFlags_Proxy( 
    IMWComplex __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);


void __RPC_STUB IMWComplex_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWComplex_put_MWFlags_Proxy( 
    IMWComplex __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pFlags);


void __RPC_STUB IMWComplex_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWComplex_Clone_Proxy( 
    IMWComplex __RPC_FAR * This,
    /* [out] */ IMWComplex __RPC_FAR *__RPC_FAR *ppComplex);


void __RPC_STUB IMWComplex_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWComplex_INTERFACE_DEFINED__ */


#ifndef __IMWSparse_INTERFACE_DEFINED__
#define __IMWSparse_INTERFACE_DEFINED__

/* interface IMWSparse */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWSparse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D4874AD-38A1-4676-A191-BAA75F01D216")
    IMWSparse : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Array( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarArray) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Array( 
            /* [in] */ VARIANT varArray) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumRows( 
            /* [retval][out] */ long __RPC_FAR *pnRows) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NumRows( 
            /* [in] */ long nRows) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumColumns( 
            /* [retval][out] */ long __RPC_FAR *pnColumns) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NumColumns( 
            /* [in] */ long nColumns) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RowIndex( 
            /* [retval][out] */ VARIANT __RPC_FAR *pIndex) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RowIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColumnIndex( 
            /* [retval][out] */ VARIANT __RPC_FAR *pIndex) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColumnIndex( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMWSparse __RPC_FAR *__RPC_FAR *ppSparse) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWSparseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWSparse __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWSparse __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWSparse __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Array )( 
            IMWSparse __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarArray);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Array )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ VARIANT varArray);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_NumRows )( 
            IMWSparse __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnRows);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_NumRows )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ long nRows);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_NumColumns )( 
            IMWSparse __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnColumns);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_NumColumns )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ long nColumns);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RowIndex )( 
            IMWSparse __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pIndex);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_RowIndex )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ColumnIndex )( 
            IMWSparse __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pIndex);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ColumnIndex )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ VARIANT Index);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            IMWSparse __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            IMWSparse __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IMWSparse __RPC_FAR * This,
            /* [out] */ IMWSparse __RPC_FAR *__RPC_FAR *ppSparse);
        
        END_INTERFACE
    } IMWSparseVtbl;

    interface IMWSparse
    {
        CONST_VTBL struct IMWSparseVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWSparse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWSparse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWSparse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWSparse_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWSparse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWSparse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWSparse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWSparse_get_Array(This,pvarArray)	\
    (This)->lpVtbl -> get_Array(This,pvarArray)

#define IMWSparse_put_Array(This,varArray)	\
    (This)->lpVtbl -> put_Array(This,varArray)

#define IMWSparse_get_NumRows(This,pnRows)	\
    (This)->lpVtbl -> get_NumRows(This,pnRows)

#define IMWSparse_put_NumRows(This,nRows)	\
    (This)->lpVtbl -> put_NumRows(This,nRows)

#define IMWSparse_get_NumColumns(This,pnColumns)	\
    (This)->lpVtbl -> get_NumColumns(This,pnColumns)

#define IMWSparse_put_NumColumns(This,nColumns)	\
    (This)->lpVtbl -> put_NumColumns(This,nColumns)

#define IMWSparse_get_RowIndex(This,pIndex)	\
    (This)->lpVtbl -> get_RowIndex(This,pIndex)

#define IMWSparse_put_RowIndex(This,Index)	\
    (This)->lpVtbl -> put_RowIndex(This,Index)

#define IMWSparse_get_ColumnIndex(This,pIndex)	\
    (This)->lpVtbl -> get_ColumnIndex(This,pIndex)

#define IMWSparse_put_ColumnIndex(This,Index)	\
    (This)->lpVtbl -> put_ColumnIndex(This,Index)

#define IMWSparse_get_MWFlags(This,ppFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppFlags)

#define IMWSparse_put_MWFlags(This,pFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pFlags)

#define IMWSparse_Clone(This,ppSparse)	\
    (This)->lpVtbl -> Clone(This,ppSparse)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWSparse_get_Array_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarArray);


void __RPC_STUB IMWSparse_get_Array_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWSparse_put_Array_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [in] */ VARIANT varArray);


void __RPC_STUB IMWSparse_put_Array_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWSparse_get_NumRows_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnRows);


void __RPC_STUB IMWSparse_get_NumRows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWSparse_put_NumRows_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [in] */ long nRows);


void __RPC_STUB IMWSparse_put_NumRows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWSparse_get_NumColumns_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnColumns);


void __RPC_STUB IMWSparse_get_NumColumns_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWSparse_put_NumColumns_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [in] */ long nColumns);


void __RPC_STUB IMWSparse_put_NumColumns_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWSparse_get_RowIndex_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pIndex);


void __RPC_STUB IMWSparse_get_RowIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWSparse_put_RowIndex_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [in] */ VARIANT Index);


void __RPC_STUB IMWSparse_put_RowIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWSparse_get_ColumnIndex_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pIndex);


void __RPC_STUB IMWSparse_get_ColumnIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWSparse_put_ColumnIndex_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [in] */ VARIANT Index);


void __RPC_STUB IMWSparse_put_ColumnIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWSparse_get_MWFlags_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);


void __RPC_STUB IMWSparse_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWSparse_put_MWFlags_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pFlags);


void __RPC_STUB IMWSparse_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWSparse_Clone_Proxy( 
    IMWSparse __RPC_FAR * This,
    /* [out] */ IMWSparse __RPC_FAR *__RPC_FAR *ppSparse);


void __RPC_STUB IMWSparse_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWSparse_INTERFACE_DEFINED__ */


#ifndef __IMWArg_INTERFACE_DEFINED__
#define __IMWArg_INTERFACE_DEFINED__

/* interface IMWArg */
/* [unique][helpstring][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWArg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9C77EA62-6498-4CF5-AF36-35886B2F0570")
    IMWArg : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMWArg __RPC_FAR *__RPC_FAR *ppArg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWArgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWArg __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWArg __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWArg __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWArg __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWArg __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWArg __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWArg __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Value )( 
            IMWArg __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Value )( 
            IMWArg __RPC_FAR * This,
            /* [in] */ VARIANT varValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            IMWArg __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            IMWArg __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IMWArg __RPC_FAR * This,
            /* [out] */ IMWArg __RPC_FAR *__RPC_FAR *ppArg);
        
        END_INTERFACE
    } IMWArgVtbl;

    interface IMWArg
    {
        CONST_VTBL struct IMWArgVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWArg_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWArg_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWArg_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWArg_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWArg_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWArg_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWArg_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWArg_get_Value(This,pvarValue)	\
    (This)->lpVtbl -> get_Value(This,pvarValue)

#define IMWArg_put_Value(This,varValue)	\
    (This)->lpVtbl -> put_Value(This,varValue)

#define IMWArg_get_MWFlags(This,ppFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppFlags)

#define IMWArg_put_MWFlags(This,pFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pFlags)

#define IMWArg_Clone(This,ppArg)	\
    (This)->lpVtbl -> Clone(This,ppArg)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWArg_get_Value_Proxy( 
    IMWArg __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);


void __RPC_STUB IMWArg_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWArg_put_Value_Proxy( 
    IMWArg __RPC_FAR * This,
    /* [in] */ VARIANT varValue);


void __RPC_STUB IMWArg_put_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWArg_get_MWFlags_Proxy( 
    IMWArg __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);


void __RPC_STUB IMWArg_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWArg_put_MWFlags_Proxy( 
    IMWArg __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pFlags);


void __RPC_STUB IMWArg_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWArg_Clone_Proxy( 
    IMWArg __RPC_FAR * This,
    /* [out] */ IMWArg __RPC_FAR *__RPC_FAR *ppArg);


void __RPC_STUB IMWArg_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWArg_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mwcomtypes_0217 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_mwcomtypes_0217_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mwcomtypes_0217_v0_0_s_ifspec;

#ifndef __IMWEnumVararg_INTERFACE_DEFINED__
#define __IMWEnumVararg_INTERFACE_DEFINED__

/* interface IMWEnumVararg */
/* [unique][helpstring][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWEnumVararg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4D229FA-87A2-4a22-B58D-DB5898B4D92F")
    IMWEnumVararg : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long nIndex,
            /* [retval][out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pnCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ long nSkipElms) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo,
            /* [out] */ long __RPC_FAR *pnRetElms) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long nIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAt( 
            /* [in] */ long nIndex,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CopyToRange( 
            /* [in] */ VARIANT_BOOL bToRange) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CopyToRange( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbToRange) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMWEnumVararg __RPC_FAR *__RPC_FAR *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWEnumVarargVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWEnumVararg __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWEnumVararg __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Name )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Value )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Value )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ VARIANT varValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IMWEnumVararg __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ long nSkipElms);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo,
            /* [out] */ long __RPC_FAR *pnRetElms);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ VARIANT varValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ long nIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clear )( 
            IMWEnumVararg __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetAt )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ long nIndex,
            /* [in] */ VARIANT varValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_CopyToRange )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bToRange);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CopyToRange )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbToRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IMWEnumVararg __RPC_FAR * This,
            /* [out] */ IMWEnumVararg __RPC_FAR *__RPC_FAR *ppEnum);
        
        END_INTERFACE
    } IMWEnumVarargVtbl;

    interface IMWEnumVararg
    {
        CONST_VTBL struct IMWEnumVarargVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWEnumVararg_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWEnumVararg_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWEnumVararg_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWEnumVararg_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWEnumVararg_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWEnumVararg_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWEnumVararg_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWEnumVararg_get_Item(This,nIndex,ppInfo)	\
    (This)->lpVtbl -> get_Item(This,nIndex,ppInfo)

#define IMWEnumVararg_get_Name(This,pbstrName)	\
    (This)->lpVtbl -> get_Name(This,pbstrName)

#define IMWEnumVararg_put_Name(This,bstrName)	\
    (This)->lpVtbl -> put_Name(This,bstrName)

#define IMWEnumVararg_get_Value(This,pvarValue)	\
    (This)->lpVtbl -> get_Value(This,pvarValue)

#define IMWEnumVararg_put_Value(This,varValue)	\
    (This)->lpVtbl -> put_Value(This,varValue)

#define IMWEnumVararg_get_Count(This,pnCount)	\
    (This)->lpVtbl -> get_Count(This,pnCount)

#define IMWEnumVararg_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IMWEnumVararg_Skip(This,nSkipElms)	\
    (This)->lpVtbl -> Skip(This,nSkipElms)

#define IMWEnumVararg_Next(This,ppInfo,pnRetElms)	\
    (This)->lpVtbl -> Next(This,ppInfo,pnRetElms)

#define IMWEnumVararg_Add(This,varValue)	\
    (This)->lpVtbl -> Add(This,varValue)

#define IMWEnumVararg_Remove(This,nIndex)	\
    (This)->lpVtbl -> Remove(This,nIndex)

#define IMWEnumVararg_Clear(This)	\
    (This)->lpVtbl -> Clear(This)

#define IMWEnumVararg_SetAt(This,nIndex,varValue)	\
    (This)->lpVtbl -> SetAt(This,nIndex,varValue)

#define IMWEnumVararg_put_CopyToRange(This,bToRange)	\
    (This)->lpVtbl -> put_CopyToRange(This,bToRange)

#define IMWEnumVararg_get_CopyToRange(This,pbToRange)	\
    (This)->lpVtbl -> get_CopyToRange(This,pbToRange)

#define IMWEnumVararg_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_get_Item_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo);


void __RPC_STUB IMWEnumVararg_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_get_Name_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMWEnumVararg_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_put_Name_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IMWEnumVararg_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_get_Value_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);


void __RPC_STUB IMWEnumVararg_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_put_Value_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [in] */ VARIANT varValue);


void __RPC_STUB IMWEnumVararg_put_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_get_Count_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnCount);


void __RPC_STUB IMWEnumVararg_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_Reset_Proxy( 
    IMWEnumVararg __RPC_FAR * This);


void __RPC_STUB IMWEnumVararg_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_Skip_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [in] */ long nSkipElms);


void __RPC_STUB IMWEnumVararg_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_Next_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo,
    /* [out] */ long __RPC_FAR *pnRetElms);


void __RPC_STUB IMWEnumVararg_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_Add_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [in] */ VARIANT varValue);


void __RPC_STUB IMWEnumVararg_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_Remove_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [in] */ long nIndex);


void __RPC_STUB IMWEnumVararg_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_Clear_Proxy( 
    IMWEnumVararg __RPC_FAR * This);


void __RPC_STUB IMWEnumVararg_Clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_SetAt_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [in] */ long nIndex,
    /* [in] */ VARIANT varValue);


void __RPC_STUB IMWEnumVararg_SetAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_put_CopyToRange_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bToRange);


void __RPC_STUB IMWEnumVararg_put_CopyToRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_get_CopyToRange_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbToRange);


void __RPC_STUB IMWEnumVararg_get_CopyToRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWEnumVararg_Clone_Proxy( 
    IMWEnumVararg __RPC_FAR * This,
    /* [out] */ IMWEnumVararg __RPC_FAR *__RPC_FAR *ppEnum);


void __RPC_STUB IMWEnumVararg_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWEnumVararg_INTERFACE_DEFINED__ */


#ifndef __IMWMethodArgInfo_INTERFACE_DEFINED__
#define __IMWMethodArgInfo_INTERFACE_DEFINED__

/* interface IMWMethodArgInfo */
/* [unique][helpstring][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IMWMethodArgInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D9F6760-7A70-4524-882D-E8E56A21E4D5")
    IMWMethodArgInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ short __RPC_FAR *pnType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ short __RPC_FAR *pnFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Indirection( 
            /* [retval][out] */ long __RPC_FAR *pnInd) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsRange( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRange) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsVararg( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbVararg) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Selected( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbSelected) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Vararg( 
            /* [retval][out] */ IMWEnumVararg __RPC_FAR *__RPC_FAR *ppVararg) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Vararg( 
            /* [in] */ IMWEnumVararg __RPC_FAR *pVararg) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CopyToRange( 
            /* [in] */ VARIANT_BOOL bToRange) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CopyToRange( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbToRange) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Select( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsListening( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbListen) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsListening( 
            /* [in] */ VARIANT_BOOL bListen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Offset( 
            /* [in] */ long nRows,
            /* [in] */ long nColumns,
            /* [in] */ VARIANT_BOOL bCopyContents,
            /* [in] */ VARIANT_BOOL bDeleteOriginal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMWMethodArgInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMWMethodArgInfo __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMWMethodArgInfo __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Value )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Value )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ VARIANT varValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Name )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pnType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Flags )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pnFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Indirection )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnInd);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsRange )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRange);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsVararg )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbVararg);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Selected )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbSelected);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Vararg )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ IMWEnumVararg __RPC_FAR *__RPC_FAR *ppVararg);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Vararg )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ IMWEnumVararg __RPC_FAR *pVararg);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_CopyToRange )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bToRange);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CopyToRange )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbToRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Select )( 
            IMWMethodArgInfo __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsListening )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbListen);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_IsListening )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bListen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Offset )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [in] */ long nRows,
            /* [in] */ long nColumns,
            /* [in] */ VARIANT_BOOL bCopyContents,
            /* [in] */ VARIANT_BOOL bDeleteOriginal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IMWMethodArgInfo __RPC_FAR * This,
            /* [out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo);
        
        END_INTERFACE
    } IMWMethodArgInfoVtbl;

    interface IMWMethodArgInfo
    {
        CONST_VTBL struct IMWMethodArgInfoVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMWMethodArgInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMWMethodArgInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMWMethodArgInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMWMethodArgInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMWMethodArgInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMWMethodArgInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMWMethodArgInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMWMethodArgInfo_get_Value(This,pvarValue)	\
    (This)->lpVtbl -> get_Value(This,pvarValue)

#define IMWMethodArgInfo_put_Value(This,varValue)	\
    (This)->lpVtbl -> put_Value(This,varValue)

#define IMWMethodArgInfo_get_Name(This,pbstrName)	\
    (This)->lpVtbl -> get_Name(This,pbstrName)

#define IMWMethodArgInfo_put_Name(This,bstrName)	\
    (This)->lpVtbl -> put_Name(This,bstrName)

#define IMWMethodArgInfo_get_Type(This,pnType)	\
    (This)->lpVtbl -> get_Type(This,pnType)

#define IMWMethodArgInfo_get_Flags(This,pnFlags)	\
    (This)->lpVtbl -> get_Flags(This,pnFlags)

#define IMWMethodArgInfo_get_Indirection(This,pnInd)	\
    (This)->lpVtbl -> get_Indirection(This,pnInd)

#define IMWMethodArgInfo_get_IsRange(This,pbRange)	\
    (This)->lpVtbl -> get_IsRange(This,pbRange)

#define IMWMethodArgInfo_get_IsVararg(This,pbVararg)	\
    (This)->lpVtbl -> get_IsVararg(This,pbVararg)

#define IMWMethodArgInfo_get_MWFlags(This,ppFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppFlags)

#define IMWMethodArgInfo_put_MWFlags(This,pFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pFlags)

#define IMWMethodArgInfo_get_Selected(This,pbSelected)	\
    (This)->lpVtbl -> get_Selected(This,pbSelected)

#define IMWMethodArgInfo_get_Vararg(This,ppVararg)	\
    (This)->lpVtbl -> get_Vararg(This,ppVararg)

#define IMWMethodArgInfo_put_Vararg(This,pVararg)	\
    (This)->lpVtbl -> put_Vararg(This,pVararg)

#define IMWMethodArgInfo_put_CopyToRange(This,bToRange)	\
    (This)->lpVtbl -> put_CopyToRange(This,bToRange)

#define IMWMethodArgInfo_get_CopyToRange(This,pbToRange)	\
    (This)->lpVtbl -> get_CopyToRange(This,pbToRange)

#define IMWMethodArgInfo_Select(This)	\
    (This)->lpVtbl -> Select(This)

#define IMWMethodArgInfo_get_IsListening(This,pbListen)	\
    (This)->lpVtbl -> get_IsListening(This,pbListen)

#define IMWMethodArgInfo_put_IsListening(This,bListen)	\
    (This)->lpVtbl -> put_IsListening(This,bListen)

#define IMWMethodArgInfo_Offset(This,nRows,nColumns,bCopyContents,bDeleteOriginal)	\
    (This)->lpVtbl -> Offset(This,nRows,nColumns,bCopyContents,bDeleteOriginal)

#define IMWMethodArgInfo_Clone(This,ppInfo)	\
    (This)->lpVtbl -> Clone(This,ppInfo)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_Value_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarValue);


void __RPC_STUB IMWMethodArgInfo_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_put_Value_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [in] */ VARIANT varValue);


void __RPC_STUB IMWMethodArgInfo_put_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_Name_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IMWMethodArgInfo_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_put_Name_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IMWMethodArgInfo_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_Type_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pnType);


void __RPC_STUB IMWMethodArgInfo_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_Flags_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pnFlags);


void __RPC_STUB IMWMethodArgInfo_get_Flags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_Indirection_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnInd);


void __RPC_STUB IMWMethodArgInfo_get_Indirection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_IsRange_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRange);


void __RPC_STUB IMWMethodArgInfo_get_IsRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_IsVararg_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbVararg);


void __RPC_STUB IMWMethodArgInfo_get_IsVararg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_MWFlags_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppFlags);


void __RPC_STUB IMWMethodArgInfo_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_put_MWFlags_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pFlags);


void __RPC_STUB IMWMethodArgInfo_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_Selected_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbSelected);


void __RPC_STUB IMWMethodArgInfo_get_Selected_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_Vararg_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ IMWEnumVararg __RPC_FAR *__RPC_FAR *ppVararg);


void __RPC_STUB IMWMethodArgInfo_get_Vararg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_put_Vararg_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [in] */ IMWEnumVararg __RPC_FAR *pVararg);


void __RPC_STUB IMWMethodArgInfo_put_Vararg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_put_CopyToRange_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bToRange);


void __RPC_STUB IMWMethodArgInfo_put_CopyToRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_CopyToRange_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbToRange);


void __RPC_STUB IMWMethodArgInfo_get_CopyToRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_Select_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This);


void __RPC_STUB IMWMethodArgInfo_Select_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_get_IsListening_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbListen);


void __RPC_STUB IMWMethodArgInfo_get_IsListening_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_put_IsListening_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bListen);


void __RPC_STUB IMWMethodArgInfo_put_IsListening_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_Offset_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [in] */ long nRows,
    /* [in] */ long nColumns,
    /* [in] */ VARIANT_BOOL bCopyContents,
    /* [in] */ VARIANT_BOOL bDeleteOriginal);


void __RPC_STUB IMWMethodArgInfo_Offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMWMethodArgInfo_Clone_Proxy( 
    IMWMethodArgInfo __RPC_FAR * This,
    /* [out] */ IMWMethodArgInfo __RPC_FAR *__RPC_FAR *ppInfo);


void __RPC_STUB IMWMethodArgInfo_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMWMethodArgInfo_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
