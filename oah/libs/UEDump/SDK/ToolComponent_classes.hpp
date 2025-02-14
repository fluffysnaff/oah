#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToolComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ToolComponent.ToolComponent_C
// 0x0048 (0x00F8 - 0x00B0)
class UToolComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             ActivateTool;                                      // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             DeactivateTool;                                    // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AToolSpot_C*                            ToolSpot;                                          // 0x00D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DroppedWhenReleased_;                              // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          AutoActivateTool_;                                 // 0x00E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_E2[0x2];                                       // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ToolDamage;                                        // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          PickedUp_;                                         // 0x00E8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UToolprogressUI_C*                      ToolUI;                                            // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateTool__DelegateSignature();
	void DeactivateTool__DelegateSignature();
	void ExecuteUbergraph_ToolComponent(int32 EntryPoint);
	void Detach_tool();
	void AttachTool();
	void SetPickedUp(class AActor* Player, const struct FVector& Pickuplocation, const struct FRotator& PickupRotation, const struct FVector& HitLocation);
	void ReleaseFromSpot(class AActor* Player);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToolComponent_C">();
	}
	static class UToolComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToolComponent_C>();
	}
};
static_assert(alignof(UToolComponent_C) == 0x000008, "Wrong alignment on UToolComponent_C");
static_assert(sizeof(UToolComponent_C) == 0x0000F8, "Wrong size on UToolComponent_C");
static_assert(offsetof(UToolComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UToolComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToolComponent_C, ActivateTool) == 0x0000B8, "Member 'UToolComponent_C::ActivateTool' has a wrong offset!");
static_assert(offsetof(UToolComponent_C, DeactivateTool) == 0x0000C8, "Member 'UToolComponent_C::DeactivateTool' has a wrong offset!");
static_assert(offsetof(UToolComponent_C, ToolSpot) == 0x0000D8, "Member 'UToolComponent_C::ToolSpot' has a wrong offset!");
static_assert(offsetof(UToolComponent_C, DroppedWhenReleased_) == 0x0000E0, "Member 'UToolComponent_C::DroppedWhenReleased_' has a wrong offset!");
static_assert(offsetof(UToolComponent_C, AutoActivateTool_) == 0x0000E1, "Member 'UToolComponent_C::AutoActivateTool_' has a wrong offset!");
static_assert(offsetof(UToolComponent_C, ToolDamage) == 0x0000E4, "Member 'UToolComponent_C::ToolDamage' has a wrong offset!");
static_assert(offsetof(UToolComponent_C, PickedUp_) == 0x0000E8, "Member 'UToolComponent_C::PickedUp_' has a wrong offset!");
static_assert(offsetof(UToolComponent_C, ToolUI) == 0x0000F0, "Member 'UToolComponent_C::ToolUI' has a wrong offset!");

}

