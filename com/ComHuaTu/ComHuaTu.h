// ComHuaTu.h : main header file for the COMHUATU application
//

#if !defined(AFX_COMHUATU_H__7F552012_7376_46A3_9A9F_B5E8446EDE2C__INCLUDED_)
#define AFX_COMHUATU_H__7F552012_7376_46A3_9A9F_B5E8446EDE2C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CComHuaTuApp:
// See ComHuaTu.cpp for the implementation of this class
//

class CComHuaTuApp : public CWinApp
{
public:
	CComHuaTuApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComHuaTuApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CComHuaTuApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMHUATU_H__7F552012_7376_46A3_9A9F_B5E8446EDE2C__INCLUDED_)
