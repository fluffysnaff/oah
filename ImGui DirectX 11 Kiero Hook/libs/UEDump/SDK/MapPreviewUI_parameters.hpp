#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapPreviewUI

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MapPreviewUI.MapPreviewUI_C.ExecuteUbergraph_MapPreviewUI
// 0x0090 (0x0090 - 0x0000)
struct MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapBuyUI_C*                            CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCoinShopUI_C*                          CallFunc_Create_ReturnValue_1;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_OpenedUrl;                      // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	TDelegate<void(const class FString& OpenedUrl)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OpenSource_ReturnValue;                   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI) == 0x000008, "Wrong alignment on MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI");
static_assert(sizeof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI) == 0x000090, "Wrong size on MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, EntryPoint) == 0x000000, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, CallFunc_Create_ReturnValue_1) == 0x000010, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, K2Node_CustomEvent_OpenedUrl) == 0x000018, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::K2Node_CustomEvent_OpenedUrl' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, K2Node_DynamicCast_AsRobber_Controller) == 0x000068, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, CallFunc_OpenSource_ReturnValue) == 0x000071, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::CallFunc_OpenSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, CallFunc_Conv_BoolToString_ReturnValue) == 0x000078, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000088, "Member 'MapPreviewUI_C_ExecuteUbergraph_MapPreviewUI::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MapPreviewUI.MapPreviewUI_C.MediaOpened
// 0x0010 (0x0010 - 0x0000)
struct MapPreviewUI_C_MediaOpened final
{
public:
	class FString                                 OpenedUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapPreviewUI_C_MediaOpened) == 0x000008, "Wrong alignment on MapPreviewUI_C_MediaOpened");
static_assert(sizeof(MapPreviewUI_C_MediaOpened) == 0x000010, "Wrong size on MapPreviewUI_C_MediaOpened");
static_assert(offsetof(MapPreviewUI_C_MediaOpened, OpenedUrl) == 0x000000, "Member 'MapPreviewUI_C_MediaOpened::OpenedUrl' has a wrong offset!");

// Function MapPreviewUI.MapPreviewUI_C.GetText_0
// 0x0030 (0x0030 - 0x0000)
struct MapPreviewUI_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(MapPreviewUI_C_GetText_0) == 0x000008, "Wrong alignment on MapPreviewUI_C_GetText_0");
static_assert(sizeof(MapPreviewUI_C_GetText_0) == 0x000030, "Wrong size on MapPreviewUI_C_GetText_0");
static_assert(offsetof(MapPreviewUI_C_GetText_0, ReturnValue) == 0x000000, "Member 'MapPreviewUI_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_GetText_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'MapPreviewUI_C_GetText_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function MapPreviewUI.MapPreviewUI_C.GetText_1
// 0x0040 (0x0040 - 0x0000)
struct MapPreviewUI_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(MapPreviewUI_C_GetText_1) == 0x000008, "Wrong alignment on MapPreviewUI_C_GetText_1");
static_assert(sizeof(MapPreviewUI_C_GetText_1) == 0x000040, "Wrong size on MapPreviewUI_C_GetText_1");
static_assert(offsetof(MapPreviewUI_C_GetText_1, ReturnValue) == 0x000000, "Member 'MapPreviewUI_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_GetText_1, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'MapPreviewUI_C_GetText_1::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPreviewUI_C_GetText_1, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'MapPreviewUI_C_GetText_1::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
