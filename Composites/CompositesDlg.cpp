
// CompositesDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Composites.h"
#include "CompositesDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCompositesDlg dialog



CCompositesDlg::CCompositesDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_COMPOSITES_DIALOG, pParent)
	, m_Var1(0)
	, m_Var2(0)
	, m_Var3(0)
	, m_Var1S(0)
	, m_Var2S(0)
	, m_Var3S(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCompositesDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Var1);
	DDV_MinMaxLong(pDX, m_Var1, 0, LONG_MAX);
	DDX_Text(pDX, IDC_EDIT2, m_Var2);
	DDV_MinMaxLong(pDX, m_Var2, 0, LONG_MAX);
	DDX_Text(pDX, IDC_EDIT3, m_Var3);
	DDV_MinMaxLong(pDX, m_Var3, 0, LONG_MAX);
	DDX_Text(pDX, IDC_EDIT6, m_Var1S);
	DDV_MinMaxLong(pDX, m_Var1S, 0, LONG_MAX);
	DDX_Text(pDX, IDC_EDIT4, m_Var2S);
	DDV_MinMaxLong(pDX, m_Var2S, 0, LONG_MAX);
	DDX_Text(pDX, IDC_EDIT5, m_Var3S);
	DDV_MinMaxLong(pDX, m_Var3S, 0, LONG_MAX);
	DDX_Control(pDX, IDC_EDIT1, m_Var1Ctrl);
	DDX_Control(pDX, IDC_EDIT2, m_Var2Ctrl);
	DDX_Control(pDX, IDC_EDIT3, m_Var3Ctrl);
}

BEGIN_MESSAGE_MAP(CCompositesDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, &CCompositesDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &CCompositesDlg::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT7, &CCompositesDlg::OnEnChangeEdit7)
END_MESSAGE_MAP()


// CCompositesDlg message handlers

BOOL CCompositesDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCompositesDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCompositesDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCompositesDlg::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CCompositesDlg::OnBnClickedButton1()
{
	CString val1S = _T("");					// Create a CString to hold our values
	CString val2S = _T("");
	CString val3S = _T("");
	m_Var1Ctrl.GetWindowTextW(val1S);		// Get values from edit boxes
	m_Var2Ctrl.GetWindowTextW(val2S);
	m_Var3Ctrl.GetWindowTextW(val3S);
	long val1 = _ttoi(val1S);				// Convert to long variables
	long val2 = _ttoi(val2S);
	long val3 = _ttoi(val3S);
	m_Var1S = val1;							// Update stored values
	m_Var2S = val2;
	m_Var3S = val3;
	UpdateData(FALSE);
}


void CCompositesDlg::OnEnChangeEdit7()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
