#pragma once

#include <memory>

#include "gui/kfn_gui.h"
#include "kfn_config.h"
#include "kfn_hacks.h"
#include "esp/kfn_esp.h"

#define ASSERT(x) { MessageBoxA(NULL, NULL, x, NULL); exit(0); }

class KFNManager
{
public:
	KFNManager() noexcept;

	bool UpdateSDK();
	void DumpUObjects();

	std::unique_ptr<KFNGUI>    m_pGui;
	std::unique_ptr<KFNConfig> m_pConfig;
	std::unique_ptr<KFNHacks>  m_pHacks;
	std::unique_ptr<KFNEsp>  m_pEsp;
};

extern std::unique_ptr<KFNManager> manager;
