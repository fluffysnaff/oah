#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CivilianAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CivilianAnimBP.CivilianAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct CivilianAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(CivilianAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on CivilianAnimBP_C_AnimGraph");
static_assert(sizeof(CivilianAnimBP_C_AnimGraph) == 0x000010, "Wrong size on CivilianAnimBP_C_AnimGraph");
static_assert(offsetof(CivilianAnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'CivilianAnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function CivilianAnimBP.CivilianAnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct CivilianAnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CivilianAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on CivilianAnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(CivilianAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on CivilianAnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(CivilianAnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'CivilianAnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function CivilianAnimBP.CivilianAnimBP_C.PlayGesture
// 0x0010 (0x0010 - 0x0000)
struct CivilianAnimBP_C_PlayGesture final
{
public:
	class UAnimSequenceBase*                      Anim;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Loops_;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CivilianAnimBP_C_PlayGesture) == 0x000008, "Wrong alignment on CivilianAnimBP_C_PlayGesture");
static_assert(sizeof(CivilianAnimBP_C_PlayGesture) == 0x000010, "Wrong size on CivilianAnimBP_C_PlayGesture");
static_assert(offsetof(CivilianAnimBP_C_PlayGesture, Anim) == 0x000000, "Member 'CivilianAnimBP_C_PlayGesture::Anim' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_PlayGesture, Loops_) == 0x000008, "Member 'CivilianAnimBP_C_PlayGesture::Loops_' has a wrong offset!");

// Function CivilianAnimBP.CivilianAnimBP_C.ExecuteUbergraph_CivilianAnimBP
// 0x00F8 (0x00F8 - 0x0000)
struct CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAnimSequenceBase* Anim, bool Loops_)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACivilian_NPC_C*                        K2Node_DynamicCast_AsCivilian_NPC;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2407[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2408[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlayLength_ReturnValue;                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2409[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      K2Node_CustomEvent_Anim;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Loops_;                         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_240A[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue_1;                // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_240B[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_240C[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_2;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACivilian_NPC_C*                        K2Node_DynamicCast_AsCivilian_NPC_1;               // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP) == 0x000008, "Wrong alignment on CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP");
static_assert(sizeof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP) == 0x0000F8, "Wrong size on CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, EntryPoint) == 0x000000, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_Event_DeltaTimeX) == 0x000014, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000018, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_DynamicCast_AsCivilian_NPC) == 0x000020, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_DynamicCast_AsCivilian_NPC' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00003C, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_FindLookAtRotation_ReturnValue) == 0x000048, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_GetVelocity_ReturnValue) == 0x000054, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_GetActorRightVector_ReturnValue) == 0x000060, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_GetActorForwardVector_ReturnValue) == 0x00006C, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_Dot_VectorVector_ReturnValue) == 0x000078, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x00007C, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_GetPlayLength_ReturnValue) == 0x000080, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_GetPlayLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_BreakRotator_Roll) == 0x000084, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_BreakRotator_Pitch) == 0x000088, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_BreakRotator_Yaw) == 0x00008C, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_Add_FloatFloat_ReturnValue) == 0x000090, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_CustomEvent_Anim) == 0x000098, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_CustomEvent_Anim' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_CustomEvent_Loops_) == 0x0000A0, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_CustomEvent_Loops_' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_MakeRotator_ReturnValue) == 0x0000A4, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x0000B0, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_GetVelocity_ReturnValue_1) == 0x0000B8, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_GetVelocity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_VSize_ReturnValue) == 0x0000C4, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000C8, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, CallFunc_TryGetPawnOwner_ReturnValue_2) == 0x0000E0, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::CallFunc_TryGetPawnOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_DynamicCast_AsCivilian_NPC_1) == 0x0000E8, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_DynamicCast_AsCivilian_NPC_1' has a wrong offset!");
static_assert(offsetof(CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'CivilianAnimBP_C_ExecuteUbergraph_CivilianAnimBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

