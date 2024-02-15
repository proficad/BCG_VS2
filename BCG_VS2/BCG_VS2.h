// BCG_VS2.h : main header file for the BCG_VS2 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CBCG_VS2App:
// See BCG_VS2.cpp for the implementation of this class
//

class CBCG_VS2App : public CBCGPWinApp
{
public:
	CBCG_VS2App();

	// Override from CBCGPWorkspace
	virtual void PreLoadState();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	virtual BOOL SaveAllModified();


// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBCG_VS2App theApp;
