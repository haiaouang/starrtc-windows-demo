#pragma once
#include "CUserManager.h"

// CSeviceParamDialog 对话框

class CSeviceParamDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CSeviceParamDialog)

public:
	CSeviceParamDialog(CUserManager* pUserManager, CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSeviceParamDialog();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SET_SERVER_PARAM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_UserIdEdit;
	CEdit m_AgentIdEdit;
	CEdit m_LoginServiceEdit;
	CEdit m_MessageServiceEdit;
	CEdit m_ChatServiceEdit;
	CEdit m_UploadServiceEdit;
	CEdit m_DownloadServiceEidt;
	CEdit m_VOIPServiceEdit;
	CUserManager* m_pUserManager;
	afx_msg void OnBnClickedButtonSaveSystermSetting();
	virtual BOOL OnInitDialog();
};
