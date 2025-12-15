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
#include <wx/statbmp.h>
#include <wx/scrolwin.h>
#include <wx/stattext.h>
#include <wx/checklst.h>
#include <wx/frame.h>
#include <wx/event.h> 

class MyFrame1 : public wxFrame
{
protected:
	// 介面元件宣告
	wxPanel* TopBarPanel;
	wxButton* HomePage;
	wxButton* ServiceButton;
	wxButton* MyProfile;
	wxButton* m_button21;
	wxTextCtrl* m_textCtrl10;
	wxButton* m_button13;

	wxPanel* ContentPanel;

	wxPanel* LOGOpanel;
	wxButton* STORE1;
	wxTextCtrl* m_textCtrl40;
	wxTextCtrl* m_textCtrl401;

	wxScrolledWindow* ProductScroll;
	// 為了簡化，這裡只列出關鍵變數，實際上你在 cpp 用到的都會被編譯
	wxPanel* m_panel15; wxPanel* m_panel30; wxStaticBitmap* m_bitmap1; wxButton* m_button20; wxTextCtrl* m_textCtrl32;
	wxPanel* m_panel14; wxPanel* m_panel31; wxStaticBitmap* m_bitmap2; wxButton* m_button19; wxTextCtrl* m_textCtrl31;

	wxPanel* ProductDetailpanel;
	wxPanel* Service;
	wxScrolledWindow* m_scrolledWindow2;
	wxTextCtrl* Name; wxTextCtrl* Email; wxTextCtrl* PhoneNumber; wxTextCtrl* Problems;
	wxButton* Send; wxStaticText* m_staticText1;

	wxPanel* Myprofile;
	wxTextCtrl* m_textCtrl36;

	wxPanel* Cart;
	wxTextCtrl* m_textCtrl3823; wxCheckListBox* m_checkList1; wxButton* m_button211;

	// 虛擬事件 (讓子類別可以覆寫)
	virtual void OnHomeClick(wxCommandEvent& event) { ShowHomePage(); }
	virtual void OnServiceClick(wxCommandEvent& event) { HideAll(); Service->Show(); ContentPanel->Layout(); }
	virtual void OnProfileClick(wxCommandEvent& event) { HideAll(); Myprofile->Show(); ContentPanel->Layout(); }
	virtual void OnCartClick(wxCommandEvent& event) { HideAll(); Cart->Show(); ContentPanel->Layout(); }

public:
	MyFrame1(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Online Store"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(900, 700), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~MyFrame1();

	// 輔助函式：切換頁面用
	void HideAll();
	void ShowHomePage();
};