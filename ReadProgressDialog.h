#pragma once

#include "CDController.h"
#include "LogWindow.h"
#include "readthread.h"
#include "afxcmn.h"
#include "afxwin.h"


class CReadProgressDialog : public CDialog {
        DECLARE_DYNAMIC ( CReadProgressDialog )

    public:
        CReadProgressDialog ( CWnd* pParent = NULL );
        virtual ~CReadProgressDialog();

        enum { IDD = IDD_READPROGRESS };

    protected:
        virtual void DoDataExchange ( CDataExchange* pDX );
        CReadThread m_Thread;

        DECLARE_MESSAGE_MAP()
    public:
        afx_msg void OnBnClickedOk();
        void ReadDisc ( CCDController * cd, CLogWindow * logWnd, LPCSTR FileName );
        void ReadTrack ( CCDController * cd, CLogWindow * logWnd, LPCSTR FileName );
        virtual BOOL OnInitDialog();
        CString m_Percent;
        CProgressCtrl m_Progress;
        CString m_Message;
        afx_msg void OnBnClickedCancel();
        CButton m_CancelButton;
        afx_msg void OnBnClickedLog();
        CString m_Multi;
        afx_msg void OnWindowClose();
        bool GetSuccessFlag ( void );
        bool m_NoConfirm;
        bool m_Stopped;
        afx_msg void OnUpdateDialog();
};
