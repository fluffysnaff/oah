#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuGM

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MainMenuGM.MainMenuGM_C
// 0x0008 (0x02C8 - 0x02C0)
class AMainMenuGM_C final : public AGameModeBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenuGM_C">();
	}
	static class AMainMenuGM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMainMenuGM_C>();
	}
};
static_assert(alignof(AMainMenuGM_C) == 0x000008, "Wrong alignment on AMainMenuGM_C");
static_assert(sizeof(AMainMenuGM_C) == 0x0002C8, "Wrong size on AMainMenuGM_C");
static_assert(offsetof(AMainMenuGM_C, DefaultSceneRoot) == 0x0002C0, "Member 'AMainMenuGM_C::DefaultSceneRoot' has a wrong offset!");

}

