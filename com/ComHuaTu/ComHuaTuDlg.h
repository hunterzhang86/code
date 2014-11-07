// ComHuaTuDlg.h : header file
//

#if !defined(AFX_COMHUATUDLG_H__07741A09_DDFC_4836_840E_CB595CF745B8__INCLUDED_)
#define AFX_COMHUATUDLG_H__07741A09_DDFC_4836_840E_CB595CF745B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CComHuaTuDlg dialog

class CComHuaTuDlg : public CDialog
{
// Construction
public:
	CComHuaTuDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CComHuaTuDlg)
	enum { IDD = IDD_COMHUATU_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComHuaTuDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CComHuaTuDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMHUATUDLG_H__07741A09_DDFC_4836_840E_CB595CF745B8__INCLUDED_)
