#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeavyPickupComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HeavyPickupComponent.HeavyPickupComponent_C
// 0x0038 (0x00E8 - 0x00B0)
class UHeavyPickupComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ANPCBase_C*                             NPC;                                               // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             PickedUp;                                          // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Dropped;                                           // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShouldCrouch_;                                     // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxPullStrength;                                   // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void PickedUp__DelegateSignature();
	void Dropped__DelegateSignature();
	void ExecuteUbergraph_HeavyPickupComponent(int32 EntryPoint);
	void DroppedRagdoll(class AActor* Player);
	void SetBoneLocation(class AActor* Player, const struct FVector& Pickuplocation, const struct FRotator& PickupRotation, const struct FVector& HitLocation);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeavyPickupComponent_C">();
	}
	static class UHeavyPickupComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeavyPickupComponent_C>();
	}
};
static_assert(alignof(UHeavyPickupComponent_C) == 0x000008, "Wrong alignment on UHeavyPickupComponent_C");
static_assert(sizeof(UHeavyPickupComponent_C) == 0x0000E8, "Wrong size on UHeavyPickupComponent_C");
static_assert(offsetof(UHeavyPickupComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UHeavyPickupComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHeavyPickupComponent_C, NPC) == 0x0000B8, "Member 'UHeavyPickupComponent_C::NPC' has a wrong offset!");
static_assert(offsetof(UHeavyPickupComponent_C, PickedUp) == 0x0000C0, "Member 'UHeavyPickupComponent_C::PickedUp' has a wrong offset!");
static_assert(offsetof(UHeavyPickupComponent_C, Dropped) == 0x0000D0, "Member 'UHeavyPickupComponent_C::Dropped' has a wrong offset!");
static_assert(offsetof(UHeavyPickupComponent_C, ShouldCrouch_) == 0x0000E0, "Member 'UHeavyPickupComponent_C::ShouldCrouch_' has a wrong offset!");
static_assert(offsetof(UHeavyPickupComponent_C, MaxPullStrength) == 0x0000E4, "Member 'UHeavyPickupComponent_C::MaxPullStrength' has a wrong offset!");

}

