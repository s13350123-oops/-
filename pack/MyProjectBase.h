///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/scrolwin.h>
#include <wx/frame.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/checklst.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MainLobby
///////////////////////////////////////////////////////////////////////////////
class MainLobby : public wxFrame
{
	private:

	protected:
		wxPanel* TopBarPanelMain;
		wxButton* HomePage;
		wxButton* ServiceContact;
		wxButton* MyProfile;
		wxButton* MyCart;
		wxPanel* Space;
		wxTextCtrl* Enter;
		wxButton* Search;
		wxPanel* ContentPanelMain;
		wxScrolledWindow* ProductLogoScroll;
		wxPanel* LOGOpanel;
		wxButton* LOGO;
		wxTextCtrl* UpText;
		wxTextCtrl* DownText;
		wxPanel* ProductAll;
		wxPanel* ProductOne;
		wxPanel* ProductPicOne;
		wxButton* ProductOnePng;
		wxButton* ProductOneLike;
		wxTextCtrl* ProductOneText;
		wxPanel* ProductTwo;
		wxPanel* ProductTwoPic;
		wxButton* ProductTwoPng;
		wxButton* ProductTwoLike;
		wxTextCtrl* ProductTwoText;
		wxPanel* ProductThree;
		wxPanel* ProductThreePic;
		wxButton* ProductThreePng;
		wxButton* ProductThreeLike;
		wxTextCtrl* ProductThreeText;
		wxPanel* ProductFour;
		wxPanel* ProductFourPic;
		wxButton* ProductFourPng;
		wxButton* ProductFourLike;
		wxTextCtrl* ProductFourText;
		wxPanel* ProductFive;
		wxPanel* ProductFivePic;
		wxButton* ProductFivePng;
		wxButton* ProductFiveLike;
		wxTextCtrl* ProductFiveText;
		wxPanel* ProductSix;
		wxPanel* ProductSixPic;
		wxButton* ProductSixPng;
		wxButton* ProductSixLike;
		wxTextCtrl* ProductSixText;

	public:

		MainLobby( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 692,502 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainLobby();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Detail
///////////////////////////////////////////////////////////////////////////////
class Detail : public wxFrame
{
	private:

	protected:
		wxPanel* TopBarPanelDetail;
		wxButton* HomePage;
		wxButton* ServiceContact;
		wxButton* MyProfile;
		wxButton* MyCart;
		wxPanel* Space;
		wxTextCtrl* Enter;
		wxButton* Search;
		wxPanel* ContentPanelDetail;
		wxPanel* ProductDetailpanel;
		wxPanel* DetailPicThree;
		wxStaticBitmap* DetailPicThreePng;
		wxPanel* DetailContent;
		wxTextCtrl* Descriptiom;
		wxTextCtrl* LeftTime;
		wxButton* Bid;
		wxButton* AddInCart;
		wxButton* BuyNow;
		wxTextCtrl* DetailAbout;

	public:

		Detail( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 588,471 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Detail();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Service
///////////////////////////////////////////////////////////////////////////////
class Service : public wxFrame
{
	private:

	protected:
		wxPanel* TopBarPanelService;
		wxButton* HomePage;
		wxButton* ServiceContact;
		wxButton* MyProfile;
		wxButton* MyCart;
		wxPanel* Space;
		wxTextCtrl* Enter;
		wxButton* Search;
		wxPanel* ContentPanelService;
		wxPanel* ServicePanel;
		wxScrolledWindow* ServiceContent;
		wxTextCtrl* Name;
		wxTextCtrl* Email;
		wxTextCtrl* PhoneNumber;
		wxTextCtrl* Problems;
		wxButton* Send;
		wxStaticText* Thank;

	public:

		Service( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 509,409 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Service();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyProfile
///////////////////////////////////////////////////////////////////////////////
class MyProfile : public wxFrame
{
	private:

	protected:
		wxPanel* TopBarPanelProfile;
		wxButton* HomePage;
		wxButton* ServiceContact;
		wxButton* MyProfile1;
		wxButton* MyCart;
		wxPanel* Space;
		wxTextCtrl* Enter;
		wxButton* Search;
		wxPanel* ContentPanelProfile;
		wxPanel* Myprofile;
		wxPanel* ProfileList;
		wxPanel* ProfileHead;
		wxButton* HeadButton;
		wxTextCtrl* MyProfileDetail;
		wxTextCtrl* MyName;
		wxTextCtrl* MySex;
		wxTextCtrl* MyBirthday;
		wxTextCtrl* MyPhone;
		wxButton* ChangePassword;
		wxButton* ChangeLocation;

	public:

		MyProfile( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,478 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyProfile();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Mycart
///////////////////////////////////////////////////////////////////////////////
class Mycart : public wxFrame
{
	private:

	protected:
		wxPanel* TopBarPanelCart;
		wxButton* HomePage;
		wxButton* ServiceContact;
		wxButton* MyProfile;
		wxButton* MyCart;
		wxPanel* Space;
		wxTextCtrl* Enter;
		wxButton* Search;
		wxPanel* ContentPanelCart;
		wxPanel* Cart;
		wxScrolledWindow* MyCartScroll;
		wxTextCtrl* MyCartText;
		wxCheckListBox* CartCheckList;
		wxButton* CheckOutButton;

	public:

		Mycart( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Mycart();

};

