#pragma once

#ifndef __AFXWIN_H__
    #error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"

#define APP_VERSION "1.0.3"

class CCDMApp : public CWinApp {
    public:
        CCDMApp();
    public:
        virtual BOOL InitInstance();

        DECLARE_MESSAGE_MAP()
};

extern CCDMApp theApp;
