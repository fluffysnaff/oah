#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VaultDoor.VaultDoor_C
// 0x0048 (0x0268 - 0x0220)
class AVaultDoor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USteamAchievementComponent_C*           SteamAchievementComponent;                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstructioncomponent_C*                Instructioncomponent;                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULookatInfoComponent_C*                 LookatInfoComponent;                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHackableItemComponent_C*               HackableItemComponent;                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToolOwnerComponent_C*                  ToolOwnerComponent;                                // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door;                                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         VaultHealth;                                       // 0x0260(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          AlarmTriggered_;                                   // 0x0264(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ToolOpen_;                                         // 0x0265(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HackOpen_;                                         // 0x0266(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Open_;                                             // 0x0267(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void IsDoorOpenInterfaceCall(bool* IsOpen_);
	void AlarmDisabledInterfaceCall();
	void TakeDamage(int32 Amount);
	void OpenVault();
	void BndEvt__VaultDoor_ToolOwnerComponent_K2Node_ComponentBoundEvent_0_Open__DelegateSignature();
	void BndEvt__VaultDoor_HackableItemComponent_K2Node_ComponentBoundEvent_1_HackItem__DelegateSignature();
	void AlarmTriggeredInterfaceCall();
	void ExecuteUbergraph_VaultDoor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultDoor_C">();
	}
	static class AVaultDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultDoor_C>();
	}
};
static_assert(alignof(AVaultDoor_C) == 0x000008, "Wrong alignment on AVaultDoor_C");
static_assert(sizeof(AVaultDoor_C) == 0x000268, "Wrong size on AVaultDoor_C");
static_assert(offsetof(AVaultDoor_C, UberGraphFrame) == 0x000220, "Member 'AVaultDoor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, SteamAchievementComponent) == 0x000228, "Member 'AVaultDoor_C::SteamAchievementComponent' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, Instructioncomponent) == 0x000230, "Member 'AVaultDoor_C::Instructioncomponent' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, LookatInfoComponent) == 0x000238, "Member 'AVaultDoor_C::LookatInfoComponent' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, HackableItemComponent) == 0x000240, "Member 'AVaultDoor_C::HackableItemComponent' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, ToolOwnerComponent) == 0x000248, "Member 'AVaultDoor_C::ToolOwnerComponent' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, Door) == 0x000250, "Member 'AVaultDoor_C::Door' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, DefaultSceneRoot) == 0x000258, "Member 'AVaultDoor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, VaultHealth) == 0x000260, "Member 'AVaultDoor_C::VaultHealth' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, AlarmTriggered_) == 0x000264, "Member 'AVaultDoor_C::AlarmTriggered_' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, ToolOpen_) == 0x000265, "Member 'AVaultDoor_C::ToolOpen_' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, HackOpen_) == 0x000266, "Member 'AVaultDoor_C::HackOpen_' has a wrong offset!");
static_assert(offsetof(AVaultDoor_C, Open_) == 0x000267, "Member 'AVaultDoor_C::Open_' has a wrong offset!");

}
