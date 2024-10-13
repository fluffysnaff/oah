#include <filesystem>
#include <string>

#include "../base/color.h"
#include "kfn_gui.h"
#include "../kfn_logger.h"
#include "../kfn_manager.h"
#include "../libs/imgui/imgui_internal.h"

void KFNGUI::SetupImGuiFonts()
{
	// Setup Dear ImGui font
	const ImGuiIO& io = ImGui::GetIO();

	std::string calibriPath = "C:\\Windows\\Fonts\\Calibri.ttf";
	std::filesystem::path f{ calibriPath.c_str() };
	if (std::filesystem::exists(f))
	{
		AddFont(17.f, calibriPath.c_str());
		espFont = AddFont(21.f, calibriPath.c_str());
	}
	else
		ASSERT("Callibri font not found!")

	// Setup icon font - Needs to be 2nd in row
	// ImFontConfig iconConfig;
	// iconConfig.MergeMode = true;
	// iconConfig.PixelSnapH = true;
	// ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data,
	// 	font_awesome_size,
	// 	18.f,
	// 	&iconConfig,
	// 	ranges);

	io.Fonts->Build();
}

void KFNGUI::SetupImGuiStyle()
{
	ImGuiStyle& style = ImGui::GetStyle();

	// Set style
	style.WindowRounding = 3.f;

	style.ChildRounding = 3.f;
	style.ChildBorderSize = 1.f;

	style.FrameRounding = 3.f;
	style.FrameBorderSize = 1.f;

	style.GrabRounding = 64.f;
	style.GrabMinSize = 10.f;
	style.WindowMenuButtonPosition = ImGuiDir_Right;

	// Scale using DPI
	// style.ScaleAllSizes(vars->dpi / USER_DEFAULT_SCREEN_DPI);

	// Colors
    style.Colors[ImGuiCol_Border] = Colors::UltramarineBlueLow.imVec4();
    style.Colors[ImGuiCol_CheckMark] = Colors::UltramarineBlue.imVec4();
    style.Colors[ImGuiCol_Text] = Colors::mainFontColor.imVec4();
    
    style.Colors[ImGuiCol_TitleBg] = Colors::UltramarineBlue.imVec4();
    style.Colors[ImGuiCol_TitleBgActive] = Colors::UltramarineBlue.imVec4();
    
    style.Colors[ImGuiCol_WindowBg] = Colors::windowBgColor.imVec4();
    style.Colors[ImGuiCol_ChildBg] = Colors::childBgColor.imVec4();
    
    style.Colors[ImGuiCol_Button] = Colors::buttonColor.imVec4();
    style.Colors[ImGuiCol_ButtonHovered] = Colors::buttonHoveredColor.imVec4();
    style.Colors[ImGuiCol_ButtonActive] = Colors::buttonActiveColor.imVec4();
    
    style.Colors[ImGuiCol_FrameBg] = style.Colors[ImGuiCol_WindowBg]; // Invisible frame bg
    style.Colors[ImGuiCol_FrameBgHovered] = Colors::frameColor.imVec4();
    style.Colors[ImGuiCol_FrameBgActive] = Colors::frameColor.imVec4();
    
    style.Colors[ImGuiCol_Header] = Colors::headerColor.imVec4();
    style.Colors[ImGuiCol_HeaderActive] = Colors::headerColor.imVec4();
    style.Colors[ImGuiCol_HeaderHovered] = Colors::headerColor.imVec4();
    
    style.Colors[ImGuiCol_Separator] = Colors::UltramarineBlue.imVec4();
    style.Colors[ImGuiCol_SeparatorHovered] = Colors::UltramarineBlue.imVec4();
    style.Colors[ImGuiCol_SeparatorActive] = Colors::UltramarineBlue.imVec4();
}


// Base
ImFont* KFNGUI::AddFont(float fontSize, const char* fontPath, ImFontConfig* fontCfg)
{
	ImGuiIO& io = ImGui::GetIO();
	(void)io;

	ImFontConfig cfg;
	cfg.OversampleH = cfg.OversampleV = 2;
	cfg.RasterizerMultiply = 1.4f;
	cfg.FontDataOwnedByAtlas = false;

	if (fontCfg != nullptr)
		cfg = *fontCfg;

	const auto ranges = GetFontGlyphRanges();
	ImFont* font = io.Fonts->AddFontFromFileTTF(fontPath, fontSize, &cfg, ranges);
	return font;
}

ImWchar* KFNGUI::GetFontGlyphRanges() noexcept
{
	static ImVector<ImWchar> ranges;
	if (ranges.empty())
	{
		ImFontGlyphRangesBuilder builder;
		constexpr ImWchar baseRanges[]{ 0x0100, 0x024F, // Latin Extended-A + Latin Extended-B
									   0x0300, 0x03FF, // Combining Diacritical Marks + Greek/Coptic
									   0x0600, 0x06FF, // Arabic
									   0x0E00, 0x0E7F, // Thai
									   /*ICON_MIN_FA, ICON_MAX_FA,*/ // Font Awesome
			0 };
		builder.AddRanges(baseRanges);
		builder.AddRanges(ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
		builder.AddRanges(ImGui::GetIO().Fonts->GetGlyphRangesChineseSimplifiedCommon());
		builder.AddText("\u9F8D\u738B\u2122\u00E4\u00C4");
		builder.BuildRanges(&ranges);
	}
	return ranges.Data;
}

void KFNGUI::MultiCombo(const char* label, const std::vector<const char*>& titles, const std::vector<bool*>& options, float width)
{
    if (titles.size() != options.size())
    {
        // Shouldn't, might cause issues
        kfnlog::critical("MultiCombo: titles don't match with options");
        return;
    }

    if (width == 0.f)
        width = ImGui::GetContentRegionAvail().x * 0.5f;
    const float comboDistance = ImGui::GetContentRegionAvail().x - (2 * 2.f + width + ImGui::CalcTextSize(label).x);

    // Calculate ID
    std::string strId = "##";
    strId += label;

    std::string preview = "Disabled##";
    for (size_t i = 0; i < options.size(); i++)
    {
        if (*options[i])
        {
            if (preview == "Disabled##")
                preview = "";

            preview += titles[i];
            preview.append(", ");
        }
    }

    // Remove last ,
    preview.pop_back();
    preview.pop_back();

    ImGui::Text(label);
    ImGui::SameLine();
    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + comboDistance);
    ImGui::PushItemWidth(width);
    if (ImGui::BeginCombo(strId.c_str(), preview.c_str()))
    {
        for (size_t i = 0; i < titles.size(); i++)
        {
            std::string pTitle = "+ ";
            pTitle += titles[i];
            ImGui::Selectable(*options[i] ? pTitle.c_str() : titles[i], options[i], ImGuiSelectableFlags_DontClosePopups);
        }

        ImGui::EndCombo();
    }
    ImGui::PopItemWidth();
    const float comboOffset = abs(2.f - IM_FLOOR(ImGui::GetStyle().ItemSpacing.y * 0.5f));
    ImGui::ItemSize(ImVec2(0.f, comboOffset));
}

void KFNGUI::MultiCombo(const char* label, const std::vector<const char*>& titles, const std::vector<int>& values, int* flag, float width)
{
    if (titles.size() != values.size())
    {
        // Shouldn't, might cause issues
        kfnlog::critical("MultiCombo: titles don't match with options");
        return;
    }

    if (width == 0.f)
        width = ImGui::GetContentRegionAvail().x * 0.5f;
    const float comboDistance = ImGui::GetContentRegionAvail().x - (2 * 2.f + width + ImGui::CalcTextSize(label).x);

    // Calculate ID
    std::string strId = "##";
    strId += label;

    std::string preview = "None##";
    if (!*flag)
        preview = "None##";
    else
    {
        for (size_t i = 0; i < values.size(); i++)
        {
            if (*flag & values[i])
            {
                if (preview == "None##")
                    preview = "";

                preview += titles[i];
                preview.append(", ");
            }
        }

        // Remove last ,
        preview.pop_back();
        preview.pop_back();
    }

    ImGui::Text(label);
    ImGui::SameLine();
    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + comboDistance);
    ImGui::PushItemWidth(width);
    if (ImGui::BeginCombo(strId.c_str(), preview.c_str()))
    {
        for (size_t i = 0; i < titles.size(); i++)
        {
            std::string pTitle = "+ ";
            pTitle += titles[i];
            const bool hasFlag = *flag & values[i];
            if (ImGui::Selectable(hasFlag ? pTitle.c_str() : titles[i], hasFlag, ImGuiSelectableFlags_DontClosePopups))
            {
                if (hasFlag)
                    *flag &= ~values[i];
                else
                    *flag |= values[i];
            }
        }

        ImGui::EndCombo();
    }
    ImGui::PopItemWidth();
    const float comboOffset = abs(2.f - IM_FLOOR(ImGui::GetStyle().ItemSpacing.y * 0.5f));
    ImGui::ItemSize(ImVec2(0.f, comboOffset));
}
