
// CompositesDlg.h : header file
//

#pragma once


// CCompositesDlg dialog
class CCompositesDlg : public CDialogEx
{
// Construction
public:
	CCompositesDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COMPOSITES_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	long m_Var1;
	long m_Var2;
	long m_Var3;
	long m_Var1S;
	long m_Var2S;
	long m_Var3S;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton1();
	CEdit m_Var1Ctrl;
	CEdit m_Var2Ctrl;
	CEdit m_Var3Ctrl;
	afx_msg void OnEnChangeEdit7();
};
