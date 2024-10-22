#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryCategoryTitle

#include "Basic.hpp"


namespace SDK::Params
{

// Function InventoryCategoryTitle.InventoryCategoryTitle_C.ExecuteUbergraph_InventoryCategoryTitle
// 0x0018 (0x0018 - 0x0000)
struct InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle) == 0x000008, "Wrong alignment on InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle");
static_assert(sizeof(InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle) == 0x000018, "Wrong size on InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle");
static_assert(offsetof(InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle, EntryPoint) == 0x000000, "Member 'InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'InventoryCategoryTitle_C_ExecuteUbergraph_InventoryCategoryTitle::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function InventoryCategoryTitle.InventoryCategoryTitle_C.GetText_0
// 0x0040 (0x0040 - 0x0000)
struct InventoryCategoryTitle_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(InventoryCategoryTitle_C_GetText_0) == 0x000008, "Wrong alignment on InventoryCategoryTitle_C_GetText_0");
static_assert(sizeof(InventoryCategoryTitle_C_GetText_0) == 0x000040, "Wrong size on InventoryCategoryTitle_C_GetText_0");
static_assert(offsetof(InventoryCategoryTitle_C_GetText_0, ReturnValue) == 0x000000, "Member 'InventoryCategoryTitle_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryCategoryTitle_C_GetText_0, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'InventoryCategoryTitle_C_GetText_0::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(InventoryCategoryTitle_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'InventoryCategoryTitle_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

