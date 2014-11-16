/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Apr 01 21:13:41 2013
 */
/* Compiler settings for C:/MATLAB701/work/component/src\component_idl.idl:
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

#ifndef __component_idl_h__
#define __component_idl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __Ihuatu_FWD_DEFINED__
#define __Ihuatu_FWD_DEFINED__
typedef interface Ihuatu Ihuatu;
#endif 	/* __Ihuatu_FWD_DEFINED__ */


#ifndef __huatu_FWD_DEFINED__
#define __huatu_FWD_DEFINED__

#ifdef __cplusplus
typedef class huatu huatu;
#else
typedef struct huatu huatu;
#endif /* __cplusplus */

#endif 	/* __huatu_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "mwcomtypes.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __Ihuatu_INTERFACE_DEFINED__
#define __Ihuatu_INTERFACE_DEFINED__

/* interface Ihuatu */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_Ihuatu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("318D5000-93B9-456A-963E-EB0A9864645B")
    Ihuatu : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags __RPC_FAR *pvFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE huatu( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IhuatuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            Ihuatu __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            Ihuatu __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            Ihuatu __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            Ihuatu __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            Ihuatu __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            Ihuatu __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            Ihuatu __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MWFlags )( 
            Ihuatu __RPC_FAR * This,
            /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MWFlags )( 
            Ihuatu __RPC_FAR * This,
            /* [in] */ IMWFlags __RPC_FAR *pvFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *huatu )( 
            Ihuatu __RPC_FAR * This);
        
        END_INTERFACE
    } IhuatuVtbl;

    interface Ihuatu
    {
        CONST_VTBL struct IhuatuVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Ihuatu_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define Ihuatu_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define Ihuatu_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define Ihuatu_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define Ihuatu_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define Ihuatu_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define Ihuatu_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define Ihuatu_get_MWFlags(This,ppvFlags)	\
    (This)->lpVtbl -> get_MWFlags(This,ppvFlags)

#define Ihuatu_put_MWFlags(This,pvFlags)	\
    (This)->lpVtbl -> put_MWFlags(This,pvFlags)

#define Ihuatu_huatu(This)	\
    (This)->lpVtbl -> huatu(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE Ihuatu_get_MWFlags_Proxy( 
    Ihuatu __RPC_FAR * This,
    /* [retval][out] */ IMWFlags __RPC_FAR *__RPC_FAR *ppvFlags);


void __RPC_STUB Ihuatu_get_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE Ihuatu_put_MWFlags_Proxy( 
    Ihuatu __RPC_FAR * This,
    /* [in] */ IMWFlags __RPC_FAR *pvFlags);


void __RPC_STUB Ihuatu_put_MWFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Ihuatu_huatu_Proxy( 
    Ihuatu __RPC_FAR * This);


void __RPC_STUB Ihuatu_huatu_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __Ihuatu_INTERFACE_DEFINED__ */



#ifndef __component_LIBRARY_DEFINED__
#define __component_LIBRARY_DEFINED__

/* library component */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_component;

EXTERN_C const CLSID CLSID_huatu;

#ifdef __cplusplus

class DECLSPEC_UUID("C0782F1F-D802-4BFB-B4D9-86B257AF1BD5")
huatu;
#endif
#endif /* __component_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
