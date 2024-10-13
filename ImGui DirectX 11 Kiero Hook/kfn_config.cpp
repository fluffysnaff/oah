#include <Windows.h>
#include "kfn_config.h"

void KFNConfig::Hotkeys()
{
	if (GetAsyncKeyState(menu.keyEnable) & 1)
	{
		menu.enabled = !menu.enabled;
	}
	else if (GetAsyncKeyState(speed.keyEnable) & 1)
	{
		speed.enabled = !speed.enabled;
	}
	else if (GetAsyncKeyState(jumpHack.keyEnable) & 1)
	{
		jumpHack.enabled = !jumpHack.enabled;
	}
	else if (GetAsyncKeyState(flyHack.keyEnable) & 1)
	{
		flyHack.enabled = !flyHack.enabled;
	}
}
