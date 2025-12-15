///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Project1.h"

///////////////////////////////////////////////////////////////////////////

#include "Project1.h"

#include "Project1.h"

MyFrame1::MyFrame1(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	// [修復黑屏關鍵 1] 設定背景色為系統視窗顏色
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	// --- 頂部導航列 (TopBar) ---
	TopBarPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1, 50), wxTAB_TRAVERSAL);
	TopBarPanel->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxHORIZONTAL);

	HomePage = new wxButton(TopBarPanel, wxID_ANY, _("Home"), wxDefaultPosition, wxDefaultSize, 0);
	HomePage->Bind(wxEVT_BUTTON, &MyFrame1::OnHomeClick, this); // 綁定事件
	bSizer2->Add(HomePage, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	ServiceButton = new wxButton(TopBarPanel, wxID_ANY, _("Service"), wxDefaultPosition, wxDefaultSize, 0);
	ServiceButton->Bind(wxEVT_BUTTON, &MyFrame1::OnServiceClick, this);
	bSizer2->Add(ServiceButton, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	MyProfile = new wxButton(TopBarPanel, wxID_ANY, _("Profile"), wxDefaultPosition, wxDefaultSize, 0);
	MyProfile->Bind(wxEVT_BUTTON, &MyFrame1::OnProfileClick, this);
	bSizer2->Add(MyProfile, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	m_button21 = new wxButton(TopBarPanel, wxID_ANY, _("Cart"), wxDefaultPosition, wxDefaultSize, 0);
	m_button21->Bind(wxEVT_BUTTON, &MyFrame1::OnCartClick, this);
	bSizer2->Add(m_button21, 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);

	bSizer2->Add(0, 0, 1, wxEXPAND, 5); // 空格推擠

	m_textCtrl10 = new wxTextCtrl(TopBarPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(200, -1), 0);
	bSizer2->Add(m_textCtrl10, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	m_button13 = new wxButton(TopBarPanel, wxID_ANY, _("Search"), wxDefaultPosition, wxDefaultSize, 0);
	m_button13->SetBackgroundColour(wxColour(255, 255, 0));
	bSizer2->Add(m_button13, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	TopBarPanel->SetSizer(bSizer2);
	TopBarPanel->Layout();
	bSizer1->Add(TopBarPanel, 0, wxEXPAND | wxALL, 0);

	// --- 內容區 (ContentPanel) ---
	ContentPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer(wxVERTICAL);

	// 1. LOGO Panel
	LOGOpanel = new wxPanel(ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	LOGOpanel->SetBackgroundColour(wxColour(39, 163, 153));
	wxBoxSizer* bSizer21 = new wxBoxSizer(wxHORIZONTAL);

	STORE1 = new wxButton(LOGOpanel, wxID_ANY, _("STORE BANNER"), wxDefaultPosition, wxSize(180, 100), 0);
	STORE1->SetBackgroundColour(wxColour(128, 128, 192));
	bSizer21->Add(STORE1, 0, wxALIGN_CENTER_VERTICAL | wxALL, 10);

	wxBoxSizer* vInfo = new wxBoxSizer(wxVERTICAL);
	m_textCtrl40 = new wxTextCtrl(LOGOpanel, wxID_ANY, _("News..."), wxDefaultPosition, wxDefaultSize, 0);
	vInfo->Add(m_textCtrl40, 1, wxEXPAND | wxALL, 5);
	m_textCtrl401 = new wxTextCtrl(LOGOpanel, wxID_ANY, _("Discount..."), wxDefaultPosition, wxDefaultSize, 0);
	vInfo->Add(m_textCtrl401, 1, wxEXPAND | wxALL, 5);
	bSizer21->Add(vInfo, 1, wxEXPAND, 5);

	LOGOpanel->SetSizer(bSizer21);
	bSizer171->Add(LOGOpanel, 0, wxEXPAND | wxALL, 5);

	// 2. Product Scroll (商品列表)
	ProductScroll = new wxScrolledWindow(ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL | wxVSCROLL);
	ProductScroll->SetScrollRate(10, 10);
	ProductScroll->SetBackgroundColour(wxColour(139, 177, 220));

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer(0, 3, 10, 10);
	fgSizer1->AddGrowableCol(0); fgSizer1->AddGrowableCol(1); fgSizer1->AddGrowableCol(2);
	fgSizer1->SetFlexibleDirection(wxBOTH);
	fgSizer1->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	// 商品 1
	m_panel15 = new wxPanel(ProductScroll, wxID_ANY, wxDefaultPosition, wxSize(-1, 250), wxTAB_TRAVERSAL);
	m_panel15->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INACTIVECAPTION));
	wxBoxSizer* pSizer1 = new wxBoxSizer(wxVERTICAL);
	m_bitmap1 = new wxStaticBitmap(m_panel15, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(200, 150), 0);
	m_bitmap1->SetBackgroundColour(*wxWHITE);
	pSizer1->Add(m_bitmap1, 1, wxEXPAND | wxALL, 5);
	m_button20 = new wxButton(m_panel15, wxID_ANY, _("Detail"), wxDefaultPosition, wxDefaultSize, 0);
	pSizer1->Add(m_button20, 0, wxEXPAND | wxALL, 5);
	m_panel15->SetSizer(pSizer1);
	fgSizer1->Add(m_panel15, 1, wxEXPAND | wxALL, 5);

	// 商品 2
	m_panel14 = new wxPanel(ProductScroll, wxID_ANY, wxDefaultPosition, wxSize(-1, 250), wxTAB_TRAVERSAL);
	m_panel14->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INACTIVECAPTION));
	wxBoxSizer* pSizer2 = new wxBoxSizer(wxVERTICAL);
	m_bitmap2 = new wxStaticBitmap(m_panel14, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(200, 150), 0);
	m_bitmap2->SetBackgroundColour(*wxWHITE);
	pSizer2->Add(m_bitmap2, 1, wxEXPAND | wxALL, 5);
	m_button19 = new wxButton(m_panel14, wxID_ANY, _("Detail"), wxDefaultPosition, wxDefaultSize, 0);
	pSizer2->Add(m_button19, 0, wxEXPAND | wxALL, 5);
	m_panel14->SetSizer(pSizer2);
	fgSizer1->Add(m_panel14, 1, wxEXPAND | wxALL, 5);

	ProductScroll->SetSizer(fgSizer1);
	bSizer171->Add(ProductScroll, 1, wxEXPAND | wxALL, 5);

	// 3. Service Page
	Service = new wxPanel(ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* sSizer = new wxBoxSizer(wxVERTICAL);
	m_scrolledWindow2 = new wxScrolledWindow(Service, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL | wxVSCROLL);
	m_scrolledWindow2->SetScrollRate(5, 5);
	wxBoxSizer* sInner = new wxBoxSizer(wxVERTICAL);
	Name = new wxTextCtrl(m_scrolledWindow2, wxID_ANY, "Name:"); sInner->Add(Name, 0, wxALL | wxEXPAND, 5);
	Problems = new wxTextCtrl(m_scrolledWindow2, wxID_ANY, "Content:", wxDefaultPosition, wxSize(-1, 100), wxTE_MULTILINE); sInner->Add(Problems, 0, wxALL | wxEXPAND, 5);
	Send = new wxButton(m_scrolledWindow2, wxID_ANY, "Send"); sInner->Add(Send, 0, wxALL, 5);
	m_scrolledWindow2->SetSizer(sInner);
	sSizer->Add(m_scrolledWindow2, 1, wxEXPAND);
	Service->SetSizer(sSizer);
	bSizer171->Add(Service, 1, wxEXPAND | wxALL, 5);

	// 4. Profile Page
	Myprofile = new wxPanel(ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	Myprofile->SetBackgroundColour(wxColour(168, 196, 192));
	wxBoxSizer* proSizer = new wxBoxSizer(wxVERTICAL);
	m_textCtrl36 = new wxTextCtrl(Myprofile, wxID_ANY, "User Profile Info...");
	proSizer->Add(m_textCtrl36, 0, wxALL | wxEXPAND, 10);
	Myprofile->SetSizer(proSizer);
	bSizer171->Add(Myprofile, 1, wxEXPAND | wxALL, 5);

	// 5. Cart Page
	Cart = new wxPanel(ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* cSizer = new wxBoxSizer(wxVERTICAL);
	m_textCtrl3823 = new wxTextCtrl(Cart, wxID_ANY, "Shopping Cart");
	cSizer->Add(m_textCtrl3823, 0, wxALL | wxEXPAND, 5);
	Cart->SetSizer(cSizer);
	bSizer171->Add(Cart, 1, wxEXPAND | wxALL, 5);

	ContentPanel->SetSizer(bSizer171);
	bSizer1->Add(ContentPanel, 1, wxEXPAND | wxALL, 5);

	this->SetSizer(bSizer1);

	// [修復黑屏關鍵 2] 強制執行初始化邏輯
	// 不管 Main 是怎麼寫的，這裡都會確保首頁顯示出來
	ShowHomePage();

	this->Layout();
	this->Centre(wxBOTH);
}

MyFrame1::~MyFrame1()
{
}

void MyFrame1::HideAll()
{
	if (LOGOpanel) LOGOpanel->Hide();
	if (ProductScroll) ProductScroll->Hide();
	if (Service) Service->Hide();
	if (Myprofile) Myprofile->Hide();
	if (Cart) Cart->Hide();
}

void MyFrame1::ShowHomePage()
{
	HideAll();
	if (LOGOpanel) LOGOpanel->Show();
	if (ProductScroll) ProductScroll->Show();
	// [修復黑屏關鍵 3] 切換頁面後必須呼叫 Layout
	if (ContentPanel) ContentPanel->Layout();
	this->Layout();
	this->Refresh();
}