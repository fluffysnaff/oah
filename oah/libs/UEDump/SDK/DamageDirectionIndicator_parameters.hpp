#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DamageDirectionIndicator

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DamageDirectionIndicator.DamageDirectionIndicator_C.ExecuteUbergraph_DamageDirectionIndicator
// 0x0088 (0x0088 - 0x0000)
struct DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator) == 0x000008, "Wrong alignment on DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator");
static_assert(sizeof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator) == 0x000088, "Wrong size on DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, EntryPoint) == 0x000000, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, K2Node_Event_MyGeometry) == 0x000004, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_GetControlRotation_ReturnValue) == 0x000054, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_FindLookAtRotation_ReturnValue) == 0x000060, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_BreakRotator_Roll) == 0x00006C, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_BreakRotator_Pitch) == 0x000070, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_BreakRotator_Yaw) == 0x000074, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_BreakRotator_Roll_1) == 0x000078, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_BreakRotator_Pitch_1) == 0x00007C, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_BreakRotator_Yaw_1) == 0x000080, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000084, "Member 'DamageDirectionIndicator_C_ExecuteUbergraph_DamageDirectionIndicator::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function DamageDirectionIndicator.DamageDirectionIndicator_C.Tick
// 0x003C (0x003C - 0x0000)
struct DamageDirectionIndicator_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DamageDirectionIndicator_C_Tick) == 0x000004, "Wrong alignment on DamageDirectionIndicator_C_Tick");
static_assert(sizeof(DamageDirectionIndicator_C_Tick) == 0x00003C, "Wrong size on DamageDirectionIndicator_C_Tick");
static_assert(offsetof(DamageDirectionIndicator_C_Tick, MyGeometry) == 0x000000, "Member 'DamageDirectionIndicator_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(DamageDirectionIndicator_C_Tick, InDeltaTime) == 0x000038, "Member 'DamageDirectionIndicator_C_Tick::InDeltaTime' has a wrong offset!");

}
