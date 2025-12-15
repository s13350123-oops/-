#include <wx/wx.h>
#include "Project1.h"

// 繼承 MyFrame1 來實作邏輯
class MyOnlineStore : public MyFrame1
{
public:
    MyOnlineStore() : MyFrame1(nullptr)
    {
        // 綁定按鈕事件
        HomePage->Bind(wxEVT_BUTTON, &MyOnlineStore::OnHomeClick, this);
        ServiceButton->Bind(wxEVT_BUTTON, &MyOnlineStore::OnServiceClick, this);
        MyProfile->Bind(wxEVT_BUTTON, &MyOnlineStore::OnProfileClick, this);
        m_button21->Bind(wxEVT_BUTTON, &MyOnlineStore::OnCartClick, this);

        // 啟動時先顯示首頁
        ShowHomePage();
    }

    void OnHomeClick(wxCommandEvent& event) {
        ShowHomePage();
    }

    void OnServiceClick(wxCommandEvent& event) {
        HideAll();
        Service->Show();
        ContentPanel->Layout(); // 重新排版
    }

    void OnProfileClick(wxCommandEvent& event) {
        HideAll();
        Myprofile->Show();
        ContentPanel->Layout();
    }

    void OnCartClick(wxCommandEvent& event) {
        HideAll();
        Cart->Show();
        ContentPanel->Layout();
    }

private:
    void HideAll() {
        LOGOpanel->Hide();
        ProductScroll->Hide();
        Service->Hide();
        Myprofile->Hide();
        Cart->Hide();
    }

    void ShowHomePage() {
        HideAll();
        LOGOpanel->Show();
        ProductScroll->Show();
        ContentPanel->Layout();
    }
};

// 程式入口點
class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        MyOnlineStore* frame = new MyOnlineStore();
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);