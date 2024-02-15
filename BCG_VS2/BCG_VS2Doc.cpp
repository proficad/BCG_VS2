// BCG_VS2Doc.cpp : implementation of the CBCG_VS2Doc class
//

#include "stdafx.h"
#include "BCG_VS2.h"

#include "BCG_VS2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBCG_VS2Doc

IMPLEMENT_DYNCREATE(CBCG_VS2Doc, CDocument)

BEGIN_MESSAGE_MAP(CBCG_VS2Doc, CDocument)
END_MESSAGE_MAP()


// CBCG_VS2Doc construction/destruction

CBCG_VS2Doc::CBCG_VS2Doc()
{
	// TODO: add one-time construction code here

}

CBCG_VS2Doc::~CBCG_VS2Doc()
{
}

BOOL CBCG_VS2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

// CBCG_VS2Doc serialization

void CBCG_VS2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CBCG_VS2Doc diagnostics

#ifdef _DEBUG
void CBCG_VS2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBCG_VS2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CBCG_VS2Doc commands
