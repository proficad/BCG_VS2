// BCG_VS2Doc.h : interface of the CBCG_VS2Doc class
//


#pragma once


class CBCG_VS2Doc : public CDocument
{
protected: // create from serialization only
	CBCG_VS2Doc();
	DECLARE_DYNCREATE(CBCG_VS2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CBCG_VS2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


