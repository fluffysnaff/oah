#include "../kfn_manager.h"
#include "kfn_esp.h"

// Base
float KFNEsp::GetPlayerHeight(ImVec2 head, ImVec2 feet)
{
	const float temp1 = powf(head.x - feet.x, 2.f);
	const float temp2 = powf(head.y - feet.y, 2.f);
	const float height = sqrtf(temp1 + temp2);
	return height;
}

void KFNEsp::RenderNameplate(SDK::FVector2D pos, std::string name)
{
	// Centered nameplate
	pos.X -= ImGui::CalcTextSize(name.c_str()).x * 0.5f;
	ImGui::GetBackgroundDrawList()->AddText(ImVec2{ pos.X, pos.Y }, IM_COL32(255, 0, 0, 255), name.c_str());
}

void KFNEsp::RenderBox(SDK::FVector2D headPos, SDK::FVector2D footPos)
{
	const float height = GetPlayerHeight(ImVec2{ headPos.X, headPos.Y }, ImVec2{ footPos.X, footPos.Y });
	const float width = height * 0.5f;

	SDK::FVector2D originPos = footPos;
	originPos.Y -= height * 0.5f;

	const ImVec2 upperLeft = { originPos.X - width * 0.5f, originPos.Y - height * 0.5f };
	const ImVec2 lowerRight = { originPos.X + width * 0.5f, originPos.Y + height * 0.5f };
	ImGui::GetBackgroundDrawList()->AddRect(upperLeft,
		lowerRight,
		IM_COL32(0, 0, 0, 225.f),
		0.f,
		ImDrawCornerFlags_All,
		2.5f);
	ImGui::GetBackgroundDrawList()->AddRect(upperLeft, lowerRight, IM_COL32(255, 0, 0, 255), 0.f, ImDrawCornerFlags_All, 1.5f);
}
