// -*- C++ -*- generated by wxGlade 0.2.3 on Tue Aug 12 16:48:40 2003



#ifndef WXNWNTREASURE_H
#define WXNWNTREASURE_H



//! IDs for various widget events.
enum
{
	ID_New,
	ID_Open,
	ID_Save,
	ID_Create,
	ID_After,
	ID_Table,
	ID_Prop,
	ID_TProp,
	ID_Delete,
	ID_Up,
	ID_Down,
	ID_About,
	ID_Exit,
	ID_Empty,
	ID_Treasure_Tbl,
};

class NwnTFrame: public wxFrame {
public:

    NwnTFrame(wxWindow* parent, int id, const char* title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:

    void set_properties();
    void do_layout();

protected:

    wxMenuBar* _mb;
    wxStatusBar* _sb;
    wxToolBar* _tb;
    wxTreeCtrl* _tc1;
    wxTreeItemIdValue _tc1_b1;
    wxTreeItemIdValue _tc1_b2;
    wxTreeItemIdValue _tc1_b3;
    wxTreeItemIdValue _tc1_b4;
    wxDialog* TblPropDialop;

	void OnNew(wxCommandEvent& event);
	void OnOpen(wxCommandEvent& event);
	void OnSave(wxCommandEvent& event);
	void OnCreate(wxCommandEvent& event);
	void OnAfter(wxCommandEvent& event);
	void OnTable(wxCommandEvent& event);
	void OnProp(wxCommandEvent& event);
	void OnTProp(wxCommandEvent& event);
	void OnDelete(wxCommandEvent& event);
	void OnUp(wxCommandEvent& event);
	void OnDown(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);

private:
	DECLARE_EVENT_TABLE()

};















#endif // WXNWNTREASURE_H
