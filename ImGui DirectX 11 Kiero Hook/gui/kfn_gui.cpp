#include <filesystem>
#include "../kfn_manager.h"
#include "kfn_gui.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static bool hiddenMouse = false;
	if (manager->m_pConfig->menu.enabled)
	{
		if (Vars::MyController)
		{
			if(!Vars::MyController->bShowMouseCursor)
				hiddenMouse = true;
			Vars::MyController->bShowMouseCursor = true;
		}
		ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
		return true;
	}

	if(hiddenMouse && Vars::MyController)
	{
		Vars::MyController->bShowMouseCursor = false;
		hiddenMouse = false;
	}

	switch (uMsg)
	{
	case WM_DESTROY:
	{
		PostQuitMessage(0);
		return 0;
	}
	}

	return CallWindowProc(manager->m_pGui->oWndProc, hWnd, uMsg, wParam, lParam);
}

// Main
HRESULT __stdcall KFNGUI::hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!manager->m_pGui->initDx)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&manager->m_pGui->pDevice)))
		{
			manager->m_pGui->pDevice->GetImmediateContext(&manager->m_pGui->pContext);

			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			manager->m_pGui->window = sd.OutputWindow;

			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			manager->m_pGui->pDevice->CreateRenderTargetView(pBackBuffer, NULL, &manager->m_pGui->mainRenderTargetView);

			pBackBuffer->Release();

			manager->m_pGui->oWndProc = (WNDPROC)SetWindowLongPtr(manager->m_pGui->window, GWLP_WNDPROC, (LONG_PTR)WndProc);

			manager->m_pGui->InitImGui();
			manager->m_pGui->initDx = true;
		}
		else
			return manager->m_pGui->oPresent(pSwapChain, SyncInterval, Flags);
	}

	manager->m_pConfig->Hotkeys();

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	manager->m_pGui->RenderImGui();

	ImGui::Render();

	// Update sdk
	if (manager->UpdateSDK())
	{
		// Call our features
		manager->m_pHacks->RunHacks();
	}

	manager->m_pGui->pContext->OMSetRenderTargets(1, &manager->m_pGui->mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	// Handle unloading
	if (!manager->m_pConfig->menu.injected)
	{
		kiero::shutdown();
		manager->m_pGui->pDevice->Release();
		manager->m_pGui->pContext->Release();
		pSwapChain->Release();
		manager->m_pGui->oWndProc = (WNDPROC)SetWindowLongPtr(manager->m_pGui->window, GWLP_WNDPROC, (LONG_PTR)(manager->m_pGui->oWndProc));
		manager->m_pGui->oPresent(pSwapChain, SyncInterval, Flags);
		return 0;
	}

	return manager->m_pGui->oPresent(pSwapChain, SyncInterval, Flags);
}


// ImGui
void KFNGUI::InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	io.IniFilename = nullptr;

	SetupImGuiFonts();
	SetupImGuiStyle();

	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}

void KFNGUI::RenderImGui()
{
	manager->m_pGui->RenderMainWindow();
	ImGui::PushFont(espFont);
	manager->m_pEsp->RenderESP();
	ImGui::PopFont();
}
