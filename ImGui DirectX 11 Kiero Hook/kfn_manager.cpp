#include "kfn_manager.h"

KFNManager::KFNManager() noexcept :
	m_pGui(std::make_unique<KFNGUI>()),
	m_pConfig(std::make_unique<KFNConfig>()),
	m_pHacks(std::make_unique<KFNHacks>()),
	m_pEsp(std::make_unique<KFNEsp>())
{
}

bool KFNManager::UpdateSDK()
{
	// Init UWorld and check if it's valid
	Vars::World = SDK::UWorld::GetWorld();
	if (Fns::IsBadPoint(Vars::World))
		return false;

	// Init engine
	Vars::Engine = SDK::UEngine::GetEngine();

	// Init PlayerController
	{
		if (Fns::IsBadPoint(Vars::World->OwningGameInstance))
			return false;
		if (Fns::IsBadPoint(Vars::World->OwningGameInstance->LocalPlayers[0]))
			return false;
		Vars::MyController = Vars::World->OwningGameInstance->LocalPlayers[0]->PlayerController;
		if (Fns::IsBadPoint(Vars::MyController))
			return false;
	}

	// Init PlayerArray
	{
		if (Fns::IsBadPoint(Vars::World->GameState))
			return false;
		Vars::PlayerArray = Vars::World->GameState->PlayerArray;
	}

	// Init Pawn
	{
		Vars::MyPawn = Vars::MyController->AcknowledgedPawn;
		if (Vars::MyPawn == nullptr)
			return false;
	}

	// Init CharacterClass
	{
		Vars::CharacterClass = static_cast<SDK::APlayerCharacter_C*>(Vars::MyPawn);
		if (Vars::CharacterClass == nullptr)
			return false;
	}
	return true;
}

void KFNManager::DumpUObjects()
{
	/* Print the full-name of an object ("ClassName PackageName.OptionalOuter.ObjectName") */
	std::cout << Vars::Engine->ConsoleClass->GetFullName() << std::endl;

	/* Manually iterating GObjects and printing the FullName of every UObject that is a Pawn (not recommended) */
	for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
	{
		const SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

		if (!Obj)
			continue;

		if (!Obj->IsDefaultObject())
			continue;

		/* Only the 'IsA' check using the cast flags is required, the other 'IsA' is redundant */
		if (Obj->IsA(SDK::APawn::StaticClass()) || Obj->HasTypeFlag(SDK::EClassCastFlags::Pawn))
		{
			std::cout << Obj->GetFullName() << "\n";
		}
	}
}
