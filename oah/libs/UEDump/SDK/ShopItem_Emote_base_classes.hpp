#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopItem_Emote_base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ShopItem_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShopItem_Emote_base.ShopItem_Emote_base_C
// 0x0020 (0x0290 - 0x0270)
class AShopItem_Emote_base_C : public AShopItem_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DropsItem_;                                        // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StopSimulatePhysics_;                              // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ShopItem_Emote_base(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopItem_Emote_base_C">();
	}
	static class AShopItem_Emote_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShopItem_Emote_base_C>();
	}
};
static_assert(alignof(AShopItem_Emote_base_C) == 0x000008, "Wrong alignment on AShopItem_Emote_base_C");
static_assert(sizeof(AShopItem_Emote_base_C) == 0x000290, "Wrong size on AShopItem_Emote_base_C");
static_assert(offsetof(AShopItem_Emote_base_C, UberGraphFrame) == 0x000270, "Member 'AShopItem_Emote_base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AShopItem_Emote_base_C, SkeletalMesh) == 0x000278, "Member 'AShopItem_Emote_base_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AShopItem_Emote_base_C, Animation) == 0x000280, "Member 'AShopItem_Emote_base_C::Animation' has a wrong offset!");
static_assert(offsetof(AShopItem_Emote_base_C, DropsItem_) == 0x000288, "Member 'AShopItem_Emote_base_C::DropsItem_' has a wrong offset!");
static_assert(offsetof(AShopItem_Emote_base_C, StopSimulatePhysics_) == 0x000289, "Member 'AShopItem_Emote_base_C::StopSimulatePhysics_' has a wrong offset!");

}
