#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerSwitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PowerSwitch.PowerSwitch_C
// 0x0070 (0x0290 - 0x0220)
class APowerSwitch_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInstructioncomponent_C*                Instructioncomponent;                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       HighlightOverlapper;                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lever;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Box;                                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULookatInfoComponent_C*                 LookatInfoComponent;                               // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractComponent_C*                   InteractComponent;                                 // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpottedHighlightcomponent_C*           SpottedHighlightcomponent;                         // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                 Name_PowerSwitch_C;                                // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                         AffectedActors;                                    // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	bool                                          Switched_;                                         // 0x0288(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();
	void BndEvt__PowerSwitch_HighlightOverlapper_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PowerSwitch_HighlightOverlapper_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__PowerSwitch_InteractComponent_K2Node_ComponentBoundEvent_2_Interact__DelegateSignature(class AActor* Player, class UPrimitiveComponent* HitComponent);
	void SwitchLeverServer();
	void SwitchLeverMulti();
	void ExecuteUbergraph_PowerSwitch(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PowerSwitch_C">();
	}
	static class APowerSwitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APowerSwitch_C>();
	}
};
static_assert(alignof(APowerSwitch_C) == 0x000008, "Wrong alignment on APowerSwitch_C");
static_assert(sizeof(APowerSwitch_C) == 0x000290, "Wrong size on APowerSwitch_C");
static_assert(offsetof(APowerSwitch_C, UberGraphFrame) == 0x000220, "Member 'APowerSwitch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, Instructioncomponent) == 0x000228, "Member 'APowerSwitch_C::Instructioncomponent' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, HighlightOverlapper) == 0x000230, "Member 'APowerSwitch_C::HighlightOverlapper' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, Lever) == 0x000238, "Member 'APowerSwitch_C::Lever' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, Box) == 0x000240, "Member 'APowerSwitch_C::Box' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, LookatInfoComponent) == 0x000248, "Member 'APowerSwitch_C::LookatInfoComponent' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, InteractComponent) == 0x000250, "Member 'APowerSwitch_C::InteractComponent' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, SpottedHighlightcomponent) == 0x000258, "Member 'APowerSwitch_C::SpottedHighlightcomponent' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, DefaultSceneRoot) == 0x000260, "Member 'APowerSwitch_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, Name_PowerSwitch_C) == 0x000268, "Member 'APowerSwitch_C::Name_PowerSwitch_C' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, AffectedActors) == 0x000278, "Member 'APowerSwitch_C::AffectedActors' has a wrong offset!");
static_assert(offsetof(APowerSwitch_C, Switched_) == 0x000288, "Member 'APowerSwitch_C::Switched_' has a wrong offset!");

}

