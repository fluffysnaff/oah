#pragma once

#include <Windows.h>
#include "kfn_enums.h"

class KFNConfig
{
public:
	void Hotkeys();

	struct Menu
	{
		bool enabled{ false };
		bool injected{ true };
		int keyEnable{ VK_INSERT };
		int keyUnload{ VK_END };
	} menu;

	struct Speed
	{
		bool enabled{ false };
		float speed{ 2500.f };
		int keyEnable{ VK_F1 };
	} speed;

	struct JumpHack
	{
		bool enabled{ false };
		int value{ 300 };
		int keyEnable{ VK_F2 };
	} jumpHack;

	struct FlyHack
	{
		bool enabled{ false };
		bool noclip{ false };
		int keyEnable{ VK_F3 };
	} flyHack;

	struct LevelHack
	{
		bool setLevel{ false };
		int level = 1;
	} levelHack;

	struct MiscHacks
	{
		bool enabled{ false };

		bool addedGuardPhoneTime{ false };
		int phoneTime{ 15 };

		bool addedDrillImmunityTime{ false };
		int drillImmunityTime{ false };

		bool addedLastBulletsDmg{ false };
		int lastBulletsDmg{ 99 };

		bool addedDamageImmunity{ false };
	} miscHacks;

	struct CashHack
	{
		bool setCash{ false };
		int cashValue{ 694200 };
	} cashHack;

	struct UnlimitedAmmo
	{
		bool enabled{ false };
	} unlimitedAmmo;

	struct TeleportExploits
	{
		bool killRats{ false };
		bool killCivilians{ false };
		bool killPolice{ false };
		bool killDoors{ false };
		bool killCameras{ false };
		bool killBreakableGlass{ false };
	} teleportExploits;

	struct Esp
	{
		bool enabled{ false };

		bool policeEspEnabled{ false };
		int policeEspSelection{ 0 };

		bool cameraEspEnabled{ false };

		bool playerEspEnabled{ false };
		int playerEspSelection{ 0 };
	} esp;
};
