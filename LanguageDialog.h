#pragma once
#include "afxcmn.h"

class CLanguageDialog : public CDialog {
        DECLARE_DYNAMIC ( CLanguageDialog )

    public:
        CLanguageDialog ( CWnd* pParent = NULL );
        virtual ~CLanguageDialog();

        enum { IDD = IDD_LANGUAGE };

    protected:
        virtual void DoDataExchange ( CDataExchange* pDX );

        DECLARE_MESSAGE_MAP()
    public:
        CListCtrl m_List;
        virtual BOOL OnInitDialog();
        void SearchLanguageFile ( void );
        void DetectLanguageInfo ( void );
        afx_msg void OnBnClickedOk();
        afx_msg void OnBnClickedCancel();
        //  afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
        afx_msg void OnNMDblclkList ( NMHDR *pNMHDR, LRESULT *pResult );
        void CheckCML ( LPCSTR FileName, int ID );
};
