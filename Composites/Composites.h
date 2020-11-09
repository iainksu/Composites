
// Composites.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCompositesApp:
// See Composites.cpp for the implementation of this class
//

class CCompositesApp : public CWinApp
{
public:
	CCompositesApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCompositesApp theApp;
