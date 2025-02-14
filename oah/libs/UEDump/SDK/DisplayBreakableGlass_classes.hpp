#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisplayBreakableGlass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DisplayBreakableGlass.DisplayBreakableGlass_C
// 0x0068 (0x0288 - 0x0220)
class ADisplayBreakableGlass_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Glass;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara3;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara2;                                          // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara1;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlertComponent_C*                      AlertComponent;                                    // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent_C*                     DamageComponent;                                   // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BreakSound;                                        // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          TwoHitBreak_;                                      // 0x0268(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_25D7[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             GlassDestroyed;                                    // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Alarm_;                                            // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_25D8[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ParticleAmount;                                    // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void GlassDestroyed__DelegateSignature();
	void ExecuteUbergraph_DisplayBreakableGlass(int32 EntryPoint);
	void BreakGlass();
	void ForceDestroyGlass();
	void DamageGlass();
	void BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Param_Instigator);
	void SetShatteredMat();
	void DestroyGlassServer();
	void DestroyGlass();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DisplayBreakableGlass_C">();
	}
	static class ADisplayBreakableGlass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADisplayBreakableGlass_C>();
	}
};
static_assert(alignof(ADisplayBreakableGlass_C) == 0x000008, "Wrong alignment on ADisplayBreakableGlass_C");
static_assert(sizeof(ADisplayBreakableGlass_C) == 0x000288, "Wrong size on ADisplayBreakableGlass_C");
static_assert(offsetof(ADisplayBreakableGlass_C, UberGraphFrame) == 0x000220, "Member 'ADisplayBreakableGlass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, Glass) == 0x000228, "Member 'ADisplayBreakableGlass_C::Glass' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, Niagara3) == 0x000230, "Member 'ADisplayBreakableGlass_C::Niagara3' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, Niagara2) == 0x000238, "Member 'ADisplayBreakableGlass_C::Niagara2' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, Niagara1) == 0x000240, "Member 'ADisplayBreakableGlass_C::Niagara1' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, Niagara) == 0x000248, "Member 'ADisplayBreakableGlass_C::Niagara' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, AlertComponent) == 0x000250, "Member 'ADisplayBreakableGlass_C::AlertComponent' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, DamageComponent) == 0x000258, "Member 'ADisplayBreakableGlass_C::DamageComponent' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, BreakSound) == 0x000260, "Member 'ADisplayBreakableGlass_C::BreakSound' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, TwoHitBreak_) == 0x000268, "Member 'ADisplayBreakableGlass_C::TwoHitBreak_' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, GlassDestroyed) == 0x000270, "Member 'ADisplayBreakableGlass_C::GlassDestroyed' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, Alarm_) == 0x000280, "Member 'ADisplayBreakableGlass_C::Alarm_' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlass_C, ParticleAmount) == 0x000284, "Member 'ADisplayBreakableGlass_C::ParticleAmount' has a wrong offset!");

}

