#include "../kfn_manager.h"
#include "kfn_esp.h"

void KFNEsp::RenderESP()
{
	if (!manager->m_pConfig->esp.enabled)
		return;
	if (!manager->UpdateSDK())
		return;
	ActorsLoop();
}

void KFNEsp::ActorsLoop()
{
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

		EspPolice(currActor);
		EspCameras(currActor);
		EspPlayers(currActor);
	}
}

void KFNEsp::EspPolice(SDK::AActor* currActor)
{
	if (!manager->m_pConfig->esp.policeEspEnabled)
		return;

	// Actor isn't police
	if (currActor->GetFullName().find("NPC_Police") == std::string::npos && currActor->GetFullName().find("NPC_Guard") == std::string::npos)
		return;

	// Get important information
	SDK::FVector origin;
	SDK::FVector boxExtent;
	currActor->GetActorBounds(true, &origin, &boxExtent, false);
	SDK::FVector footLocation = origin, headLocation = origin;
	if(currActor->GetFullName().find("NPC_Guard") != std::string::npos)
	{
		headLocation.Z += boxExtent.Z * 0.5f;
	}
	else if (currActor->GetFullName().find("NPC_Police") != std::string::npos)
	{
		footLocation.Z -= boxExtent.Z * 0.15f;
		headLocation.Z += boxExtent.Z * 0.15f;
	}

	// Do W2S
	SDK::FVector2D footPos{};
	SDK::FVector2D headPos{};
	if (!Vars::MyController->ProjectWorldLocationToScreen(footLocation, &footPos, false))
		return;
	if (!Vars::MyController->ProjectWorldLocationToScreen(headLocation, &headPos, false))
		return;

	// Render ESP
	if (manager->m_pConfig->esp.policeEspSelection & 1 << static_cast<int>(EspSelection::Nameplates))
		RenderNameplate(footPos, currActor->GetName());
	if (manager->m_pConfig->esp.policeEspSelection & 1 << static_cast<int>(EspSelection::Box))
		RenderBox(headPos, footPos);
}

void KFNEsp::EspCameras(SDK::AActor* currActor)
{
	if (!manager->m_pConfig->esp.cameraEspEnabled)
		return;

	// Actor isn't camera
	if (currActor->GetFullName().find("CameraBP") == std::string::npos)
		return;

	// Do W2S
	SDK::FVector2D origin{};
	if (!Vars::MyController->ProjectWorldLocationToScreen(currActor->K2_GetActorLocation(), &origin, false))
		return;

	// Render ESP
	RenderNameplate(origin, currActor->GetName());
}

void KFNEsp::EspPlayers(SDK::AActor* currActor)
{
	if (!manager->m_pConfig->esp.playerEspEnabled)
		return;

	// Actor isn't player
	if (currActor->GetFullName().find("PlayerCharacter") == std::string::npos)
		return;

	// Check if actor is local
	if (currActor->GetOwner() == Vars::MyController)
		return;

	// Get important information
	SDK::FVector footLocation;
	SDK::FVector boxExtent;
	currActor->GetActorBounds(true, &footLocation, &boxExtent, false);
	footLocation.Z -= boxExtent.Z;
	SDK::FVector headLocation = { footLocation.X, footLocation.Y, footLocation.Z + boxExtent.Z * 1.5f};

	// Do W2S
	SDK::FVector2D footPos{};
	SDK::FVector2D headPos{};
	if (!Vars::MyController->ProjectWorldLocationToScreen(footLocation, &footPos, false))
		return;
	if (!Vars::MyController->ProjectWorldLocationToScreen(headLocation, &headPos, false))
		return;

	// Render ESP
	if (manager->m_pConfig->esp.playerEspSelection & 1 << static_cast<int>(EspSelection::Nameplates))
		RenderNameplate(footPos, currActor->GetName());
	if (manager->m_pConfig->esp.playerEspSelection & 1 << static_cast<int>(EspSelection::Box))
		RenderBox(headPos, footPos);
}