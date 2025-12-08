///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MyProjectBase.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	TopBarPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,35 ), wxTAB_TRAVERSAL );
	TopBarPanel->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	TopBarPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );
	TopBarPanel->SetMinSize( wxSize( -1,35 ) );
	TopBarPanel->SetMaxSize( wxSize( -1,35 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	bSizer2->SetMinSize( wxSize( -1,1 ) );
	HomePage = new wxButton( TopBarPanel, wxID_ANY, _("HomePage"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( HomePage, 0, wxALL, 5 );

	ServiceButton = new wxButton( TopBarPanel, wxID_ANY, _("ServiceButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( ServiceButton, 0, wxALL, 5 );

	MyProfile = new wxButton( TopBarPanel, wxID_ANY, _("MyProfile"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( MyProfile, 0, wxALL, 5 );

	m_button21 = new wxButton( TopBarPanel, wxID_ANY, _("MyCart❤"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button21, 0, wxALL, 5 );

	m_panel22 = new wxPanel( TopBarPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer2->Add( m_panel22, 1, wxEXPAND | wxALL, 5 );

	m_textCtrl10 = new wxTextCtrl( TopBarPanel, wxID_ANY, _("輸入..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl10, 0, wxALIGN_RIGHT|wxALL, 5 );

	m_button13 = new wxButton( TopBarPanel, wxID_ANY, _("Search🔍"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button13->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	m_button13->SetBackgroundColour( wxColour( 255, 255, 0 ) );

	bSizer2->Add( m_button13, 0, wxALIGN_RIGHT|wxALL, 5 );


	TopBarPanel->SetSizer( bSizer2 );
	TopBarPanel->Layout();
	bSizer1->Add( TopBarPanel, 1, wxEXPAND | wxALL, 5 );

	ContentPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer( wxVERTICAL );

	LOGOpanel = new wxPanel( ContentPanel, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	LOGOpanel->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	LOGOpanel->SetBackgroundColour( wxColour( 39, 163, 153 ) );
	LOGOpanel->Hide();

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	bSizer21->SetMinSize( wxSize( 100,100 ) );
	STORE1 = new wxButton( LOGOpanel, wxID_ANY, _("STORE"), wxDefaultPosition, wxSize( 180,100 ), 0 );

	STORE1->SetBitmap( wxBitmap( wxT("pack/pic1.png"), wxBITMAP_TYPE_ANY ) );
	STORE1->SetBitmapPressed( wxBitmap( wxT("pack/pic2.png"), wxBITMAP_TYPE_ANY ) );
	STORE1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	STORE1->SetBackgroundColour( wxColour( 128, 128, 192 ) );

	bSizer21->Add( STORE1, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 2, 1, 0, 0 );

	m_textCtrl40 = new wxTextCtrl( LOGOpanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_textCtrl40, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl401 = new wxTextCtrl( LOGOpanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_textCtrl401, 0, wxALL|wxEXPAND, 5 );


	bSizer21->Add( gSizer2, 1, wxEXPAND, 5 );


	LOGOpanel->SetSizer( bSizer21 );
	LOGOpanel->Layout();
	bSizer21->Fit( LOGOpanel );
	bSizer171->Add( LOGOpanel, 1, wxEXPAND | wxALL, 5 );

	ProductScroll = new wxScrolledWindow( ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	ProductScroll->SetScrollRate( 5, 5 );
	ProductScroll->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	ProductScroll->SetBackgroundColour( wxColour( 139, 177, 220 ) );
	ProductScroll->Hide();

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 3, 1, 1 );
	fgSizer1->AddGrowableCol( 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->AddGrowableCol( 2 );
	fgSizer1->AddGrowableRow( 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	m_panel15 = new wxPanel( ProductScroll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	m_panel15->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	m_panel15->SetMinSize( wxSize( 200,250 ) );
	m_panel15->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_panel30 = new wxPanel( m_panel15, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );

	m_bitmap8 = new wxStaticBitmap( m_panel30, wxID_ANY, wxBitmap( wxT("pack/1.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 200,250 ), 0 );
	m_bitmap8->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_bitmap8->SetMinSize( wxSize( 200,250 ) );
	m_bitmap8->SetMaxSize( wxSize( 200,250 ) );

	bSizer22->Add( m_bitmap8, 0, wxALIGN_CENTER|wxALL|wxEXPAND|wxFIXED_MINSIZE, 5 );


	m_panel30->SetSizer( bSizer22 );
	m_panel30->Layout();
	bSizer22->Fit( m_panel30 );
	bSizer7->Add( m_panel30, 1, wxEXPAND | wxALL, 5 );

	m_button20 = new wxButton( m_panel15, wxID_ANY, _("❤"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_button20, 0, wxALL, 5 );

	m_textCtrl32 = new wxTextCtrl( m_panel15, wxID_ANY, _("Vintage Camera for US500"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl32, 0, wxALL|wxEXPAND, 5 );


	m_panel15->SetSizer( bSizer7 );
	m_panel15->Layout();
	fgSizer1->Add( m_panel15, 0, wxALL|wxEXPAND, 5 );

	m_panel14 = new wxPanel( ProductScroll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	m_panel14->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	m_panel14->SetMinSize( wxSize( 200,250 ) );
	m_panel14->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_panel31 = new wxPanel( m_panel14, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );

	m_bitmap81 = new wxStaticBitmap( m_panel31, wxID_ANY, wxBitmap( wxT("pack/2.jfif"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 200,250 ), 0 );
	m_bitmap81->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_bitmap81->SetMinSize( wxSize( 200,250 ) );
	m_bitmap81->SetMaxSize( wxSize( 200,250 ) );

	bSizer23->Add( m_bitmap81, 0, wxALL, 5 );


	m_panel31->SetSizer( bSizer23 );
	m_panel31->Layout();
	bSizer23->Fit( m_panel31 );
	bSizer6->Add( m_panel31, 1, wxEXPAND | wxALL, 5 );

	m_button19 = new wxButton( m_panel14, wxID_ANY, _("❤"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_button19, 0, wxALL, 5 );

	m_textCtrl31 = new wxTextCtrl( m_panel14, wxID_ANY, _("Prime Lens loamow $234"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_textCtrl31, 0, wxALL|wxEXPAND, 5 );


	m_panel14->SetSizer( bSizer6 );
	m_panel14->Layout();
	fgSizer1->Add( m_panel14, 0, wxALL|wxEXPAND, 5 );

	m_panel19 = new wxPanel( ProductScroll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	m_panel19->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	m_panel19->SetMinSize( wxSize( 200,250 ) );
	m_panel19->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_panel32 = new wxPanel( m_panel19, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );

	m_bitmap82 = new wxStaticBitmap( m_panel32, wxID_ANY, wxBitmap( wxT("pack/3.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 200,250 ), 0 );
	m_bitmap82->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_bitmap82->SetMinSize( wxSize( 200,250 ) );
	m_bitmap82->SetMaxSize( wxSize( 200,250 ) );

	bSizer24->Add( m_bitmap82, 0, wxALL, 5 );


	m_panel32->SetSizer( bSizer24 );
	m_panel32->Layout();
	bSizer24->Fit( m_panel32 );
	bSizer8->Add( m_panel32, 1, wxEXPAND | wxALL, 5 );

	m_button18 = new wxButton( m_panel19, wxID_ANY, _("❤"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_button18, 0, wxALL, 5 );

	m_textCtrl30 = new wxTextCtrl( m_panel19, wxID_ANY, _("Knitwear for Kid $93"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_textCtrl30, 0, wxALL|wxEXPAND, 5 );


	m_panel19->SetSizer( bSizer8 );
	m_panel19->Layout();
	fgSizer1->Add( m_panel19, 0, wxEXPAND | wxALL, 5 );

	m_panel16 = new wxPanel( ProductScroll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	m_panel16->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	m_panel16->SetMinSize( wxSize( 200,250 ) );
	m_panel16->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	m_panel33 = new wxPanel( m_panel16, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );

	m_bitmap83 = new wxStaticBitmap( m_panel33, wxID_ANY, wxBitmap( wxT("pack/4.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 200,250 ), 0 );
	m_bitmap83->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_bitmap83->SetMinSize( wxSize( 200,250 ) );
	m_bitmap83->SetMaxSize( wxSize( 200,250 ) );

	bSizer25->Add( m_bitmap83, 0, wxALL, 5 );


	m_panel33->SetSizer( bSizer25 );
	m_panel33->Layout();
	bSizer25->Fit( m_panel33 );
	bSizer9->Add( m_panel33, 1, wxEXPAND | wxALL, 5 );

	m_button17 = new wxButton( m_panel16, wxID_ANY, _("❤"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button17, 0, wxALL, 5 );

	m_textCtrl29 = new wxTextCtrl( m_panel16, wxID_ANY, _("Vintage Jacket $183"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrl29, 0, wxALL|wxEXPAND, 5 );


	m_panel16->SetSizer( bSizer9 );
	m_panel16->Layout();
	fgSizer1->Add( m_panel16, 0, wxEXPAND | wxALL, 5 );

	m_panel17 = new wxPanel( ProductScroll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	m_panel17->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	m_panel17->SetMinSize( wxSize( 200,250 ) );
	m_panel17->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	m_panel29 = new wxPanel( m_panel17, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer211;
	bSizer211 = new wxBoxSizer( wxVERTICAL );

	m_bitmap84 = new wxStaticBitmap( m_panel29, wxID_ANY, wxBitmap( wxT("pack/5.jfif"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 200,250 ), 0 );
	m_bitmap84->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_bitmap84->SetMinSize( wxSize( 200,250 ) );
	m_bitmap84->SetMaxSize( wxSize( 200,250 ) );

	bSizer211->Add( m_bitmap84, 0, wxALL, 5 );


	m_panel29->SetSizer( bSizer211 );
	m_panel29->Layout();
	bSizer211->Fit( m_panel29 );
	bSizer10->Add( m_panel29, 1, wxEXPAND | wxALL, 5 );

	m_button16 = new wxButton( m_panel17, wxID_ANY, _("❤"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button16, 0, wxALL, 5 );

	m_textCtrl28 = new wxTextCtrl( m_panel17, wxID_ANY, _("Kern Switar Lens condition brand new! $932"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_textCtrl28, 0, wxALL|wxEXPAND, 5 );


	m_panel17->SetSizer( bSizer10 );
	m_panel17->Layout();
	fgSizer1->Add( m_panel17, 0, wxEXPAND | wxALL, 5 );

	m_panel18 = new wxPanel( ProductScroll, wxID_ANY, wxDefaultPosition, wxSize( 200,250 ), wxTAB_TRAVERSAL );
	m_panel18->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );
	m_panel18->SetMinSize( wxSize( 200,250 ) );
	m_panel18->SetMaxSize( wxSize( 200,250 ) );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	m_panel25 = new wxPanel( m_panel18, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	m_bitmap85 = new wxStaticBitmap( m_panel25, wxID_ANY, wxBitmap( wxT("pack/6.jfif"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 200,250 ), 0 );
	m_bitmap85->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_bitmap85->SetMinSize( wxSize( 200,250 ) );
	m_bitmap85->SetMaxSize( wxSize( 200,250 ) );

	bSizer17->Add( m_bitmap85, 0, wxALL, 5 );


	m_panel25->SetSizer( bSizer17 );
	m_panel25->Layout();
	bSizer17->Fit( m_panel25 );
	bSizer11->Add( m_panel25, 1, wxALL|wxBOTTOM|wxEXPAND, 5 );

	m_button15 = new wxButton( m_panel18, wxID_ANY, _("❤"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_button15, 0, wxALL, 5 );

	m_textCtrl27 = new wxTextCtrl( m_panel18, wxID_ANY, _("【Mint++】Hlitos Pizar Lens $754"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_textCtrl27, 0, wxALL|wxEXPAND, 5 );


	m_panel18->SetSizer( bSizer11 );
	m_panel18->Layout();
	fgSizer1->Add( m_panel18, 0, wxEXPAND | wxALL, 5 );


	ProductScroll->SetSizer( fgSizer1 );
	ProductScroll->Layout();
	fgSizer1->Fit( ProductScroll );
	bSizer171->Add( ProductScroll, 1, wxEXPAND | wxALL, 5 );

	ProductDetailpanel = new wxPanel( ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	ProductDetailpanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );

	wxGridSizer* gSizer21;
	gSizer21 = new wxGridSizer( 1, 2, 0, 0 );

	m_panel191 = new wxPanel( ProductDetailpanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel191->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );

	m_bitmap21 = new wxStaticBitmap( m_panel191, wxID_ANY, wxBitmap( wxT("pack/3.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_bitmap21, 0, wxALL, 5 );


	m_panel191->SetSizer( bSizer20 );
	m_panel191->Layout();
	bSizer20->Fit( m_panel191 );
	gSizer21->Add( m_panel191, 1, wxEXPAND | wxALL, 5 );

	m_panel20 = new wxPanel( ProductDetailpanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel20->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	wxGridSizer* gSizer4;
	gSizer4 = new wxGridSizer( 3, 0, 0, 0 );

	Descriptiom = new wxTextCtrl( m_panel20, wxID_ANY, _("Description:"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer4->Add( Descriptiom, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer212;
	bSizer212 = new wxBoxSizer( wxVERTICAL );

	LeftTime = new wxTextCtrl( m_panel20, wxID_ANY, _("LeftTIme:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( LeftTime, 0, wxALL|wxEXPAND, 5 );

	m_button28 = new wxButton( m_panel20, wxID_ANY, _("bid"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( m_button28, 0, wxALL|wxEXPAND, 5 );

	m_button151 = new wxButton( m_panel20, wxID_ANY, _("Add In Cart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( m_button151, 0, wxALL|wxEXPAND, 5 );

	m_button161 = new wxButton( m_panel20, wxID_ANY, _("Buy Now"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( m_button161, 0, wxALL|wxEXPAND, 5 );


	gSizer4->Add( bSizer212, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	Detailabout = new wxTextCtrl( m_panel20, wxID_ANY, _("Detail about"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer4->Add( Detailabout, 0, wxALL|wxEXPAND, 5 );


	m_panel20->SetSizer( gSizer4 );
	m_panel20->Layout();
	gSizer4->Fit( m_panel20 );
	gSizer21->Add( m_panel20, 1, wxEXPAND | wxALL, 5 );


	ProductDetailpanel->SetSizer( gSizer21 );
	ProductDetailpanel->Layout();
	gSizer21->Fit( ProductDetailpanel );
	bSizer171->Add( ProductDetailpanel, 1, wxEXPAND | wxALL, 5 );

	Service = new wxPanel( ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer71;
	gSizer71 = new wxGridSizer( 1, 0, 0, 0 );

	m_scrolledWindow2 = new wxScrolledWindow( Service, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow2->SetScrollRate( 5, 5 );
	m_scrolledWindow2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer( wxVERTICAL );

	Name = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, _("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( Name, 0, wxALL|wxEXPAND, 5 );

	Email = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, _("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( Email, 0, wxALL|wxEXPAND, 5 );

	PhoneNumber = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, _("PhoneNumber:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( PhoneNumber, 0, wxALL|wxEXPAND, 5 );

	Problems = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, _("Content:"), wxDefaultPosition, wxSize( -1,225 ), 0 );
	Problems->SetMinSize( wxSize( -1,225 ) );
	Problems->SetMaxSize( wxSize( -1,225 ) );

	bSizer241->Add( Problems, 0, wxALL|wxEXPAND, 5 );

	Send = new wxButton( m_scrolledWindow2, wxID_ANY, _("Send"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer241->Add( Send, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText1 = new wxStaticText( m_scrolledWindow2, wxID_ANY, _("Thanks For Your Sending!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer241->Add( m_staticText1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	m_scrolledWindow2->SetSizer( bSizer241 );
	m_scrolledWindow2->Layout();
	bSizer241->Fit( m_scrolledWindow2 );
	gSizer71->Add( m_scrolledWindow2, 1, wxEXPAND | wxALL, 5 );


	Service->SetSizer( gSizer71 );
	Service->Layout();
	gSizer71->Fit( Service );
	bSizer171->Add( Service, 1, wxEXPAND | wxALL, 5 );

	Myprofile = new wxPanel( ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	Myprofile->SetBackgroundColour( wxColour( 168, 196, 192 ) );

	wxGridSizer* gSizer15;
	gSizer15 = new wxGridSizer( 1, 1, 0, 0 );

	m_panel321 = new wxPanel( Myprofile, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	m_panel36 = new wxPanel( m_panel321, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer22;
	gSizer22 = new wxGridSizer( 0, 1, 0, 0 );

	m_button212 = new wxButton( m_panel36, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,75 ), 0 );

	m_button212->SetBitmap( wxBitmap( wxT("pack/head1.png"), wxBITMAP_TYPE_ANY ) );
	m_button212->SetMinSize( wxSize( 75,75 ) );
	m_button212->SetMaxSize( wxSize( 75,75 ) );

	gSizer22->Add( m_button212, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	m_panel36->SetSizer( gSizer22 );
	m_panel36->Layout();
	gSizer22->Fit( m_panel36 );
	bSizer29->Add( m_panel36, 1, wxEXPAND | wxALL, 5 );

	m_textCtrl36 = new wxTextCtrl( m_panel321, wxID_ANY, _("個人檔案:sodfjalghk.ahf"), wxDefaultPosition, wxSize( -1,100 ), 0 );
	m_textCtrl36->SetMinSize( wxSize( -1,100 ) );
	m_textCtrl36->SetMaxSize( wxSize( -1,100 ) );

	bSizer29->Add( m_textCtrl36, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl90 = new wxTextCtrl( m_panel321, wxID_ANY, _("名稱:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( m_textCtrl90, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_textCtrl87 = new wxTextCtrl( m_panel321, wxID_ANY, _("性別:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( m_textCtrl87, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_textCtrl88 = new wxTextCtrl( m_panel321, wxID_ANY, _("生日:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( m_textCtrl88, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_textCtrl89 = new wxTextCtrl( m_panel321, wxID_ANY, _("電話:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( m_textCtrl89, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_button22 = new wxButton( m_panel321, wxID_ANY, _("更改密碼"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( m_button22, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_button23 = new wxButton( m_panel321, wxID_ANY, _("更改地址"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( m_button23, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	m_panel321->SetSizer( bSizer29 );
	m_panel321->Layout();
	bSizer29->Fit( m_panel321 );
	gSizer15->Add( m_panel321, 1, wxEXPAND | wxALL, 5 );


	Myprofile->SetSizer( gSizer15 );
	Myprofile->Layout();
	gSizer15->Fit( Myprofile );
	bSizer171->Add( Myprofile, 1, wxEXPAND | wxALL, 5 );

	Cart = new wxPanel( ContentPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	Cart->Hide();

	wxGridSizer* gSizer16;
	gSizer16 = new wxGridSizer( 0, 1, 0, 0 );

	m_scrolledWindow3 = new wxScrolledWindow( Cart, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow3->SetScrollRate( 5, 5 );
	m_scrolledWindow3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl3823 = new wxTextCtrl( m_scrolledWindow3, wxID_ANY, _("MyCart"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_textCtrl3823, 0, wxALL|wxEXPAND, 5 );

	wxArrayString m_checkList1Choices;
	m_checkList1 = new wxCheckListBox( m_scrolledWindow3, wxID_ANY, wxDefaultPosition, wxSize( -1,300 ), m_checkList1Choices, 0 );
	m_checkList1->SetMinSize( wxSize( -1,300 ) );
	m_checkList1->SetMaxSize( wxSize( -1,300 ) );

	bSizer31->Add( m_checkList1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_button211 = new wxButton( m_scrolledWindow3, wxID_ANY, _("Buy Now"), wxDefaultPosition, wxSize( 75,75 ), 0 );
	m_button211->SetMinSize( wxSize( 75,75 ) );
	m_button211->SetMaxSize( wxSize( 75,75 ) );

	bSizer31->Add( m_button211, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	m_scrolledWindow3->SetSizer( bSizer31 );
	m_scrolledWindow3->Layout();
	bSizer31->Fit( m_scrolledWindow3 );
	gSizer16->Add( m_scrolledWindow3, 1, wxEXPAND | wxALL, 5 );


	Cart->SetSizer( gSizer16 );
	Cart->Layout();
	gSizer16->Fit( Cart );
	bSizer171->Add( Cart, 1, wxEXPAND | wxALL, 5 );


	ContentPanel->SetSizer( bSizer171 );
	ContentPanel->Layout();
	bSizer171->Fit( ContentPanel );
	bSizer1->Add( ContentPanel, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

MyFrame1::~MyFrame1()
{
}
