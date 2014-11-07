// Example2.h : main header file for the EXAMPLE2 application
//

#if !defined(AFX_EXAMPLE2_H__3F6AB217_0DF3_4CF9_8365_4F970E287AF8__INCLUDED_)
#define AFX_EXAMPLE2_H__3F6AB217_0DF3_4CF9_8365_4F970E287AF8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CExample2App:
// See Example2.cpp for the implementation of this class
//

class CExample2App : public CWinApp
{
public:
	CExample2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExample2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CExample2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXAMPLE2_H__3F6AB217_0DF3_4CF9_8365_4F970E287AF8__INCLUDED_)
