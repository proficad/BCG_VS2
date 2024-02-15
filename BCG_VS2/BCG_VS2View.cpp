// BCG_VS2View.cpp : implementation of the CBCG_VS2View class
//

#include "stdafx.h"
#include "BCG_VS2.h"

#include "BCG_VS2Doc.h"
#include "BCG_VS2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBCG_VS2View

IMPLEMENT_DYNCREATE(CBCG_VS2View, CView)

BEGIN_MESSAGE_MAP(CBCG_VS2View, CView)
	ON_WM_CONTEXTMENU()
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CBCG_VS2View::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_MESSAGE(WM_PRINTCLIENT, &CBCG_VS2View::OnPrintClient)
END_MESSAGE_MAP()

// CBCG_VS2View construction/destruction

CBCG_VS2View::CBCG_VS2View()
{
	// TODO: add construction code here

}

CBCG_VS2View::~CBCG_VS2View()
{
}

BOOL CBCG_VS2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CBCG_VS2View drawing

void CBCG_VS2View::OnDraw(CDC* /*pDC*/)
{
	CBCG_VS2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}


// CBCG_VS2View printing

void CBCG_VS2View::OnFilePrintPreview()
{
	BCGPPrintPreview (this);
}

BOOL CBCG_VS2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	return BCGPPreparePrinting(this, pInfo);
}

void CBCG_VS2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBCG_VS2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CBCG_VS2View diagnostics

#ifdef _DEBUG
void CBCG_VS2View::AssertValid() const
{
	CView::AssertValid();
}

void CBCG_VS2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBCG_VS2Doc* CBCG_VS2View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBCG_VS2Doc)));
	return (CBCG_VS2Doc*)m_pDocument;
}
#endif //_DEBUG


// CBCG_VS2View message handlers

LRESULT CBCG_VS2View::OnPrintClient(WPARAM wp, LPARAM lp)
{
	if ((lp & PRF_CLIENT) == PRF_CLIENT)
	{
		CDC* pDC = CDC::FromHandle((HDC)wp);
		ASSERT_VALID(pDC);

		OnDraw(pDC);
	}

	return 0;
}


void CBCG_VS2View::OnContextMenu(CWnd*, CPoint point)
{
	if (CBCGPPopupMenu::GetSafeActivePopupMenu() != NULL)
	{
		return;
	}

	theApp.ShowPopupMenu(IDR_CONTEXT_MENU, point, this);
}
