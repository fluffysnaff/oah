#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapSelectUIChild

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MapSelectUIChild.MapSelectUIChild_C.ExecuteUbergraph_MapSelectUIChild
// 0x0070 (0x0070 - 0x0000)
struct MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyManager_C*                        CallFunc_GetActorOfClass_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetRemoteConfigsValueAsString_ReturnValue; // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRemoteConfigsReady_ReturnValue;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_StringToFloat_ReturnValue;           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild) == 0x000008, "Wrong alignment on MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild");
static_assert(sizeof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild) == 0x000070, "Wrong size on MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, EntryPoint) == 0x000000, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_GetActorOfClass_ReturnValue) == 0x000018, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_HasAuthority_ReturnValue) == 0x000028, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_GetPlayerController_ReturnValue_1) == 0x000030, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, K2Node_DynamicCast_AsRobber_Controller) == 0x000038, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000041, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000042, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_BooleanAND_ReturnValue) == 0x000043, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, K2Node_Event_IsDesignTime) == 0x000044, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_GetRemoteConfigsValueAsString_ReturnValue) == 0x000048, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_GetRemoteConfigsValueAsString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_IsRemoteConfigsReady_ReturnValue) == 0x000058, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_IsRemoteConfigsReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_Conv_StringToFloat_ReturnValue) == 0x00005C, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_Conv_StringToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000064, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_FTrunc_ReturnValue) == 0x000068, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild, CallFunc_Subtract_IntInt_ReturnValue) == 0x00006C, "Member 'MapSelectUIChild_C_ExecuteUbergraph_MapSelectUIChild::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MapSelectUIChild_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapSelectUIChild_C_PreConstruct) == 0x000001, "Wrong alignment on MapSelectUIChild_C_PreConstruct");
static_assert(sizeof(MapSelectUIChild_C_PreConstruct) == 0x000001, "Wrong size on MapSelectUIChild_C_PreConstruct");
static_assert(offsetof(MapSelectUIChild_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MapSelectUIChild_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.GetText_0
// 0x0030 (0x0030 - 0x0000)
struct MapSelectUIChild_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(MapSelectUIChild_C_GetText_0) == 0x000008, "Wrong alignment on MapSelectUIChild_C_GetText_0");
static_assert(sizeof(MapSelectUIChild_C_GetText_0) == 0x000030, "Wrong size on MapSelectUIChild_C_GetText_0");
static_assert(offsetof(MapSelectUIChild_C_GetText_0, ReturnValue) == 0x000000, "Member 'MapSelectUIChild_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'MapSelectUIChild_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.GetBackground_0
// 0x0110 (0x0110 - 0x0000)
struct MapSelectUIChild_C_GetBackground_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0088(0x0088)()
};
static_assert(alignof(MapSelectUIChild_C_GetBackground_0) == 0x000008, "Wrong alignment on MapSelectUIChild_C_GetBackground_0");
static_assert(sizeof(MapSelectUIChild_C_GetBackground_0) == 0x000110, "Wrong size on MapSelectUIChild_C_GetBackground_0");
static_assert(offsetof(MapSelectUIChild_C_GetBackground_0, ReturnValue) == 0x000000, "Member 'MapSelectUIChild_C_GetBackground_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetBackground_0, K2Node_MakeStruct_SlateBrush) == 0x000088, "Member 'MapSelectUIChild_C_GetBackground_0::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.GetVisibility_0
// 0x0002 (0x0002 - 0x0000)
struct MapSelectUIChild_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapSelectUIChild_C_GetVisibility_0) == 0x000001, "Wrong alignment on MapSelectUIChild_C_GetVisibility_0");
static_assert(sizeof(MapSelectUIChild_C_GetVisibility_0) == 0x000002, "Wrong size on MapSelectUIChild_C_GetVisibility_0");
static_assert(offsetof(MapSelectUIChild_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'MapSelectUIChild_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetVisibility_0, CallFunc_Greater_IntInt_ReturnValue) == 0x000001, "Member 'MapSelectUIChild_C_GetVisibility_0::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.GetVisibility_1
// 0x0001 (0x0001 - 0x0000)
struct MapSelectUIChild_C_GetVisibility_1 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapSelectUIChild_C_GetVisibility_1) == 0x000001, "Wrong alignment on MapSelectUIChild_C_GetVisibility_1");
static_assert(sizeof(MapSelectUIChild_C_GetVisibility_1) == 0x000001, "Wrong size on MapSelectUIChild_C_GetVisibility_1");
static_assert(offsetof(MapSelectUIChild_C_GetVisibility_1, ReturnValue) == 0x000000, "Member 'MapSelectUIChild_C_GetVisibility_1::ReturnValue' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.GetText_1
// 0x0070 (0x0070 - 0x0000)
struct MapSelectUIChild_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
};
static_assert(alignof(MapSelectUIChild_C_GetText_1) == 0x000008, "Wrong alignment on MapSelectUIChild_C_GetText_1");
static_assert(sizeof(MapSelectUIChild_C_GetText_1) == 0x000070, "Wrong size on MapSelectUIChild_C_GetText_1");
static_assert(offsetof(MapSelectUIChild_C_GetText_1, ReturnValue) == 0x000000, "Member 'MapSelectUIChild_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetText_1, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'MapSelectUIChild_C_GetText_1::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetText_1, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000030, "Member 'MapSelectUIChild_C_GetText_1::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetText_1, CallFunc_Greater_IntInt_ReturnValue) == 0x000031, "Member 'MapSelectUIChild_C_GetText_1::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetText_1, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'MapSelectUIChild_C_GetText_1::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetText_1, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'MapSelectUIChild_C_GetText_1::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetText_1, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'MapSelectUIChild_C_GetText_1::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.Get_SaleOverlay_Visibility_0
// 0x0002 (0x0002 - 0x0000)
struct MapSelectUIChild_C_Get_SaleOverlay_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapSelectUIChild_C_Get_SaleOverlay_Visibility_0) == 0x000001, "Wrong alignment on MapSelectUIChild_C_Get_SaleOverlay_Visibility_0");
static_assert(sizeof(MapSelectUIChild_C_Get_SaleOverlay_Visibility_0) == 0x000002, "Wrong size on MapSelectUIChild_C_Get_SaleOverlay_Visibility_0");
static_assert(offsetof(MapSelectUIChild_C_Get_SaleOverlay_Visibility_0, ReturnValue) == 0x000000, "Member 'MapSelectUIChild_C_Get_SaleOverlay_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_Get_SaleOverlay_Visibility_0, CallFunc_Less_IntInt_ReturnValue) == 0x000001, "Member 'MapSelectUIChild_C_Get_SaleOverlay_Visibility_0::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.GetText_2
// 0x0030 (0x0030 - 0x0000)
struct MapSelectUIChild_C_GetText_2 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(MapSelectUIChild_C_GetText_2) == 0x000008, "Wrong alignment on MapSelectUIChild_C_GetText_2");
static_assert(sizeof(MapSelectUIChild_C_GetText_2) == 0x000030, "Wrong size on MapSelectUIChild_C_GetText_2");
static_assert(offsetof(MapSelectUIChild_C_GetText_2, ReturnValue) == 0x000000, "Member 'MapSelectUIChild_C_GetText_2::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_GetText_2, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'MapSelectUIChild_C_GetText_2::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function MapSelectUIChild.MapSelectUIChild_C.Get_SaleBannerBorder_Visibility_0
// 0x0002 (0x0002 - 0x0000)
struct MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0) == 0x000001, "Wrong alignment on MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0");
static_assert(sizeof(MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0) == 0x000002, "Wrong size on MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0");
static_assert(offsetof(MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0, ReturnValue) == 0x000000, "Member 'MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0, CallFunc_Less_IntInt_ReturnValue) == 0x000001, "Member 'MapSelectUIChild_C_Get_SaleBannerBorder_Visibility_0::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

