// ex11.h : main header file for the EX11 application
//

#if !defined(AFX_EX11_H__C88E1731_1CF4_47F6_B839_7954A465D714__INCLUDED_)
#define AFX_EX11_H__C88E1731_1CF4_47F6_B839_7954A465D714__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEx11App:
// See ex11.cpp for the implementation of this class
//

class CEx11App : public CWinApp
{
public:
	CEx11App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx11App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEx11App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX11_H__C88E1731_1CF4_47F6_B839_7954A465D714__INCLUDED_)
