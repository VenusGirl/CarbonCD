#include "StdAfx.h"
#include "filelist.h"

CFileList::CFileList ( void )
{
    m_Dir = NULL;
    m_Next = NULL;
}

CFileList::~CFileList ( void )
{
    if ( m_Next != NULL )
        {
            delete m_Next;
        }
}

CFileList * CFileList::CreateNext ( void )
{
    if ( m_Next == NULL )
        {
            m_Next = new CFileList;
        }

    return m_Next;
}

CFileList * CFileList::GetNext ( void )
{
    return m_Next;
}

void CFileList::SetNext ( CFileList * Node )
{
    m_Next = Node;
}
