// Example2Dlg.h : header file
//

#if !defined(AFX_EXAMPLE2DLG_H__3A000713_3300_41CC_9203_49266CC6BA21__INCLUDED_)
#define AFX_EXAMPLE2DLG_H__3A000713_3300_41CC_9203_49266CC6BA21__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CExample2Dlg dialog

class CExample2Dlg : public CDialog
{
// Construction
public:
	CExample2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CExample2Dlg)
	enum { IDD = IDD_EXAMPLE2_DIALOG };
	CString	m_edit4;
	CString	m_edit3;
	float	m_edit2;
	float	m_edit1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExample2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CExample2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangeEdit1();
	afx_msg void OnChangeEdit2();
	afx_msg void OnChangeEdit3();
	afx_msg void OnChangeEdit4();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXAMPLE2DLG_H__3A000713_3300_41CC_9203_49266CC6BA21__INCLUDED_)
