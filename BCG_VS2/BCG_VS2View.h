// BCG_VS2View.h : interface of the CBCG_VS2View class
//


#pragma once


class CBCG_VS2View : public CView
{
protected: // create from serialization only
	CBCG_VS2View();
	DECLARE_DYNCREATE(CBCG_VS2View)

// Attributes
public:
	CBCG_VS2Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CBCG_VS2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnContextMenu(CWnd*, CPoint point);
	afx_msg void OnFilePrintPreview();
	afx_msg LRESULT OnPrintClient(WPARAM wp, LPARAM lp);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BCG_VS2View.cpp
inline CBCG_VS2Doc* CBCG_VS2View::GetDocument() const
	{ return reinterpret_cast<CBCG_VS2Doc*>(m_pDocument); }
#endif

