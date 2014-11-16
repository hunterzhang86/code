/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Apr 01 21:13:41 2013
 */
/* Compiler settings for C:/MATLAB701/work/component/src\component_idl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


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

const IID IID_Ihuatu = {0x318D5000,0x93B9,0x456A,{0x96,0x3E,0xEB,0x0A,0x98,0x64,0x64,0x5B}};


const IID LIBID_component = {0xCE844431,0x9A47,0x4B43,{0xB5,0x7A,0xB8,0x8A,0xA7,0xE2,0x19,0x5C}};


const CLSID CLSID_huatu = {0xC0782F1F,0xD802,0x4BFB,{0xB4,0xD9,0x86,0xB2,0x57,0xAF,0x1B,0xD5}};


#ifdef __cplusplus
}
#endif

