#include "App.h"
#include "Menu.h"

IMPLEMENT_APP(App);

bool App::OnInit()
{
	SubMenu *menu = new SubMenu("PsychroAPP");
	menu->Show(true);

	return true;

}


