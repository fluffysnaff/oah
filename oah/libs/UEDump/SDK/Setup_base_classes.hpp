#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Setup_base

#include "Basic.hpp"

#include "ShopItem_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Setup_base.Setup_base_C
// 0x0030 (0x02A0 - 0x0270)
class ASetup_base_C : public AShopItem_Base_C
{
public:
	class UClass*                                 SetupOwnerMap;                                     // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PreviousSetup;                                     // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Estimated_added_value;                             // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 SetupMapBP;                                        // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     SetupScreenshots;                                  // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Setup_base_C">();
	}
	static class ASetup_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASetup_base_C>();
	}
};
static_assert(alignof(ASetup_base_C) == 0x000008, "Wrong alignment on ASetup_base_C");
static_assert(sizeof(ASetup_base_C) == 0x0002A0, "Wrong size on ASetup_base_C");
static_assert(offsetof(ASetup_base_C, SetupOwnerMap) == 0x000270, "Member 'ASetup_base_C::SetupOwnerMap' has a wrong offset!");
static_assert(offsetof(ASetup_base_C, PreviousSetup) == 0x000278, "Member 'ASetup_base_C::PreviousSetup' has a wrong offset!");
static_assert(offsetof(ASetup_base_C, Estimated_added_value) == 0x000280, "Member 'ASetup_base_C::Estimated_added_value' has a wrong offset!");
static_assert(offsetof(ASetup_base_C, SetupMapBP) == 0x000288, "Member 'ASetup_base_C::SetupMapBP' has a wrong offset!");
static_assert(offsetof(ASetup_base_C, SetupScreenshots) == 0x000290, "Member 'ASetup_base_C::SetupScreenshots' has a wrong offset!");

}

