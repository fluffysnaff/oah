#include "kfn_manager.h"
#include "variables.h"
#include "kfn_hacks.h"

#include "libs/UEDump/SDK/GunBase_classes.hpp"


// Main
void KFNHacks::RunHacks()
{
	if (!Vars::CharacterClass->HasLoaded_)
		return;

	SpeedHack();
	LevelHack();
	CashHack();
	MiscHacks();
	FlyHack();
	UnlimitedAmmo();
	JumpHack();
	TeleportExploits();
}


// Hacks
void KFNHacks::SpeedHack()
{
	static bool speedState = false;
	if (manager->m_pConfig->speed.enabled)
	{
		Vars::CharacterClass->CharacterMovement->MaxWalkSpeed = manager->m_pConfig->speed.speed;
		Vars::CharacterClass->CharacterMovement->MaxAcceleration = manager->m_pConfig->speed.speed;
	}
	else if(!manager->m_pConfig->speed.enabled && speedState)
	{
		speedState = false;
	}
}

void KFNHacks::LevelHack()
{
	if (!manager->m_pConfig->levelHack.setLevel)
		return;
	if (!Vars::CharacterClass->PCController)
		return;
	if (!Vars::CharacterClass->PCController->Level)
		return;

	Vars::CharacterClass->PCController->Level = static_cast<UC::int32>(manager->m_pConfig->levelHack.level);
	Vars::CharacterClass->PCController->SaveLevel();
	manager->m_pConfig->levelHack.setLevel = false;
}

void KFNHacks::CashHack()
{
	if (!manager->m_pConfig->cashHack.setCash)
		return;
	if (!Vars::CharacterClass->PCController)
		return;
	if (!Vars::CharacterClass->PCController->Cash)
		return;

	Vars::CharacterClass->PCController->Cash = static_cast<UC::int32>(manager->m_pConfig->cashHack.cashValue);
	Vars::CharacterClass->PCController->SaveCash();
	manager->m_pConfig->cashHack.setCash = false;
}

void KFNHacks::MiscHacks()
{
	if (!manager->m_pConfig->miscHacks.enabled)
		return;

	if (manager->m_pConfig->miscHacks.addedGuardPhoneTime)
		Vars::CharacterClass->AddedGuardPhoneTime = manager->m_pConfig->miscHacks.phoneTime;

	if (manager->m_pConfig->miscHacks.addedDrillImmunityTime)
		Vars::CharacterClass->DrillImmunityTime = static_cast<float>(manager->m_pConfig->miscHacks.drillImmunityTime);

	if (manager->m_pConfig->miscHacks.addedLastBulletsDmg)
		Vars::CharacterClass->LastBulletsExtraDamage = manager->m_pConfig->miscHacks.lastBulletsDmg;

	static bool damageImmunityState = false;
	if (manager->m_pConfig->miscHacks.addedDamageImmunity)
	{
		Vars::CharacterClass->DamageImmunity = 1;
		damageImmunityState = true;
	}
	else if(damageImmunityState)
	{
		Vars::CharacterClass->DamageImmunity = 0;
		damageImmunityState = false;
	}

}

SDK::FVector GetVectorForward(const SDK::FVector& angles)
{
	float sp, sy, cp, cy;
	float angle;

	angle = angles.Y * (3.14159265 / 180.0f);
	sy = sinf(angle);
	cy = cosf(angle);
	angle = -angles.X * (3.14159265 / 180.0f);
	sp = sinf(angle);
	cp = cosf(angle);

	return { cp * cy, cp * sy, -sp };
}
SDK::FVector GetVectorForward(const SDK::FRotator& angles)
{
	float sp, sy, cp, cy;
	float angle;

	angle = angles.Yaw * (3.14159265 / 180.0f);
	sy = sinf(angle);
	cy = cosf(angle);
	angle = -angles.Pitch * (3.14159265 / 180.0f);
	sp = sinf(angle);
	cp = cosf(angle);

	return { cp * cy, cp * sy, -sp };
}

#define IsKeyHeld(key) (GetAsyncKeyState(key) & 0x8000)

void KFNHacks::FlyHack()
{
	if (!Vars::MyController->PlayerCameraManager)
		return;
	static bool flyHackState = false;
	if (manager->m_pConfig->flyHack.enabled)
	{
		if (manager->m_pConfig->flyHack.noclip)
			Vars::CharacterClass->bActorEnableCollision = false;

		Vars::CharacterClass->CharacterMovement->Velocity = SDK::FVector{0, 0, 0};
		Vars::CharacterClass->CharacterMovement->MaxFlySpeed = 3000.f;
		Vars::CharacterClass->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Flying;

		SDK::FVector pos = { 0.f, 0.f, 0.f };
		if (GetAsyncKeyState(VK_SPACE))
			pos = { 0.f, 0.f, 10.f };
		else if (GetAsyncKeyState(VK_LCONTROL))
			pos = { 0.f, 0.f, -10.f };

		SDK::FVector sum = { };
		SDK::FVector newRot = { };
		float flySpeed = Vars::CharacterClass->CharacterMovement->MaxFlySpeed / 90.f;

		if (GetAsyncKeyState(VK_SHIFT) & 1)
			flySpeed *= 1.5f; // hold shift to speed fly

		if (IsKeyHeld('W'))
			sum += GetVectorForward(Vars::MyController->PlayerCameraManager->GetCameraRotation()) * flySpeed;
		else if (IsKeyHeld('S')) // we dont want to move backwards if we are holding W
		{
			newRot = {
				-Vars::MyController->PlayerCameraManager->GetCameraRotation().Pitch,		   // when goind backwards, we need to flip the value here
				Vars::MyController->PlayerCameraManager->GetCameraRotation().Yaw + 180.f, // + 180.f so we look behind us, 'S' is for going backwards after all...
				0.f								   // roll is always zero
			};
			sum += GetVectorForward(newRot) * flySpeed;
		}

		if (IsKeyHeld('D'))
		{
			newRot = {
				0.f,							  // when going left or right we dont't want to move up or down
				Vars::MyController->PlayerCameraManager->GetCameraRotation().Yaw + 90.f, // + 90.f so we look to the right, 'D' is for going right after all...
				0.f								  // roll is always zero
			};
			sum += GetVectorForward(newRot) * flySpeed;
		}
		else if (IsKeyHeld('A')) // we dont want to move left if we are holding A
		{
			newRot = {
				0.f,							   // when going left or right we dont't want to move up or down
				Vars::MyController->PlayerCameraManager->GetCameraRotation().Yaw + 270.f, // + 270.f so we look to the left, 'A' is for going left after all...
				0.f								   // roll is always zero
			};
			sum += GetVectorForward(newRot) * flySpeed;
		}

		Vars::CharacterClass->K2_TeleportTo(Vars::CharacterClass->K2_GetActorLocation() + pos + sum, Vars::CharacterClass->K2_GetActorRotation());
		flyHackState = true;
	}
	else if(!manager->m_pConfig->flyHack.enabled && flyHackState)
	{
		Vars::CharacterClass->bActorEnableCollision = true;
		Vars::CharacterClass->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Falling;
		flyHackState = false;
	}
}

void KFNHacks::UnlimitedAmmo()
{
	if (!manager->m_pConfig->unlimitedAmmo.enabled)
		return;
	if (!Vars::CharacterClass->HoldingGun)
		return;
	__try
	{
		Vars::CharacterClass->HoldingGun->CalculatedReloadTime = 0.f;
		Vars::CharacterClass->HoldingGun->BulletsLeft = 1337;
	}
	__except(GetExceptionCode() == EXCEPTION_ACCESS_VIOLATION)
	{
		;
	}
}

void KFNHacks::JumpHack()
{
	if (Vars::CharacterClass->CharacterMovement == nullptr)
		return;

	static bool jumpHackState = false;
	if (manager->m_pConfig->jumpHack.enabled)
	{
		Vars::CharacterClass->CharacterMovement->JumpZVelocity = static_cast<float>(manager->m_pConfig->jumpHack.value);
		jumpHackState = true;
	}
	else if(jumpHackState)
	{
		Vars::CharacterClass->CharacterMovement->JumpZVelocity = 300.f;
		jumpHackState = false;
	}
}

void KFNHacks::TeleportExploits()
{
	if (!manager->m_pConfig->teleportExploits.killCivilians && !manager->m_pConfig->teleportExploits.killRats &&
		!manager->m_pConfig->teleportExploits.killPolice && !manager->m_pConfig->teleportExploits.killDoors && 
		!manager->m_pConfig->teleportExploits.killCameras && !manager->m_pConfig->teleportExploits.killBreakableGlass)
		return;
	if (!Vars::MyController)
		return;
	if (!Vars::MyController->PlayerCameraManager)
		return;
	if (Vars::World->Levels.Num() == 0)
		return;

	// Get current level
	SDK::ULevel* currLevel = Vars::World->Levels[0];
	if (!currLevel)
		return;

	for (int j = 0; j < currLevel->Actors.Num(); j++)
	{
		SDK::AActor* currActor = currLevel->Actors[j];

		// Continue if actor is bad
		if (!currActor)
			continue;
		if (!currActor->RootComponent)
			continue;
		if (Fns::IsBadPoint(currActor))
			continue;

		// Continue if invalid location
		const auto location = currActor->K2_GetActorLocation();
		if (location.X == 0.f || location.Y == 0.f || location.Z == 0.f)
			continue;

		SDK::FVector teleLocation = { -9999.f, 9999.f, 9999.f };
		if (manager->m_pConfig->teleportExploits.killCivilians && currActor->GetFullName().find("Civilian_NPC") != std::string::npos)
			currActor->K2_TeleportTo(teleLocation, SDK::FRotator{ 0, 0, 0 });
		if (manager->m_pConfig->teleportExploits.killRats && currActor->GetFullName().find("RatCharacter") != std::string::npos)
			currActor->K2_TeleportTo(teleLocation, SDK::FRotator{ 0, 0, 0 });
		if (manager->m_pConfig->teleportExploits.killPolice && (currActor->GetFullName().find("NPC_Police") != std::string::npos || currActor->GetFullName().find("NPC_Guard") != std::string::npos))
			currActor->K2_TeleportTo(teleLocation, SDK::FRotator{ 0, 0, 0 });
		if (manager->m_pConfig->teleportExploits.killDoors && currActor->GetFullName().find("DoorBP") != std::string::npos)
			currActor->K2_TeleportTo(teleLocation, SDK::FRotator{ 0, 0, 0 });
		if (manager->m_pConfig->teleportExploits.killCameras && currActor->GetFullName().find("CameraBP") != std::string::npos)
			currActor->K2_TeleportTo(teleLocation, SDK::FRotator{ 0, 0, 0 });
		if (manager->m_pConfig->teleportExploits.killBreakableGlass && currActor->GetFullName().find("BreakableGlass") != std::string::npos)
			currActor->K2_TeleportTo(teleLocation, SDK::FRotator{ 0, 0, 0 });
	}

	manager->m_pConfig->teleportExploits.killCivilians = false;
	manager->m_pConfig->teleportExploits.killPolice = false;
	manager->m_pConfig->teleportExploits.killRats = false;
	manager->m_pConfig->teleportExploits.killDoors = false;
	manager->m_pConfig->teleportExploits.killCameras = false;
	manager->m_pConfig->teleportExploits.killBreakableGlass = false;
}
