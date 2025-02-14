#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Civilian_NPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ClothingColorStruct_structs.hpp"
#include "NPCBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Civilian_NPC.Civilian_NPC_C
// 0x0190 (0x06D0 - 0x0540)
class ACivilian_NPC_C final : public ANPCBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Civilian_NPC_C;                     // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInteractComponent_C*                   InteractComponent;                                 // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULookatInfoComponent_C*                 LookatInfoComponent;                               // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAlertComponent_C*                      AlertComponent;                                    // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPickupItemComponent_C*                 PickupItemComponent;                               // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHeavyPickupComponent_C*                RagdollPickupComponent;                            // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotPlayerComponent_C*                 SpotPlayerComponent;                               // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HairActor;                                         // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ShoeActor;                                         // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   PantsActor;                                        // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ShirtActor;                                        // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpottedHighlightcomponent_C*           SpottedHighlightcomponent;                         // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       LookAtOverlapper;                                  // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HairMesh;                                          // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPawnNoiseEmitterComponent*             PawnNoiseEmitter;                                  // 0x05B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPawnSensingComponent*                  PawnSensing;                                       // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtLerpTimeline_Alpha_7E6FDB694CE6CDCE12BD11979A8724AB; // 0x05C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LookAtLerpTimeline__Direction_7E6FDB694CE6CDCE12BD11979A8724AB; // 0x05C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25DE[0x3];                                     // 0x05C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LookAtLerpTimeline;                                // 0x05C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Scared_;                                           // 0x05D0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25DF[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     SkinColor;                                         // 0x05D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             HairColors;                                        // 0x05E0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class UStaticMesh*>                    Hairs;                                             // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 LookAtTarget;                                      // 0x0600(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         LookatLerp;                                        // 0x0608(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25E0[0x4];                                     // 0x060C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         ShirtActors;                                       // 0x0610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         PantsActors;                                       // 0x0620(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         ShoeActors;                                        // 0x0630(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         HairActors;                                        // 0x0640(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FClothingColorStruct                   SkinColorMap;                                      // 0x0650(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Alerted_;                                          // 0x06A8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25E1[0x7];                                     // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ANPCBase_C*                             Foundbody;                                         // 0x06B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          DoingAction;                                       // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         ActionDelay;                                       // 0x06C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SensePlayer;                                       // 0x06C4(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Civilian_NPC(int32 EntryPoint);
	void ScreamSound();
	void NoLookatInfo();
	void TiedUpName();
	void BndEvt__Civilian_NPC_InteractComponent_K2Node_ComponentBoundEvent_4_Interact__DelegateSignature(class AActor* Player, class UPrimitiveComponent* HitComponent);
	void SetTieUpName();
	void AlarmTriggeredInterfaceCall();
	void Flee();
	void StopScared();
	void StartScared();
	void NPCPanic();
	void ReceiveTick(float DeltaSeconds);
	void PlayGesture();
	void Flee_and_call_police();
	void InvestigateBody(class AActor* Actor);
	void RunToGuard();
	void BndEvt__Civilian_NPC_SpotPlayerComponent_K2Node_ComponentBoundEvent_5_PlayerSpotted__DelegateSignature(class APawn* Player);
	void ApplySkinColor();
	void StopLookat();
	void BndEvt__Civilian_NPC_LookAtOverlapper_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void LookatRandom(class AActor* Player);
	void BndEvt__Civilian_NPC_LookAtOverlapper_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ApplyCustomClothes();
	void BndEvt__Civilian_NPC_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void AddCivDeath();
	void CountCivDeath(class AActor* Player);
	void HeardGunShot(const struct FVector& Location);
	void BndEvt__Civilian_NPC_PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature(class APawn* Param_Instigator, const struct FVector& Location, float Volume);
	void ReceiveBeginPlay();
	void AlarmDisabledInterfaceCall();
	void OnSuccess_ED6E983D4F8D5F0B0E79539D18AC2272(EPathFollowingResult MovementResult);
	void OnFail_ED6E983D4F8D5F0B0E79539D18AC2272(EPathFollowingResult MovementResult);
	void OnSuccess_D84C01D946AEBB0D80E9D6A29DB838C1(EPathFollowingResult MovementResult);
	void OnFail_D84C01D946AEBB0D80E9D6A29DB838C1(EPathFollowingResult MovementResult);
	void OnSuccess_253B24DB4AC4E3022768908B4F1852E2(EPathFollowingResult MovementResult);
	void OnFail_253B24DB4AC4E3022768908B4F1852E2(EPathFollowingResult MovementResult);
	void OnSuccess_9D9A21074AE744D8EB7187B9E0A4214A(EPathFollowingResult MovementResult);
	void OnFail_9D9A21074AE744D8EB7187B9E0A4214A(EPathFollowingResult MovementResult);
	void OnSuccess_028BD1D543F164B114F85EA392220E46(EPathFollowingResult MovementResult);
	void OnFail_028BD1D543F164B114F85EA392220E46(EPathFollowingResult MovementResult);
	void OnSuccess_ADA465484744211FB3644EA93E56FD9D(EPathFollowingResult MovementResult);
	void OnFail_ADA465484744211FB3644EA93E56FD9D(EPathFollowingResult MovementResult);
	void LookAtLerpTimeline__UpdateFunc();
	void LookAtLerpTimeline__FinishedFunc();
	void Select_And_Set_Random_Clothes_and_Color(class USkeletalMeshComponent* Param_Mesh, TArray<class USkeletalMesh*>& Mesh_options, TArray<class UMaterialInterface*>& MatsOptions, class USkeletalMesh** SkeletalMeshOut, class UMaterialInterface** MatOut);
	void SetMeshAndColor(class USkeletalMeshComponent* MeshComponent, class USkeletalMesh* SkeletalMesh, class UMaterialInterface* Material);
	void SetSkinColor();
	void SelectAndSetRandomStaticMesh(class UStaticMeshComponent* Param_Mesh, TArray<class UStaticMesh*>& MeshOptions, TArray<class UMaterialInterface*>& MaterialOptions, class UStaticMesh** SelectedMesh, class UMaterialInterface** SelectedMat);
	void SetStaticMeshAndColor(class UStaticMeshComponent* MeshComp, class UStaticMesh* Param_Mesh, class UMaterialInterface* Mat);
	void SelectSkinColorRNG();
	void OnRep_SkinColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Civilian_NPC_C">();
	}
	static class ACivilian_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACivilian_NPC_C>();
	}
};
static_assert(alignof(ACivilian_NPC_C) == 0x000010, "Wrong alignment on ACivilian_NPC_C");
static_assert(sizeof(ACivilian_NPC_C) == 0x0006D0, "Wrong size on ACivilian_NPC_C");
static_assert(offsetof(ACivilian_NPC_C, UberGraphFrame_Civilian_NPC_C) == 0x000540, "Member 'ACivilian_NPC_C::UberGraphFrame_Civilian_NPC_C' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, InteractComponent) == 0x000548, "Member 'ACivilian_NPC_C::InteractComponent' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, LookatInfoComponent) == 0x000550, "Member 'ACivilian_NPC_C::LookatInfoComponent' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, AlertComponent) == 0x000558, "Member 'ACivilian_NPC_C::AlertComponent' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, PickupItemComponent) == 0x000560, "Member 'ACivilian_NPC_C::PickupItemComponent' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, RagdollPickupComponent) == 0x000568, "Member 'ACivilian_NPC_C::RagdollPickupComponent' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, SpotPlayerComponent) == 0x000570, "Member 'ACivilian_NPC_C::SpotPlayerComponent' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, HairActor) == 0x000578, "Member 'ACivilian_NPC_C::HairActor' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, ShoeActor) == 0x000580, "Member 'ACivilian_NPC_C::ShoeActor' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, PantsActor) == 0x000588, "Member 'ACivilian_NPC_C::PantsActor' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, ShirtActor) == 0x000590, "Member 'ACivilian_NPC_C::ShirtActor' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, SpottedHighlightcomponent) == 0x000598, "Member 'ACivilian_NPC_C::SpottedHighlightcomponent' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, LookAtOverlapper) == 0x0005A0, "Member 'ACivilian_NPC_C::LookAtOverlapper' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, HairMesh) == 0x0005A8, "Member 'ACivilian_NPC_C::HairMesh' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, PawnNoiseEmitter) == 0x0005B0, "Member 'ACivilian_NPC_C::PawnNoiseEmitter' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, PawnSensing) == 0x0005B8, "Member 'ACivilian_NPC_C::PawnSensing' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, LookAtLerpTimeline_Alpha_7E6FDB694CE6CDCE12BD11979A8724AB) == 0x0005C0, "Member 'ACivilian_NPC_C::LookAtLerpTimeline_Alpha_7E6FDB694CE6CDCE12BD11979A8724AB' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, LookAtLerpTimeline__Direction_7E6FDB694CE6CDCE12BD11979A8724AB) == 0x0005C4, "Member 'ACivilian_NPC_C::LookAtLerpTimeline__Direction_7E6FDB694CE6CDCE12BD11979A8724AB' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, LookAtLerpTimeline) == 0x0005C8, "Member 'ACivilian_NPC_C::LookAtLerpTimeline' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, Scared_) == 0x0005D0, "Member 'ACivilian_NPC_C::Scared_' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, SkinColor) == 0x0005D8, "Member 'ACivilian_NPC_C::SkinColor' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, HairColors) == 0x0005E0, "Member 'ACivilian_NPC_C::HairColors' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, Hairs) == 0x0005F0, "Member 'ACivilian_NPC_C::Hairs' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, LookAtTarget) == 0x000600, "Member 'ACivilian_NPC_C::LookAtTarget' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, LookatLerp) == 0x000608, "Member 'ACivilian_NPC_C::LookatLerp' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, ShirtActors) == 0x000610, "Member 'ACivilian_NPC_C::ShirtActors' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, PantsActors) == 0x000620, "Member 'ACivilian_NPC_C::PantsActors' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, ShoeActors) == 0x000630, "Member 'ACivilian_NPC_C::ShoeActors' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, HairActors) == 0x000640, "Member 'ACivilian_NPC_C::HairActors' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, SkinColorMap) == 0x000650, "Member 'ACivilian_NPC_C::SkinColorMap' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, Alerted_) == 0x0006A8, "Member 'ACivilian_NPC_C::Alerted_' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, Foundbody) == 0x0006B0, "Member 'ACivilian_NPC_C::Foundbody' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, DoingAction) == 0x0006B8, "Member 'ACivilian_NPC_C::DoingAction' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, ActionDelay) == 0x0006C0, "Member 'ACivilian_NPC_C::ActionDelay' has a wrong offset!");
static_assert(offsetof(ACivilian_NPC_C, SensePlayer) == 0x0006C4, "Member 'ACivilian_NPC_C::SensePlayer' has a wrong offset!");

}

