#include <string>

#include "../base/color.h"
#include "../kfn_enums.h"
#include "../kfn_manager.h"
#include "../kfn_version.h"

#include "kfn_gui.h"

void KFNGUI::RenderMainWindow()
{
	if (!manager->m_pConfig->menu.enabled)
		return;

	ImVec2 windowSize = ImVec2(700, 700);
	std::string windowName = APP_NAME;
	bool* windowOpen = &manager->m_pConfig->menu.enabled;
	ImGuiWindowFlags windowFlags = ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar |
		ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_AlwaysUseWindowPadding;

	// Set first time window size
	ImGui::SetNextWindowSize(windowSize, ImGuiCond_Once);

	const float opacity = 255.f * 0.85f;
	Colors::windowBgColor.a = opacity;
	ImGui::PushStyleColor(ImGuiCol_WindowBg, Colors::windowBgColor.imGui());

	if (ImGui::Begin(windowName.c_str(), windowOpen, windowFlags))
	{
		ImGui::BeginTabBar("Tabs");

		if (ImGui::BeginTabItem("ESP"))
		{

			ImGui::Checkbox("Enabled", &manager->m_pConfig->esp.enabled);
			if (manager->m_pConfig->esp.enabled)
			{
				ImGui::Indent();

				ImGui::Checkbox("Police", &manager->m_pConfig->esp.policeEspEnabled);
				if (manager->m_pConfig->esp.policeEspEnabled)
				{
					MultiCombo("Features Police",
						{ "Nameplates", "Box" },
						{ 1 << static_cast<int>(EspSelection::Nameplates),
								   1 << static_cast<int>(EspSelection::Box) },
						&manager->m_pConfig->esp.policeEspSelection);
				}

				ImGui::Checkbox("Players", &manager->m_pConfig->esp.playerEspEnabled);
				if (manager->m_pConfig->esp.playerEspEnabled)
				{
					MultiCombo("Features Players",
						{ "Nameplates", "Box" },
						{ 1 << static_cast<int>(EspSelection::Nameplates),
								   1 << static_cast<int>(EspSelection::Box) },
						&manager->m_pConfig->esp.playerEspSelection);
				}

				ImGui::Checkbox("Cameras", &manager->m_pConfig->esp.cameraEspEnabled);

				ImGui::Unindent();
			}

			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Misc"))
		{
			ImGui::SliderInt("Level", &manager->m_pConfig->levelHack.level, 0, 9999);
			if (ImGui::Button("Set Level"))
			{
				manager->m_pConfig->levelHack.setLevel = true;
			}

			ImGui::SliderInt("Cash", &manager->m_pConfig->cashHack.cashValue, 0, 999999999);
			if (ImGui::Button("Set Cash"))
			{
				manager->m_pConfig->cashHack.setCash = true;
			}

			ImGui::Spacing();

			ImGui::Checkbox("Unlimited ammo", &manager->m_pConfig->unlimitedAmmo.enabled);

			ImGui::Checkbox("Misc hacks", &manager->m_pConfig->miscHacks.enabled);
			if (manager->m_pConfig->miscHacks.enabled)
			{
				ImGui::Indent();

				ImGui::Checkbox("Drill immunity time", &manager->m_pConfig->miscHacks.addedDrillImmunityTime);
				if (manager->m_pConfig->miscHacks.addedDrillImmunityTime)
					ImGui::SliderInt("##timeImmunityDrill", &manager->m_pConfig->miscHacks.drillImmunityTime, 0, 999);

				ImGui::Checkbox("Last bullets damage", &manager->m_pConfig->miscHacks.addedLastBulletsDmg);
				if (manager->m_pConfig->miscHacks.addedLastBulletsDmg)
					ImGui::SliderInt("##damageLastBullets", &manager->m_pConfig->miscHacks.lastBulletsDmg, 0, 999);

				ImGui::Checkbox("Damage immunity", &manager->m_pConfig->miscHacks.addedDamageImmunity);

				ImGui::Unindent();
			}

			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Movement"))
		{
			ImGui::Checkbox("Speed", &manager->m_pConfig->speed.enabled);
			if (manager->m_pConfig->speed.enabled)
			{
				ImGui::Indent();
				ImGui::SliderFloat("##speedValue", &manager->m_pConfig->speed.speed, 0.f, 3000.f);
				ImGui::Unindent();
			}

			ImGui::Checkbox("Jump", &manager->m_pConfig->jumpHack.enabled);
			if (manager->m_pConfig->jumpHack.enabled)
			{
				ImGui::Indent();
				ImGui::SliderInt("##jumpValue", &manager->m_pConfig->jumpHack.value, 0.f, 1000);
				ImGui::Unindent();
			}

			ImGui::Checkbox("Fly hack", &manager->m_pConfig->flyHack.enabled);
			if (manager->m_pConfig->flyHack.enabled)
			{
				ImGui::Indent();
				ImGui::Checkbox("Noclip", &manager->m_pConfig->flyHack.noclip);
				ImGui::Unindent();
			}

			ImGui::EndTabItem();
		}

		if(ImGui::BeginTabItem("Host"))
		{
			ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 204, 0, 255));
			ImGui::Text("Warning! Might not work on these maps: Orbital Bank, Black Diamond Casino, Esco Bar");
			ImGui::PopStyleColor();

			ImGui::Checkbox("Guard phone time", &manager->m_pConfig->miscHacks.addedGuardPhoneTime);
			if (manager->m_pConfig->miscHacks.addedGuardPhoneTime)
				ImGui::SliderInt("##timeGuardPhone", &manager->m_pConfig->miscHacks.phoneTime, 0, 999);

			if (ImGui::Button("Kill civilians"))
				manager->m_pConfig->teleportExploits.killCivilians = true;

			if (ImGui::Button("Kill rats"))
				manager->m_pConfig->teleportExploits.killRats = true;

			if (ImGui::Button("Kill police"))
				manager->m_pConfig->teleportExploits.killPolice = true;

			if (ImGui::Button("Kill doors"))
				manager->m_pConfig->teleportExploits.killDoors = true;
			if (ImGui::IsItemHovered())
			{
				ImGui::BeginTooltip();
				ImGui::Text("Will only delete doors locally(regardless of if you are host or not)");
				ImGui::EndTooltip();
			}

			if (ImGui::Button("Kill cameras"))
				manager->m_pConfig->teleportExploits.killCameras = true;

			if (ImGui::Button("Kill breakable glass"))
				manager->m_pConfig->teleportExploits.killBreakableGlass = true;

			ImGui::EndTabItem();
		}

#ifdef _DEBUG
		if (ImGui::BeginTabItem("Debug"))
		{
			if (ImGui::Button("Dump UObjects"))
				manager->DumpUObjects();

			ImGui::EndTabItem();
		}
#endif

		ImGui::EndTabBar();
	}

	ImGui::End();
	ImGui::PopStyleColor();
	Colors::windowBgColor.a = 255.f;
}
