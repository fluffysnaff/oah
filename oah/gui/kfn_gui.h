#pragma once

#include "../libs/includes.h"

class KFNGUI
{
public:
	// Vars
	Present oPresent;
	HWND window = NULL;
	WNDPROC oWndProc;
	ID3D11Device* pDevice = NULL;
	ID3D11DeviceContext* pContext = NULL;
	ID3D11RenderTargetView* mainRenderTargetView;

	bool initDx = false;
	ImFont *espFont = nullptr;

	// Main
	static HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

	// ImGui
	void InitImGui();
	void RenderImGui();

	// Menu
	void RenderMainWindow();

	// Helpers - base
	void SetupImGuiFonts();
	void SetupImGuiStyle();

	ImFont* AddFont(float fontSize, const char* fontPath, ImFontConfig* fontCfg = nullptr);
	ImWchar* GetFontGlyphRanges() noexcept;

	void MultiCombo(const char* label, const std::vector<const char*>& titles, const std::vector<bool*>& options, float width = 0.f);
	void MultiCombo(const char* label, const std::vector<const char*>& titles, const std::vector<int>& values, int* flag, float width = 0.f);
};
