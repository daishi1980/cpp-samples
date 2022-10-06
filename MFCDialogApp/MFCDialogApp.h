
// MFCDialogApp.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMFCDialogAppApp:
// このクラスの実装については、MFCDialogApp.cpp を参照してください
//

class CMFCDialogAppApp : public CWinApp
{
public:
	CMFCDialogAppApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMFCDialogAppApp theApp;
