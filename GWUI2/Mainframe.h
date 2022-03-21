#pragma once

#ifndef UNICODE
#define UNICODE
#endif

#ifndef _UNICODE
#define _UNICODE
#endif

#include <wx/wx.h>

class Mainframe : public wxFrame
{
public:
	Mainframe(const wxString& title);
};

class Button : public wxFrame
{
	public:
		Button(const wxString& title);
		void OnQuit(wxCommandEvent & event);
};