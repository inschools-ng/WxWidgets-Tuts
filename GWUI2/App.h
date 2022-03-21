#pragma once

#ifndef UNICODE
#define UNICODE
#endif

#ifndef _UNICODE
#define _UNICODE
#endif

#include <wx/wx.h>

class App : public wxApp
{
public:
	virtual bool OnInit();
};

