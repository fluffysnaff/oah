#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingImageUI

#include "Basic.hpp"


namespace SDK::Params
{

// Function LoadingImageUI.LoadingImageUI_C.ExecuteUbergraph_LoadingImageUI
// 0x0018 (0x0018 - 0x0000)
struct LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI) == 0x000008, "Wrong alignment on LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI");
static_assert(sizeof(LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI) == 0x000018, "Wrong size on LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI");
static_assert(offsetof(LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI, EntryPoint) == 0x000000, "Member 'LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'LoadingImageUI_C_ExecuteUbergraph_LoadingImageUI::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
