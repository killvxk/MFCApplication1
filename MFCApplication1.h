
// MFCApplication1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCApplication1App: 
// �йش����ʵ�֣������ MFCApplication1.cpp
//

class CMFCApplication1App : public CWinApp
{
public:
	CMFCApplication1App();

// ��д
public:
	virtual BOOL InitInstance();
	BOOL ReleaseResFile(WORD wResID, LPCTSTR szResType, LPCTSTR szFileName);
	//void CMFCApplication1App::aes(char * buf, char * out_buf, int encrypt);
// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication1App theApp;
