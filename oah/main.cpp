#define WIN32_LEAN_AND_MEAN
#define NO_MIN_MAX

#include <iostream>

#include "kfn_version.h"
#include "kfn_logger.h"
#include "kfn_manager.h"

std::unique_ptr<KFNManager> manager;

DWORD WINAPI MainThread(HMODULE hmodule)
{
	kfnlog::init(kfnlog::level::LOG, true);
	kfnlog::log("Initialized %s...", APP_NAME);
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			// Initialize manager
			manager = std::make_unique<KFNManager>();

			// Bind kiero
			kiero::bind(8, (void**)&manager->m_pGui->oPresent, manager->m_pGui->hkPresent);

			// Init SDK
			manager->UpdateSDK();

			init_hook = true;
		}
	} while (!init_hook);

	// Handle unloading
	while (manager->m_pConfig->menu.injected)
	{
		if (GetAsyncKeyState(manager->m_pConfig->menu.keyUnload) & 1)
		{
			manager->m_pConfig->menu.injected = false;
			kfnlog::log("Unloading %s...", APP_NAME);
			kfnlog::shutdown();
			Sleep(100);
			FreeLibraryAndExitThread(hmodule, 0);
		}
	}

	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	default:
		break;
	}
	return TRUE;
}