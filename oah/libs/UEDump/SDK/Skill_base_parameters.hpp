#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_base

#include "Basic.hpp"


namespace SDK::Params
{

// Function Skill_base.Skill_base_C.ExecuteUbergraph_Skill_base
// 0x0020 (0x0020 - 0x0000)
struct Skill_base_C_ExecuteUbergraph_Skill_base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter_C*                     K2Node_DynamicCast_AsPlayer_Character;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Skill_base_C_ExecuteUbergraph_Skill_base) == 0x000008, "Wrong alignment on Skill_base_C_ExecuteUbergraph_Skill_base");
static_assert(sizeof(Skill_base_C_ExecuteUbergraph_Skill_base) == 0x000020, "Wrong size on Skill_base_C_ExecuteUbergraph_Skill_base");
static_assert(offsetof(Skill_base_C_ExecuteUbergraph_Skill_base, EntryPoint) == 0x000000, "Member 'Skill_base_C_ExecuteUbergraph_Skill_base::EntryPoint' has a wrong offset!");
static_assert(offsetof(Skill_base_C_ExecuteUbergraph_Skill_base, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'Skill_base_C_ExecuteUbergraph_Skill_base::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_base_C_ExecuteUbergraph_Skill_base, K2Node_DynamicCast_AsPlayer_Character) == 0x000010, "Member 'Skill_base_C_ExecuteUbergraph_Skill_base::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(Skill_base_C_ExecuteUbergraph_Skill_base, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Skill_base_C_ExecuteUbergraph_Skill_base::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

