#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupItemComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PickupItemComponent.PickupItemComponent_C
// 0x0058 (0x0108 - 0x00B0)
class UPickupItemComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             PickUpItem;                                        // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             DropItem;                                          // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CollidesWithPlayer_;                               // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             InteractHolding;                                   // 0x00E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          MustOverlapInteract_;                              // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             HitSound;                                          // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Picked_up_;                                        // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SoundImpactStrength;                               // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PickUpItem__DelegateSignature(class AActor* Player, const struct FVector& Pickuplocation, const struct FRotator& PickupRotation, const struct FVector& HitLocation);
	void DropItem__DelegateSignature(class AActor* Player);
	void InteractHolding__DelegateSignature(class AActor* Instigator, class AActor* Overlap);
	void ExecuteUbergraph_PickupItemComponent(int32 EntryPoint);
	void InitializeInLevelItem();
	void ReceiveBeginPlay();
	void InitializeItem();
	void AddComponents();
	void ImpactSound(const struct FVector& Normal_impulse);
	void OnDropped();
	void OnPickedUp();
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void EndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void InteractHoldingEvent(class AActor* Instigator);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickupItemComponent_C">();
	}
	static class UPickupItemComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickupItemComponent_C>();
	}
};
static_assert(alignof(UPickupItemComponent_C) == 0x000008, "Wrong alignment on UPickupItemComponent_C");
static_assert(sizeof(UPickupItemComponent_C) == 0x000108, "Wrong size on UPickupItemComponent_C");
static_assert(offsetof(UPickupItemComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UPickupItemComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPickupItemComponent_C, PickUpItem) == 0x0000B8, "Member 'UPickupItemComponent_C::PickUpItem' has a wrong offset!");
static_assert(offsetof(UPickupItemComponent_C, DropItem) == 0x0000C8, "Member 'UPickupItemComponent_C::DropItem' has a wrong offset!");
static_assert(offsetof(UPickupItemComponent_C, CollidesWithPlayer_) == 0x0000D8, "Member 'UPickupItemComponent_C::CollidesWithPlayer_' has a wrong offset!");
static_assert(offsetof(UPickupItemComponent_C, InteractHolding) == 0x0000E0, "Member 'UPickupItemComponent_C::InteractHolding' has a wrong offset!");
static_assert(offsetof(UPickupItemComponent_C, MustOverlapInteract_) == 0x0000F0, "Member 'UPickupItemComponent_C::MustOverlapInteract_' has a wrong offset!");
static_assert(offsetof(UPickupItemComponent_C, HitSound) == 0x0000F8, "Member 'UPickupItemComponent_C::HitSound' has a wrong offset!");
static_assert(offsetof(UPickupItemComponent_C, Picked_up_) == 0x000100, "Member 'UPickupItemComponent_C::Picked_up_' has a wrong offset!");
static_assert(offsetof(UPickupItemComponent_C, SoundImpactStrength) == 0x000104, "Member 'UPickupItemComponent_C::SoundImpactStrength' has a wrong offset!");

}

