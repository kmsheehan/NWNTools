// -*- C++ -*- generated by wxGlade 0.2.3 on Tue Aug 12 16:48:40 2003

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/treectrl.h>

#include "wxNwnTreasure.h"

//#include "open.xpm"


MainFrame::MainFrame(wxWindow* parent, int id, const char* title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: MainFrame::MainFrame
    menubar = new wxMenuBar();
    SetMenuBar(menubar);
    wxMenu* wxglade_tmp_menu_1 = new wxMenu();
    wxglade_tmp_menu_1->Append(wxNewId(), "New", "");
    wxglade_tmp_menu_1->Append(wxNewId(), "Open", "");
    wxglade_tmp_menu_1->Append(wxNewId(), "Save", "");
    wxglade_tmp_menu_1->Append(wxNewId(), "Save As...", "");
    wxglade_tmp_menu_1->AppendSeparator();
    wxglade_tmp_menu_1->Append(wxNewId(), "Export Script...", "");
    wxglade_tmp_menu_1->AppendSeparator();
    wxMenu* wxglade_tmp_menu_1_sub = new wxMenu();
    wxglade_tmp_menu_1_sub->Append(wxNewId(), "<Empty>", "");
    wxglade_tmp_menu_1->Append(wxNewId(), "Recent Files", wxglade_tmp_menu_1_sub, "");
    wxglade_tmp_menu_1->AppendSeparator();
    wxglade_tmp_menu_1->Append(wxNewId(), "Exit", "");
    menubar->Append(wxglade_tmp_menu_1, "New");
    wxMenu* wxglade_tmp_menu_2 = new wxMenu();
    wxglade_tmp_menu_2->Append(wxNewId(), "Insert New In...", "");
    wxglade_tmp_menu_2->Append(wxNewId(), "Insert New After...", "");
    wxglade_tmp_menu_2->Append(wxNewId(), "Insert Table...", "");
    wxglade_tmp_menu_2->AppendSeparator();
    wxglade_tmp_menu_2->Append(wxNewId(), "Proporties...", "");
    wxglade_tmp_menu_2->Append(wxNewId(), "Table Proporties...", "");
    wxglade_tmp_menu_2->AppendSeparator();
    wxglade_tmp_menu_2->Append(wxNewId(), "Move Up", "");
    wxglade_tmp_menu_2->Append(wxNewId(), "Move Down", "");
    wxglade_tmp_menu_2->AppendSeparator();
    wxglade_tmp_menu_2->Append(wxNewId(), "Delete", "");
    menubar->Append(wxglade_tmp_menu_2, "Edit");
    wxMenu* wxglade_tmp_menu_3 = new wxMenu();
    wxglade_tmp_menu_3->Append(wxNewId(), "About", "");
    menubar->Append(wxglade_tmp_menu_3, "Help");
    statusbar = CreateStatusBar(1);
    
    _tb = CreateToolBar();
    
    
    _tb->SetToolBitmapSize(wxSize(20, 20));
    _tb->AddTool(wxNewId(), "New", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddTool(wxNewId(), "Open", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "Open a file.", "");
    _tb->AddTool(wxNewId(), "Save", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddSeparator();
    _tb->AddTool(wxNewId(), "Create In", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddTool(wxNewId(), "After", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddTool(wxNewId(), "Table", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddSeparator();
    _tb->AddTool(wxNewId(), "Prop.", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddTool(wxNewId(), "Table Prop.", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddSeparator();
    _tb->AddTool(wxNewId(), "Delete", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddSeparator();
    _tb->AddTool(wxNewId(), "Up", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->AddTool(wxNewId(), "Down", wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, "", "");
    _tb->Realize();
    tree_ctrl_1 = new wxTreeCtrl(this, -1, wxDefaultPosition, wxDefaultSize, wxTR_HAS_BUTTONS|wxSUNKEN_BORDER);

    set_properties();
    do_layout();
    // end wxGlade
}


void MainFrame::set_properties()
{
    // begin wxGlade: MainFrame::set_properties
    SetTitle("NWN Treasure Editor (OK Edition)");
    SetSize(wxSize(823, 561));
    int statusbar_widths[] = { -1 };
    statusbar->SetStatusWidths(1, statusbar_widths);
    const wxString statusbar_fields[] = {
        "Welcome to NWN"
    };
    for(int i = 0; i < statusbar->GetFieldsCount(); ++i) {
        statusbar->SetStatusText(statusbar_fields[i], i);
    }
    // end wxGlade
}


void MainFrame::do_layout()
{
    // begin wxGlade: MainFrame::do_layout
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(tree_ctrl_1, 1, wxEXPAND, 0);
    SetAutoLayout(true);
    SetSizer(sizer_1);
    Layout();
    // end wxGlade
}



class wxNwnTreasure: public wxApp {
public:
    bool OnInit();
};

IMPLEMENT_APP(wxNwnTreasure)

bool wxNwnTreasure::OnInit()
{
//    wxInitAllImageHandlers();
    MainFrame* frame_1 = new MainFrame(0, -1, "");
    SetTopWindow(frame_1);
    frame_1->Show();
    return true;
}
