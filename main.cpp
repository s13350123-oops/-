#include <wx/wx.h>
#include "project1_custom.h"

class MyApp : public wxApp
{
public:
    virtual bool OnInit() override
    {
        MyFrame1Ex* frame = new MyFrame1Ex(nullptr);
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
