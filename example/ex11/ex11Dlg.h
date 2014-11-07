// ex11Dlg.h : header file
//

#if !defined(AFX_EX11DLG_H__7EF9ABAA_02F4_441A_B911_129674D0E9DA__INCLUDED_)
#define AFX_EX11DLG_H__7EF9ABAA_02F4_441A_B911_129674D0E9DA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CEx11Dlg dialog

class CEx11Dlg : public CDialog
{
// Construction
public:
	CEx11Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEx11Dlg)
	enum { IDD = IDD_EX11_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx11Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CEx11Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX11DLG_H__7EF9ABAA_02F4_441A_B911_129674D0E9DA__INCLUDED_)
