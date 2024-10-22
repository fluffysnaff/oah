#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToolSpot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ToolSpot.ToolSpot_C.ExecuteUbergraph_ToolSpot
// 0x0188 (0x0188 - 0x0000)
struct ToolSpot_C_ExecuteUbergraph_ToolSpot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount_1;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UToolComponent_C*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Actor;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_Component;                      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Player;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UToolComponent_C*                       CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UToolOwnerComponent_C*                  CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActorBeingDestroyed_ReturnValue;        // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UToolComponent_C*                       CallFunc_GetComponentByClass_ReturnValue_4;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00C0(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UToolComponent_C*                       CallFunc_GetComponentByClass_ReturnValue_5;        // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B[0x1];                                      // 0x015B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_GetGrabbedComponent_ReturnValue;          // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToolSpot_C_ExecuteUbergraph_ToolSpot) == 0x000008, "Wrong alignment on ToolSpot_C_ExecuteUbergraph_ToolSpot");
static_assert(sizeof(ToolSpot_C_ExecuteUbergraph_ToolSpot) == 0x000188, "Wrong size on ToolSpot_C_ExecuteUbergraph_ToolSpot");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, EntryPoint) == 0x000000, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::EntryPoint' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_CustomEvent_Amount_1) == 0x000004, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_CustomEvent_Amount_1' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_Event_OtherActor) == 0x000018, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_CustomEvent_Amount) == 0x000020, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000028, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetParentActor_ReturnValue) == 0x000030, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_CustomEvent_Actor) == 0x000038, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_CustomEvent_Actor' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_CustomEvent_Component) == 0x000040, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_CustomEvent_Component' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_CustomEvent_Player) == 0x000048, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000060, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000068, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000078, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000080, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_Greater_IntInt_ReturnValue) == 0x000089, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsValid_ReturnValue_2) == 0x00008A, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsValid_ReturnValue_3) == 0x00008B, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsActorBeingDestroyed_ReturnValue) == 0x00008C, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsActorBeingDestroyed_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetComponentByClass_ReturnValue_4) == 0x000090, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsValid_ReturnValue_4) == 0x000098, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000A0, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_ComponentBoundEvent_OtherActor) == 0x0000A8, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_ComponentBoundEvent_OtherComp) == 0x0000B0, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000B8, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000BC, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, K2Node_ComponentBoundEvent_SweepResult) == 0x0000C0, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetOwner_ReturnValue_1) == 0x000148, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetComponentByClass_ReturnValue_5) == 0x000150, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetComponentByClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsValid_ReturnValue_5) == 0x000158, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_DoesImplementInterface_ReturnValue) == 0x000159, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsValid_ReturnValue_6) == 0x00015A, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x00015C, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetGrabbedComponent_ReturnValue) == 0x000168, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetGrabbedComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_IsValid_ReturnValue_7) == 0x000170, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_GetOwner_ReturnValue_2) == 0x000178, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_ExecuteUbergraph_ToolSpot, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000180, "Member 'ToolSpot_C_ExecuteUbergraph_ToolSpot::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function ToolSpot.ToolSpot_C.AttachToolServer
// 0x0018 (0x0018 - 0x0000)
struct ToolSpot_C_AttachToolServer final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Player;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToolSpot_C_AttachToolServer) == 0x000008, "Wrong alignment on ToolSpot_C_AttachToolServer");
static_assert(sizeof(ToolSpot_C_AttachToolServer) == 0x000018, "Wrong size on ToolSpot_C_AttachToolServer");
static_assert(offsetof(ToolSpot_C_AttachToolServer, Actor) == 0x000000, "Member 'ToolSpot_C_AttachToolServer::Actor' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_AttachToolServer, Component) == 0x000008, "Member 'ToolSpot_C_AttachToolServer::Component' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_AttachToolServer, Player) == 0x000010, "Member 'ToolSpot_C_AttachToolServer::Player' has a wrong offset!");

// Function ToolSpot.ToolSpot_C.LooseInstantHealth
// 0x0004 (0x0004 - 0x0000)
struct ToolSpot_C_LooseInstantHealth final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToolSpot_C_LooseInstantHealth) == 0x000004, "Wrong alignment on ToolSpot_C_LooseInstantHealth");
static_assert(sizeof(ToolSpot_C_LooseInstantHealth) == 0x000004, "Wrong size on ToolSpot_C_LooseInstantHealth");
static_assert(offsetof(ToolSpot_C_LooseInstantHealth, Amount) == 0x000000, "Member 'ToolSpot_C_LooseInstantHealth::Amount' has a wrong offset!");

// Function ToolSpot.ToolSpot_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct ToolSpot_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToolSpot_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on ToolSpot_C_ReceiveActorEndOverlap");
static_assert(sizeof(ToolSpot_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on ToolSpot_C_ReceiveActorEndOverlap");
static_assert(offsetof(ToolSpot_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'ToolSpot_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function ToolSpot.ToolSpot_C.LooseHealth
// 0x0004 (0x0004 - 0x0000)
struct ToolSpot_C_LooseHealth final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToolSpot_C_LooseHealth) == 0x000004, "Wrong alignment on ToolSpot_C_LooseHealth");
static_assert(sizeof(ToolSpot_C_LooseHealth) == 0x000004, "Wrong size on ToolSpot_C_LooseHealth");
static_assert(offsetof(ToolSpot_C_LooseHealth, Amount) == 0x000000, "Member 'ToolSpot_C_LooseHealth::Amount' has a wrong offset!");

// Function ToolSpot.ToolSpot_C.BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'ToolSpot_C_BndEvt__DrillSpot_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function ToolSpot.ToolSpot_C.GivePlayerImmunity
// 0x0018 (0x0018 - 0x0000)
struct ToolSpot_C_GivePlayerImmunity final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToolSpot_C_GivePlayerImmunity) == 0x000008, "Wrong alignment on ToolSpot_C_GivePlayerImmunity");
static_assert(sizeof(ToolSpot_C_GivePlayerImmunity) == 0x000018, "Wrong size on ToolSpot_C_GivePlayerImmunity");
static_assert(offsetof(ToolSpot_C_GivePlayerImmunity, Player) == 0x000000, "Member 'ToolSpot_C_GivePlayerImmunity::Player' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_GivePlayerImmunity, K2Node_DynamicCast_AsPlayer_Character) == 0x000008, "Member 'ToolSpot_C_GivePlayerImmunity::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_GivePlayerImmunity, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ToolSpot_C_GivePlayerImmunity::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_GivePlayerImmunity, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000011, "Member 'ToolSpot_C_GivePlayerImmunity::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToolSpot_C_GivePlayerImmunity, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000012, "Member 'ToolSpot_C_GivePlayerImmunity::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

