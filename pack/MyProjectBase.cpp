///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MyProjectBase.h"

///////////////////////////////////////////////////////////////////////////

MainLobby::MainLobby( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	TopBarPanelMain = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,35 ), wxTAB_TRAVERSAL );
	TopBarPanelMain->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	TopBarPanelMain->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	TopBarPanelMain->SetMinSize( wxSize( -1,35 ) );
	TopBarPanelMain->SetMaxSize( wxSize( -1,35 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	bSizer2->SetMinSize( wxSize( -1,1 ) );
	HomePage = new wxButton( TopBarPanelMain, wxID_ANY, _("HomePage"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( HomePage, 0, wxALL, 5 );

	ServiceContact = new wxButton( TopBarPanelMain, wxID_ANY, _("ServiceContact"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( ServiceContact, 0, wxALL, 5 );

	MyProfile = new wxButton( TopBarPanelMain, wxID_ANY, _("MyProfile"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyProfile, 0, wxALL, 5 );

	MyCart = new wxButton( TopBarPanelMain, wxID_ANY, _("MyCart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyCart, 0, wxALL, 5 );

	Space = new wxPanel( TopBarPanelMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( Space, 1, wxEXPAND | wxALL, 5 );

	Enter = new wxTextCtrl( TopBarPanelMain, wxID_ANY, _("Enter"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( Enter, 0, wxALL, 5 );

	Search = new wxButton( TopBarPanelMain, wxID_ANY, _("Search"), wxDefaultPosition, wxDefaultSize, 0 );
	Search->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	Search->SetBackgroundColour( wxColour( 255, 255, 0 ) );

	bSizer2->Add( Search, 0, wxALL, 5 );


	TopBarPanelMain->SetSizer( bSizer2 );
	TopBarPanelMain->Layout();
	bSizer1->Add( TopBarPanelMain, 1, wxEXPAND | wxALL, 5 );

	ContentPanelMain = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer( wxVERTICAL );

	ProductLogoScroll = new wxScrolledWindow( ContentPanelMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	ProductLogoScroll->SetScrollRate( 5, 5 );
	ProductLogoScroll->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	ProductLogoScroll->SetBackgroundColour( wxColour( 139, 177, 220 ) );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 0, 1, 1 );
	fgSizer1->AddGrowableCol( 0 );
	fgSizer1->AddGrowableRow( 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	LOGOpanel = new wxPanel( ProductLogoScroll, wxID_ANY, wxDefaultPosition, wxSize( -1,120 ), wxTAB_TRAVERSAL );
	LOGOpanel->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	LOGOpanel->SetBackgroundColour( wxColour( 39, 163, 153 ) );
	LOGOpanel->SetMinSize( wxSize( -1,120 ) );
	LOGOpanel->SetMaxSize( wxSize( -1,120 ) );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	bSizer21->SetMinSize( wxSize( 100,100 ) );
	LOGO = new wxButton( LOGOpanel, wxID_ANY, _("LOGO"), wxDefaultPosition, wxSize( 180,100 ), 0 );

	LOGO->SetBitmap( wxBitmap( wxT("pack/pic1.png"), wxBITMAP_TYPE_ANY ) );
	LOGO->SetBitmapPressed( wxBitmap( wxT("pack/pic2.png"), wxBITMAP_TYPE_ANY ) );
	LOGO->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	LOGO->SetBackgroundColour( wxColour( 128, 128, 192 ) );

	bSizer21->Add( LOGO, 0, wxALL|wxEXPAND, 5 );

	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 2, 1, 0, 0 );

	UpText = new wxTextCtrl( LOGOpanel, wxID_ANY, _("Hello,This is Paillard online store."), wxDefaultPosition, wxDefaultSize, 0 );
	UpText->SetFont( wxFont( 20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	gSizer2->Add( UpText, 0, wxALL|wxEXPAND, 5 );

	DownText = new wxTextCtrl( LOGOpanel, wxID_ANY, _("It's a place for bid and buy the product."), wxDefaultPosition, wxDefaultSize, 0 );
	DownText->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	gSizer2->Add( DownText, 0, wxALL|wxEXPAND, 5 );


	bSizer21->Add( gSizer2, 1, wxEXPAND, 5 );


	LOGOpanel->SetSizer( bSizer21 );
	LOGOpanel->Layout();
	fgSizer1->Add( LOGOpanel, 1, wxEXPAND | wxALL, 5 );

	ProductAll = new wxPanel( ProductLogoScroll, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer8;
	gSizer8 = new wxGridSizer( 2, 3, 0, 0 );

	ProductOne = new wxPanel( ProductAll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	ProductOne->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	ProductOne->SetMinSize( wxSize( 200,250 ) );
	ProductOne->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	ProductPicOne = new wxPanel( ProductOne, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );

	ProductOnePng = new wxButton( ProductPicOne, wxID_ANY, _("ProductOnePng"), wxDefaultPosition, wxSize( 200,250 ), 0 );

	ProductOnePng->SetBitmap( wxBitmap( wxT("pack/1.png"), wxBITMAP_TYPE_ANY ) );
	ProductOnePng->SetMinSize( wxSize( 200,250 ) );
	ProductOnePng->SetMaxSize( wxSize( 200,250 ) );

	bSizer22->Add( ProductOnePng, 0, wxALL|wxEXPAND, 5 );


	ProductPicOne->SetSizer( bSizer22 );
	ProductPicOne->Layout();
	bSizer22->Fit( ProductPicOne );
	bSizer7->Add( ProductPicOne, 1, wxEXPAND | wxALL, 5 );

	ProductOneLike = new wxButton( ProductOne, wxID_ANY, _("Like"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( ProductOneLike, 0, wxALL, 5 );

	ProductOneText = new wxTextCtrl( ProductOne, wxID_ANY, _("Vintage Camera for US500"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( ProductOneText, 0, wxALL|wxEXPAND, 5 );


	ProductOne->SetSizer( bSizer7 );
	ProductOne->Layout();
	gSizer8->Add( ProductOne, 0, wxALL|wxEXPAND, 5 );

	ProductTwo = new wxPanel( ProductAll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	ProductTwo->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	ProductTwo->SetMinSize( wxSize( 200,250 ) );
	ProductTwo->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	ProductTwoPic = new wxPanel( ProductTwo, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );

	ProductTwoPng = new wxButton( ProductTwoPic, wxID_ANY, _("ProductTwoPng"), wxDefaultPosition, wxSize( 200,250 ), 0 );

	ProductTwoPng->SetBitmap( wxBitmap( wxT("pack/2.png"), wxBITMAP_TYPE_ANY ) );
	ProductTwoPng->SetMinSize( wxSize( 200,250 ) );
	ProductTwoPng->SetMaxSize( wxSize( 200,250 ) );

	bSizer23->Add( ProductTwoPng, 0, wxALL|wxEXPAND, 5 );


	ProductTwoPic->SetSizer( bSizer23 );
	ProductTwoPic->Layout();
	bSizer23->Fit( ProductTwoPic );
	bSizer6->Add( ProductTwoPic, 1, wxEXPAND | wxALL, 5 );

	ProductTwoLike = new wxButton( ProductTwo, wxID_ANY, _("Like"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( ProductTwoLike, 0, wxALL, 5 );

	ProductTwoText = new wxTextCtrl( ProductTwo, wxID_ANY, _("Prime Lens loamow $234"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( ProductTwoText, 0, wxALL|wxEXPAND, 5 );


	ProductTwo->SetSizer( bSizer6 );
	ProductTwo->Layout();
	gSizer8->Add( ProductTwo, 0, wxALL|wxEXPAND, 5 );

	ProductThree = new wxPanel( ProductAll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	ProductThree->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	ProductThree->SetMinSize( wxSize( 200,250 ) );
	ProductThree->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	ProductThreePic = new wxPanel( ProductThree, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );

	ProductThreePng = new wxButton( ProductThreePic, wxID_ANY, _("ProductThreePng"), wxDefaultPosition, wxSize( 200,250 ), 0 );

	ProductThreePng->SetBitmap( wxBitmap( wxT("pack/3.png"), wxBITMAP_TYPE_ANY ) );
	ProductThreePng->SetMinSize( wxSize( 200,250 ) );
	ProductThreePng->SetMaxSize( wxSize( 200,250 ) );

	bSizer24->Add( ProductThreePng, 0, wxALL|wxEXPAND, 5 );


	ProductThreePic->SetSizer( bSizer24 );
	ProductThreePic->Layout();
	bSizer24->Fit( ProductThreePic );
	bSizer8->Add( ProductThreePic, 1, wxEXPAND | wxALL, 5 );

	ProductThreeLike = new wxButton( ProductThree, wxID_ANY, _("Like"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( ProductThreeLike, 0, wxALL, 5 );

	ProductThreeText = new wxTextCtrl( ProductThree, wxID_ANY, _("Knitwear for Kid $93"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( ProductThreeText, 0, wxALL|wxEXPAND, 5 );


	ProductThree->SetSizer( bSizer8 );
	ProductThree->Layout();
	gSizer8->Add( ProductThree, 0, wxEXPAND | wxALL, 5 );

	ProductFour = new wxPanel( ProductAll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	ProductFour->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	ProductFour->SetMinSize( wxSize( 200,250 ) );
	ProductFour->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	ProductFourPic = new wxPanel( ProductFour, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );

	ProductFourPng = new wxButton( ProductFourPic, wxID_ANY, _("ProductFourPng"), wxDefaultPosition, wxSize( 200,250 ), 0 );

	ProductFourPng->SetBitmap( wxBitmap( wxT("pack/4.png"), wxBITMAP_TYPE_ANY ) );
	ProductFourPng->SetMinSize( wxSize( 200,250 ) );
	ProductFourPng->SetMaxSize( wxSize( 200,250 ) );

	bSizer25->Add( ProductFourPng, 0, wxALL|wxEXPAND, 5 );


	ProductFourPic->SetSizer( bSizer25 );
	ProductFourPic->Layout();
	bSizer25->Fit( ProductFourPic );
	bSizer9->Add( ProductFourPic, 1, wxEXPAND | wxALL, 5 );

	ProductFourLike = new wxButton( ProductFour, wxID_ANY, _("Like"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( ProductFourLike, 0, wxALL, 5 );

	ProductFourText = new wxTextCtrl( ProductFour, wxID_ANY, _("Vintage Jacket $183"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( ProductFourText, 0, wxALL|wxEXPAND, 5 );


	ProductFour->SetSizer( bSizer9 );
	ProductFour->Layout();
	gSizer8->Add( ProductFour, 0, wxEXPAND | wxALL, 5 );

	ProductFive = new wxPanel( ProductAll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	ProductFive->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	ProductFive->SetMinSize( wxSize( 200,250 ) );
	ProductFive->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	ProductFivePic = new wxPanel( ProductFive, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer211;
	bSizer211 = new wxBoxSizer( wxVERTICAL );

	ProductFivePng = new wxButton( ProductFivePic, wxID_ANY, _("ProductFivePng"), wxDefaultPosition, wxSize( 200,250 ), 0 );

	ProductFivePng->SetBitmap( wxBitmap( wxT("pack/5.png"), wxBITMAP_TYPE_ANY ) );
	ProductFivePng->SetMinSize( wxSize( 200,250 ) );
	ProductFivePng->SetMaxSize( wxSize( 200,250 ) );

	bSizer211->Add( ProductFivePng, 0, wxALL|wxEXPAND, 5 );


	ProductFivePic->SetSizer( bSizer211 );
	ProductFivePic->Layout();
	bSizer211->Fit( ProductFivePic );
	bSizer10->Add( ProductFivePic, 1, wxEXPAND | wxALL, 5 );

	ProductFiveLike = new wxButton( ProductFive, wxID_ANY, _("Like"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( ProductFiveLike, 0, wxALL, 5 );

	ProductFiveText = new wxTextCtrl( ProductFive, wxID_ANY, _("Kern Switar Lens condition brand new! $932"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( ProductFiveText, 0, wxALL|wxEXPAND, 5 );


	ProductFive->SetSizer( bSizer10 );
	ProductFive->Layout();
	gSizer8->Add( ProductFive, 0, wxEXPAND | wxALL, 5 );

	ProductSix = new wxPanel( ProductAll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	ProductSix->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	ProductSix->SetMinSize( wxSize( 200,250 ) );
	ProductSix->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	ProductSixPic = new wxPanel( ProductSix, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	ProductSixPng = new wxButton( ProductSixPic, wxID_ANY, _("ProductSixPng"), wxDefaultPosition, wxSize( 200,250 ), 0 );

	ProductSixPng->SetBitmap( wxBitmap( wxT("pack/6.png"), wxBITMAP_TYPE_ANY ) );
	ProductSixPng->SetMinSize( wxSize( 200,250 ) );
	ProductSixPng->SetMaxSize( wxSize( 200,250 ) );

	bSizer17->Add( ProductSixPng, 0, wxALL|wxEXPAND, 5 );


	ProductSixPic->SetSizer( bSizer17 );
	ProductSixPic->Layout();
	bSizer17->Fit( ProductSixPic );
	bSizer11->Add( ProductSixPic, 1, wxALL|wxEXPAND, 5 );

	ProductSixLike = new wxButton( ProductSix, wxID_ANY, _("Like"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( ProductSixLike, 0, wxALL, 5 );

	ProductSixText = new wxTextCtrl( ProductSix, wxID_ANY, _("【Mint++】Hlitos Pizar Lens $754"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( ProductSixText, 0, wxALL|wxEXPAND, 5 );


	ProductSix->SetSizer( bSizer11 );
	ProductSix->Layout();
	gSizer8->Add( ProductSix, 0, wxEXPAND | wxALL, 5 );


	ProductAll->SetSizer( gSizer8 );
	ProductAll->Layout();
	gSizer8->Fit( ProductAll );
	fgSizer1->Add( ProductAll, 1, wxEXPAND | wxALL, 5 );


	ProductLogoScroll->SetSizer( fgSizer1 );
	ProductLogoScroll->Layout();
	fgSizer1->Fit( ProductLogoScroll );
	bSizer171->Add( ProductLogoScroll, 1, wxEXPAND | wxALL, 5 );


	ContentPanelMain->SetSizer( bSizer171 );
	ContentPanelMain->Layout();
	bSizer171->Fit( ContentPanelMain );
	bSizer1->Add( ContentPanelMain, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

MainLobby::~MainLobby()
{
}

Detail::Detail( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	TopBarPanelDetail = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,35 ), wxTAB_TRAVERSAL );
	TopBarPanelDetail->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	TopBarPanelDetail->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	TopBarPanelDetail->SetMinSize( wxSize( -1,35 ) );
	TopBarPanelDetail->SetMaxSize( wxSize( -1,35 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	bSizer2->SetMinSize( wxSize( -1,1 ) );
	HomePage = new wxButton( TopBarPanelDetail, wxID_ANY, _("HomePage"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( HomePage, 0, wxALL, 5 );

	ServiceContact = new wxButton( TopBarPanelDetail, wxID_ANY, _("ServiceContact"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( ServiceContact, 0, wxALL, 5 );

	MyProfile = new wxButton( TopBarPanelDetail, wxID_ANY, _("MyProfile"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyProfile, 0, wxALL, 5 );

	MyCart = new wxButton( TopBarPanelDetail, wxID_ANY, _("MyCart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyCart, 0, wxALL, 5 );

	Space = new wxPanel( TopBarPanelDetail, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( Space, 1, wxEXPAND | wxALL, 5 );

	Enter = new wxTextCtrl( TopBarPanelDetail, wxID_ANY, _("Enter"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( Enter, 0, wxALL, 5 );

	Search = new wxButton( TopBarPanelDetail, wxID_ANY, _("Search"), wxDefaultPosition, wxDefaultSize, 0 );
	Search->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	Search->SetBackgroundColour( wxColour( 255, 255, 0 ) );

	bSizer2->Add( Search, 0, wxALL, 5 );


	TopBarPanelDetail->SetSizer( bSizer2 );
	TopBarPanelDetail->Layout();
	bSizer1->Add( TopBarPanelDetail, 1, wxEXPAND | wxALL, 5 );

	ContentPanelDetail = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer( wxVERTICAL );

	ProductDetailpanel = new wxPanel( ContentPanelDetail, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	ProductDetailpanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );

	wxGridSizer* gSizer21;
	gSizer21 = new wxGridSizer( 1, 2, 0, 0 );

	DetailPicThree = new wxPanel( ProductDetailpanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	DetailPicThree->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );

	DetailPicThreePng = new wxStaticBitmap( DetailPicThree, wxID_ANY, wxBitmap( wxT("pack/3.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( DetailPicThreePng, 0, wxALL|wxEXPAND, 5 );


	DetailPicThree->SetSizer( bSizer20 );
	DetailPicThree->Layout();
	bSizer20->Fit( DetailPicThree );
	gSizer21->Add( DetailPicThree, 1, wxEXPAND | wxALL, 5 );

	DetailContent = new wxPanel( ProductDetailpanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	DetailContent->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	wxGridSizer* gSizer4;
	gSizer4 = new wxGridSizer( 3, 0, 0, 0 );

	Descriptiom = new wxTextCtrl( DetailContent, wxID_ANY, _("Description:"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer4->Add( Descriptiom, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer212;
	bSizer212 = new wxBoxSizer( wxVERTICAL );

	LeftTime = new wxTextCtrl( DetailContent, wxID_ANY, _("LeftTIme:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( LeftTime, 0, wxALL|wxEXPAND, 5 );

	Bid = new wxButton( DetailContent, wxID_ANY, _("bid"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( Bid, 0, wxALL|wxEXPAND, 5 );

	AddInCart = new wxButton( DetailContent, wxID_ANY, _("Add In Cart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( AddInCart, 0, wxALL|wxEXPAND, 5 );

	BuyNow = new wxButton( DetailContent, wxID_ANY, _("Buy Now"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( BuyNow, 0, wxALL|wxEXPAND, 5 );


	gSizer4->Add( bSizer212, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	DetailAbout = new wxTextCtrl( DetailContent, wxID_ANY, _("Detail about"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer4->Add( DetailAbout, 0, wxALL|wxEXPAND, 5 );


	DetailContent->SetSizer( gSizer4 );
	DetailContent->Layout();
	gSizer4->Fit( DetailContent );
	gSizer21->Add( DetailContent, 1, wxEXPAND | wxALL, 5 );


	ProductDetailpanel->SetSizer( gSizer21 );
	ProductDetailpanel->Layout();
	gSizer21->Fit( ProductDetailpanel );
	bSizer171->Add( ProductDetailpanel, 1, wxEXPAND | wxALL, 5 );


	ContentPanelDetail->SetSizer( bSizer171 );
	ContentPanelDetail->Layout();
	bSizer171->Fit( ContentPanelDetail );
	bSizer1->Add( ContentPanelDetail, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

Detail::~Detail()
{
}

Service::Service( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	TopBarPanelService = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,35 ), wxTAB_TRAVERSAL );
	TopBarPanelService->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	TopBarPanelService->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	TopBarPanelService->SetMinSize( wxSize( -1,35 ) );
	TopBarPanelService->SetMaxSize( wxSize( -1,35 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	bSizer2->SetMinSize( wxSize( -1,1 ) );
	HomePage = new wxButton( TopBarPanelService, wxID_ANY, _("HomePage"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( HomePage, 0, wxALL, 5 );

	ServiceContact = new wxButton( TopBarPanelService, wxID_ANY, _("ServiceContact"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( ServiceContact, 0, wxALL, 5 );

	MyProfile = new wxButton( TopBarPanelService, wxID_ANY, _("MyProfile"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyProfile, 0, wxALL, 5 );

	MyCart = new wxButton( TopBarPanelService, wxID_ANY, _("MyCart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyCart, 0, wxALL, 5 );

	Space = new wxPanel( TopBarPanelService, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( Space, 1, wxEXPAND | wxALL, 5 );

	Enter = new wxTextCtrl( TopBarPanelService, wxID_ANY, _("Enter"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( Enter, 0, wxALL, 5 );

	Search = new wxButton( TopBarPanelService, wxID_ANY, _("Search"), wxDefaultPosition, wxDefaultSize, 0 );
	Search->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	Search->SetBackgroundColour( wxColour( 255, 255, 0 ) );

	bSizer2->Add( Search, 0, wxALL, 5 );


	TopBarPanelService->SetSizer( bSizer2 );
	TopBarPanelService->Layout();
	bSizer1->Add( TopBarPanelService, 1, wxEXPAND | wxALL, 5 );

	ContentPanelService = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer( wxVERTICAL );

	ServicePanel = new wxPanel( ContentPanelService, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer71;
	gSizer71 = new wxGridSizer( 1, 0, 0, 0 );

	ServiceContent = new wxScrolledWindow( ServicePanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	ServiceContent->SetScrollRate( 5, 5 );
	ServiceContent->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer( wxVERTICAL );

	Name = new wxTextCtrl( ServiceContent, wxID_ANY, _("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( Name, 0, wxALL|wxEXPAND, 5 );

	Email = new wxTextCtrl( ServiceContent, wxID_ANY, _("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( Email, 0, wxALL|wxEXPAND, 5 );

	PhoneNumber = new wxTextCtrl( ServiceContent, wxID_ANY, _("PhoneNumber:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( PhoneNumber, 0, wxALL|wxEXPAND, 5 );

	Problems = new wxTextCtrl( ServiceContent, wxID_ANY, _("Content:"), wxDefaultPosition, wxSize( -1,225 ), 0 );
	Problems->SetMinSize( wxSize( -1,225 ) );
	Problems->SetMaxSize( wxSize( -1,225 ) );

	bSizer241->Add( Problems, 0, wxALL|wxEXPAND, 5 );

	Send = new wxButton( ServiceContent, wxID_ANY, _("Send"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( Send, 0, wxALIGN_CENTER|wxALL, 5 );

	Thank = new wxStaticText( ServiceContent, wxID_ANY, _("Thanks For Your Sending!"), wxDefaultPosition, wxDefaultSize, 0 );
	Thank->Wrap( -1 );
	bSizer241->Add( Thank, 0, wxALIGN_CENTER|wxALL, 5 );


	ServiceContent->SetSizer( bSizer241 );
	ServiceContent->Layout();
	bSizer241->Fit( ServiceContent );
	gSizer71->Add( ServiceContent, 1, wxEXPAND | wxALL, 5 );


	ServicePanel->SetSizer( gSizer71 );
	ServicePanel->Layout();
	gSizer71->Fit( ServicePanel );
	bSizer171->Add( ServicePanel, 1, wxEXPAND | wxALL, 5 );


	ContentPanelService->SetSizer( bSizer171 );
	ContentPanelService->Layout();
	bSizer171->Fit( ContentPanelService );
	bSizer1->Add( ContentPanelService, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

Service::~Service()
{
}

MyProfile::MyProfile( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	TopBarPanelProfile = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,35 ), wxTAB_TRAVERSAL );
	TopBarPanelProfile->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	TopBarPanelProfile->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	TopBarPanelProfile->SetMinSize( wxSize( -1,35 ) );
	TopBarPanelProfile->SetMaxSize( wxSize( -1,35 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	bSizer2->SetMinSize( wxSize( -1,1 ) );
	HomePage = new wxButton( TopBarPanelProfile, wxID_ANY, _("HomePage"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( HomePage, 0, wxALL, 5 );

	ServiceContact = new wxButton( TopBarPanelProfile, wxID_ANY, _("ServiceContact"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( ServiceContact, 0, wxALL, 5 );

	MyProfile1 = new wxButton( TopBarPanelProfile, wxID_ANY, _("MyProfile"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyProfile1, 0, wxALL, 5 );

	MyCart = new wxButton( TopBarPanelProfile, wxID_ANY, _("MyCart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyCart, 0, wxALL, 5 );

	Space = new wxPanel( TopBarPanelProfile, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( Space, 1, wxEXPAND | wxALL, 5 );

	Enter = new wxTextCtrl( TopBarPanelProfile, wxID_ANY, _("Enter"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( Enter, 0, wxALL, 5 );

	Search = new wxButton( TopBarPanelProfile, wxID_ANY, _("Search"), wxDefaultPosition, wxDefaultSize, 0 );
	Search->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	Search->SetBackgroundColour( wxColour( 255, 255, 0 ) );

	bSizer2->Add( Search, 0, wxALL, 5 );


	TopBarPanelProfile->SetSizer( bSizer2 );
	TopBarPanelProfile->Layout();
	bSizer1->Add( TopBarPanelProfile, 1, wxEXPAND | wxALL, 5 );

	ContentPanelProfile = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer( wxVERTICAL );

	Myprofile = new wxPanel( ContentPanelProfile, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	Myprofile->SetBackgroundColour( wxColour( 168, 196, 192 ) );

	wxGridSizer* gSizer15;
	gSizer15 = new wxGridSizer( 1, 1, 0, 0 );

	ProfileList = new wxPanel( Myprofile, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	ProfileHead = new wxPanel( ProfileList, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer22;
	gSizer22 = new wxGridSizer( 0, 1, 0, 0 );

	HeadButton = new wxButton( ProfileHead, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,75 ), 0 );

	HeadButton->SetBitmap( wxBitmap( wxT("pack/head1.png"), wxBITMAP_TYPE_ANY ) );
	HeadButton->SetMinSize( wxSize( 75,75 ) );
	HeadButton->SetMaxSize( wxSize( 75,75 ) );

	gSizer22->Add( HeadButton, 0, wxALIGN_CENTER|wxALL, 5 );


	ProfileHead->SetSizer( gSizer22 );
	ProfileHead->Layout();
	gSizer22->Fit( ProfileHead );
	bSizer29->Add( ProfileHead, 1, wxEXPAND | wxALL, 5 );

	MyProfileDetail = new wxTextCtrl( ProfileList, wxID_ANY, _("ProfileOfMyself:"), wxDefaultPosition, wxSize( -1,100 ), 0 );
	MyProfileDetail->SetMinSize( wxSize( -1,100 ) );
	MyProfileDetail->SetMaxSize( wxSize( -1,100 ) );

	bSizer29->Add( MyProfileDetail, 0, wxALL|wxEXPAND, 5 );

	MyName = new wxTextCtrl( ProfileList, wxID_ANY, _("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( MyName, 0, wxALL|wxEXPAND, 5 );

	MySex = new wxTextCtrl( ProfileList, wxID_ANY, _("Gender:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( MySex, 0, wxALL|wxEXPAND, 5 );

	MyBirthday = new wxTextCtrl( ProfileList, wxID_ANY, _("Birthday:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( MyBirthday, 0, wxALL|wxEXPAND, 5 );

	MyPhone = new wxTextCtrl( ProfileList, wxID_ANY, _("Phone:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( MyPhone, 0, wxALL|wxEXPAND, 5 );

	ChangePassword = new wxButton( ProfileList, wxID_ANY, _("ChangePassword"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( ChangePassword, 0, wxALIGN_CENTER|wxALL, 5 );

	ChangeLocation = new wxButton( ProfileList, wxID_ANY, _("ChangeLocation"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( ChangeLocation, 0, wxALIGN_CENTER|wxALL, 5 );


	ProfileList->SetSizer( bSizer29 );
	ProfileList->Layout();
	bSizer29->Fit( ProfileList );
	gSizer15->Add( ProfileList, 1, wxEXPAND | wxALL, 5 );


	Myprofile->SetSizer( gSizer15 );
	Myprofile->Layout();
	gSizer15->Fit( Myprofile );
	bSizer171->Add( Myprofile, 1, wxEXPAND | wxALL, 5 );


	ContentPanelProfile->SetSizer( bSizer171 );
	ContentPanelProfile->Layout();
	bSizer171->Fit( ContentPanelProfile );
	bSizer1->Add( ContentPanelProfile, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

MyProfile::~MyProfile()
{
}

Mycart::Mycart( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	TopBarPanelCart = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,35 ), wxTAB_TRAVERSAL );
	TopBarPanelCart->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	TopBarPanelCart->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	TopBarPanelCart->SetMinSize( wxSize( -1,35 ) );
	TopBarPanelCart->SetMaxSize( wxSize( -1,35 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	bSizer2->SetMinSize( wxSize( -1,1 ) );
	HomePage = new wxButton( TopBarPanelCart, wxID_ANY, _("HomePage"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( HomePage, 0, wxALL, 5 );

	ServiceContact = new wxButton( TopBarPanelCart, wxID_ANY, _("ServiceContact"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( ServiceContact, 0, wxALL, 5 );

	MyProfile = new wxButton( TopBarPanelCart, wxID_ANY, _("MyProfile"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyProfile, 0, wxALL, 5 );

	MyCart = new wxButton( TopBarPanelCart, wxID_ANY, _("MyCart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyCart, 0, wxALL, 5 );

	Space = new wxPanel( TopBarPanelCart, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( Space, 1, wxEXPAND | wxALL, 5 );

	Enter = new wxTextCtrl( TopBarPanelCart, wxID_ANY, _("Enter"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( Enter, 0, wxALL, 5 );

	Search = new wxButton( TopBarPanelCart, wxID_ANY, _("Search"), wxDefaultPosition, wxDefaultSize, 0 );
	Search->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	Search->SetBackgroundColour( wxColour( 255, 255, 0 ) );

	bSizer2->Add( Search, 0, wxALL, 5 );


	TopBarPanelCart->SetSizer( bSizer2 );
	TopBarPanelCart->Layout();
	bSizer1->Add( TopBarPanelCart, 1, wxEXPAND | wxALL, 5 );

	ContentPanelCart = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer( wxVERTICAL );

	Cart = new wxPanel( ContentPanelCart, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer16;
	gSizer16 = new wxGridSizer( 0, 1, 0, 0 );

	MyCartScroll = new wxScrolledWindow( Cart, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	MyCartScroll->SetScrollRate( 5, 5 );
	MyCartScroll->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	MyCartText = new wxTextCtrl( MyCartScroll, wxID_ANY, _("MyCart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( MyCartText, 0, wxALL|wxEXPAND, 5 );

	wxArrayString CartCheckListChoices;
	CartCheckList = new wxCheckListBox( MyCartScroll, wxID_ANY, wxDefaultPosition, wxSize( -1,300 ), CartCheckListChoices, 0 );
	CartCheckList->SetMinSize( wxSize( -1,300 ) );
	CartCheckList->SetMaxSize( wxSize( -1,300 ) );

	bSizer31->Add( CartCheckList, 0, wxALL|wxEXPAND, 5 );

	CheckOutButton = new wxButton( MyCartScroll, wxID_ANY, _("CheckOut"), wxDefaultPosition, wxSize( 75,75 ), 0 );
	CheckOutButton->SetMinSize( wxSize( 75,75 ) );
	CheckOutButton->SetMaxSize( wxSize( 75,75 ) );

	bSizer31->Add( CheckOutButton, 0, wxALIGN_CENTER|wxALL, 5 );


	MyCartScroll->SetSizer( bSizer31 );
	MyCartScroll->Layout();
	bSizer31->Fit( MyCartScroll );
	gSizer16->Add( MyCartScroll, 1, wxEXPAND | wxALL, 5 );


	Cart->SetSizer( gSizer16 );
	Cart->Layout();
	gSizer16->Fit( Cart );
	bSizer171->Add( Cart, 1, wxEXPAND | wxALL, 5 );


	ContentPanelCart->SetSizer( bSizer171 );
	ContentPanelCart->Layout();
	bSizer171->Fit( ContentPanelCart );
	bSizer1->Add( ContentPanelCart, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

Mycart::~Mycart()
{
}
