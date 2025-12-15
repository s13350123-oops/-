#include <wx/wx.h>
#include <wx/timer.h>
#include <wx/datetime.h>
#include <random>
#include "MyProjectBase.h"

// ----------------------------------------------------------------------
// I. 輔助函式 (Helper Functions)
// ----------------------------------------------------------------------

// 關閉當前子視窗
void OnClosePage(wxFrame* currentFrame) {
    currentFrame->Close(true);
}

// 提示使用者已經在當前頁面
void OnAlreadyHere(const wxString& pageName) {
    wxMessageBox(wxString::Format(_("您當前已經是【%s】頁面了。"), pageName),
        _("資訊"), wxOK | wxICON_INFORMATION);
}

// ----------------------------------------------------------------------
// II. 定義所有子視窗的自訂類別 (Detail, Service, MyProfile, Mycart)
// ----------------------------------------------------------------------

// ----------------------
// Mycart 頁面專屬邏輯 (必須放在 DetailFrame 前面)
// ----------------------
class MyCartFrame : public Mycart
{
public:
    MyCartFrame(wxWindow* parent) : Mycart(parent)
    {
        HomePage->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        ServiceContact->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        MyProfile->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        MyCart->Bind(wxEVT_BUTTON, [](wxCommandEvent& event) { OnAlreadyHere(_("MyCart")); });

        // 初始化時的範例商品
        AddItemToCart(_("Vintage Camera for US500 (Sample)"));

        // 結帳按鈕事件
        CheckOutButton->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) {
            int selectedCount = 0;
            for (unsigned int i = 0; i < CartCheckList->GetCount(); ++i) {
                if (CartCheckList->IsChecked(i)) {
                    selectedCount++;
                }
            }
            wxMessageBox(wxString::Format(_("您總共選擇了 %d 個商品進行結帳。感謝您的購買！"), selectedCount),
                _("結帳"), wxOK | wxICON_INFORMATION);
            });
    }

    // 公共方法：供 DetailFrame 的 BuyNow 調用，新增商品到購物車清單
    void AddItemToCart(const wxString& itemText)
    {
        CartCheckList->Append(itemText);
    }
};


// ----------------------
// Detail 頁面專屬邏輯
// ----------------------
class DetailFrame : public Detail
{
private:
    wxString m_productTitle; // 儲存產品名稱
public:
    DetailFrame(wxWindow* parent, const wxString& productTitle)
        : Detail(parent), m_productTitle(productTitle)
    {
        // 1. 設定產品描述 (Description Text)
        Descriptiom->SetValue(wxString::Format(_("產品描述:\n\n名稱：%s"), m_productTitle));

        // 2. 設定隨機剩餘時間 (LeftTime)
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib_min(10, 40);
        int minutes = distrib_min(gen);
        std::uniform_int_distribution<> distrib_sec(0, 59);
        int seconds = distrib_sec(gen);

        LeftTime->SetValue(wxString::Format(_("剩餘競標時間:\n%02d 分 %02d 秒"), minutes, seconds));


        // 導航按鈕
        HomePage->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        ServiceContact->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        MyProfile->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        MyCart->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });

        // AddInCart 按鈕：加入購物車提示
        AddInCart->Bind(wxEVT_BUTTON, [](wxCommandEvent& event) {
            wxMessageBox(_("此商品已加入購物車！"), _("購物車"), wxOK | wxICON_INFORMATION);
            });

        // Bid 按鈕功能
        Bid->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) {
            wxMessageBox(wxString::Format(_("您已成功競標！\n【%s】\n您現在是最高出價者！"), m_productTitle),
                _("競標成功"), wxOK | wxICON_INFORMATION);
            });

        // BuyNow 按鈕功能 (連接到 MyCart)
        BuyNow->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) {
            OnClosePage(this);
            MyCartFrame* cartFrame = new MyCartFrame(this->GetParent());
            cartFrame->Show(true);
            cartFrame->AddItemToCart(m_productTitle + _(" (快速購買)"));
            });
    }
};

// ----------------------
// Service 頁面專屬邏輯
// ----------------------
class ServiceFrame : public Service
{
public:
    ServiceFrame(wxWindow* parent) : Service(parent)
    {
        HomePage->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        ServiceContact->Bind(wxEVT_BUTTON, [](wxCommandEvent& event) { OnAlreadyHere(_("ServiceContact")); });
        MyProfile->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        MyCart->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
    }
};

// ----------------------
// MyProfile 頁面專屬邏輯 【⭐ 這裡開始修改 ⭐】
// ----------------------
class MyProfileFrame : public MyProfile
{
public:
    MyProfileFrame(wxWindow* parent) : MyProfile(parent)
    {
        // 導航按鈕
        HomePage->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        ServiceContact->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });
        MyProfile1->Bind(wxEVT_BUTTON, [](wxCommandEvent& event) { OnAlreadyHere(_("MyProfile")); });
        MyCart->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OnClosePage(this); });

        // 【⭐ 1. 初始化個人資訊 ⭐】
        MyProfileDetail->SetValue(_("個人簡介：專注於收藏 Paillard 相關的復古攝影器材與服飾。"));
        MyName->SetValue(_("姓名：王小明 (Ming Wang)"));
        MySex->SetValue(_("性別：男性"));
        MyBirthday->SetValue(_("生日：1990/01/01"));
        MyPhone->SetValue(_("電話：+886 987-654-321"));

        // 【⭐ 2. ChangePassword 按鈕功能 ⭐】
        ChangePassword->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) {
            wxMessageBox(_("此功能將會引導您進入密碼更改流程，請輸入新密碼。"),
                _("更改密碼"), wxOK | wxICON_INFORMATION);
            });

        // 【⭐ 3. ChangeLocation 按鈕功能 ⭐】
        ChangeLocation->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) {
            wxMessageBox(_("此功能將會引導您進入地址更改流程，請輸入新的收件地址。"),
                _("更改地址"), wxOK | wxICON_INFORMATION);
            });
    }
};


// 泛型函數：用於創建並顯示新的 wxFrame 子視窗 
template<typename T>
void OpenNewFrame(wxWindow* parent)
{
    // MyCartFrame, ServiceFrame, MyProfileFrame 都使用這個泛型
    T* newFrame = new T(parent);
    newFrame->Show(true);
}


// ----------------------------------------------------------------------
// III. 定義自訂的主視窗類別 (MainFrame)
// ----------------------------------------------------------------------
class MainFrame : public MainLobby
{
private:
    // 獲取產品名稱的輔助函式
    wxString GetProductTitle(int index) {
        // 從 wxTextCtrl 獲取產品名稱
        switch (index) {
        case 1: return ProductOneText->GetValue();
        case 2: return ProductTwoText->GetValue();
        case 3: return ProductThreeText->GetValue();
        case 4: return ProductFourText->GetValue();
        case 5: return ProductFiveText->GetValue();
        case 6: return ProductSixText->GetValue();
        default: return _("未知產品");
        }
    }

    // 處理開啟 Detail 頁面並傳遞標題的函式
    void OpenDetail(int productIndex) {
        wxString title = GetProductTitle(productIndex);
        DetailFrame* newFrame = new DetailFrame(this, title);
        newFrame->Show(true);
    }

public:
    MainFrame(wxWindow* parent) : MainLobby(parent)
    {
        // ... (導航按鈕綁定) ...
        HomePage->Bind(wxEVT_BUTTON, [](wxCommandEvent& event) { OnAlreadyHere(_("首頁 (HomePage)")); });
        ServiceContact->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenNewFrame<ServiceFrame>(this); });
        MyProfile->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenNewFrame<MyProfileFrame>(this); });
        MyCart->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenNewFrame<MyCartFrame>(this); });
        LOGO->Bind(wxEVT_BUTTON, [](wxCommandEvent& event) { OnAlreadyHere(_("LOGO (首頁按鈕)")); });

        // 產品按鈕打開 Detail 頁面並傳遞標題
        ProductOnePng->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenDetail(1); });
        ProductTwoPng->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenDetail(2); });
        ProductThreePng->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenDetail(3); });
        ProductFourPng->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenDetail(4); });
        ProductFivePng->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenDetail(5); });
        ProductSixPng->Bind(wxEVT_BUTTON, [this](wxCommandEvent& event) { OpenDetail(6); });

        // 產品 Like 按鈕顯示「已加入最愛清單」
        auto likeHandler = [](wxCommandEvent& event) {
            wxMessageBox(_("已加入您的最愛清單 (Like)！"), _("最愛清單"), wxOK | wxICON_INFORMATION);
            };

        ProductOneLike->Bind(wxEVT_BUTTON, likeHandler);
        ProductTwoLike->Bind(wxEVT_BUTTON, likeHandler);
        ProductThreeLike->Bind(wxEVT_BUTTON, likeHandler);
        ProductFourLike->Bind(wxEVT_BUTTON, likeHandler);
        ProductFiveLike->Bind(wxEVT_BUTTON, likeHandler);
        ProductSixLike->Bind(wxEVT_BUTTON, likeHandler);
    }
};


// ----------------------------------------------------------------------
// IV. 應用程式類別 (MyApp)
// ----------------------------------------------------------------------
class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        wxInitAllImageHandlers();
        MainFrame* frame = new MainFrame(nullptr);
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);