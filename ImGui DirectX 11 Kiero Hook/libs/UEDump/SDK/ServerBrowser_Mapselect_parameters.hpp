#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerBrowser_Mapselect

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SteamCore_structs.hpp"


namespace SDK::Params
{

// Function ServerBrowser_Mapselect.ServerBrowser_Mapselect_C.ExecuteUbergraph_ServerBrowser_Mapselect
// 0x0090 (0x0090 - 0x0000)
struct ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFindingSessionUI_C*                    CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamID                               CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetLobbyData_ReturnValue;                 // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALobbyManager_C*                        CallFunc_GetActorOfClass_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARobberController_C*                    K2Node_DynamicCast_AsRobber_Controller;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect) == 0x000008, "Wrong alignment on ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect");
static_assert(sizeof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect) == 0x000090, "Wrong size on ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, EntryPoint) == 0x000000, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::EntryPoint' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, Temp_int_Variable) == 0x000010, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_Array_Get_Item) == 0x000018, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_GetLobbyData_ReturnValue) == 0x000020, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_GetLobbyData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000034, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_GetActorOfClass_ReturnValue) == 0x000040, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_HasAuthority_ReturnValue) == 0x000050, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000051, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_GetPlayerController_ReturnValue_1) == 0x000058, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, K2Node_DynamicCast_AsRobber_Controller) == 0x000060, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::K2Node_DynamicCast_AsRobber_Controller' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000069, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_BooleanAND_ReturnValue) == 0x00006A, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_Array_Contains_ReturnValue) == 0x00006B, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_BooleanOR_ReturnValue) == 0x00006C, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect, CallFunc_PlayAnimation_ReturnValue_1) == 0x000088, "Member 'ServerBrowser_Mapselect_C_ExecuteUbergraph_ServerBrowser_Mapselect::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function ServerBrowser_Mapselect.ServerBrowser_Mapselect_C.GetBackground_0
// 0x0110 (0x0110 - 0x0000)
struct ServerBrowser_Mapselect_C_GetBackground_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0088(0x0088)()
};
static_assert(alignof(ServerBrowser_Mapselect_C_GetBackground_0) == 0x000008, "Wrong alignment on ServerBrowser_Mapselect_C_GetBackground_0");
static_assert(sizeof(ServerBrowser_Mapselect_C_GetBackground_0) == 0x000110, "Wrong size on ServerBrowser_Mapselect_C_GetBackground_0");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetBackground_0, ReturnValue) == 0x000000, "Member 'ServerBrowser_Mapselect_C_GetBackground_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetBackground_0, K2Node_MakeStruct_SlateBrush) == 0x000088, "Member 'ServerBrowser_Mapselect_C_GetBackground_0::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function ServerBrowser_Mapselect.ServerBrowser_Mapselect_C.GetText_0
// 0x0030 (0x0030 - 0x0000)
struct ServerBrowser_Mapselect_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(ServerBrowser_Mapselect_C_GetText_0) == 0x000008, "Wrong alignment on ServerBrowser_Mapselect_C_GetText_0");
static_assert(sizeof(ServerBrowser_Mapselect_C_GetText_0) == 0x000030, "Wrong size on ServerBrowser_Mapselect_C_GetText_0");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetText_0, ReturnValue) == 0x000000, "Member 'ServerBrowser_Mapselect_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ServerBrowser_Mapselect_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ServerBrowser_Mapselect.ServerBrowser_Mapselect_C.GetText_1
// 0x0050 (0x0050 - 0x0000)
struct ServerBrowser_Mapselect_C_GetText_1 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(ServerBrowser_Mapselect_C_GetText_1) == 0x000008, "Wrong alignment on ServerBrowser_Mapselect_C_GetText_1");
static_assert(sizeof(ServerBrowser_Mapselect_C_GetText_1) == 0x000050, "Wrong size on ServerBrowser_Mapselect_C_GetText_1");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetText_1, ReturnValue) == 0x000000, "Member 'ServerBrowser_Mapselect_C_GetText_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetText_1, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'ServerBrowser_Mapselect_C_GetText_1::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetText_1, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'ServerBrowser_Mapselect_C_GetText_1::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetText_1, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'ServerBrowser_Mapselect_C_GetText_1::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ServerBrowser_Mapselect.ServerBrowser_Mapselect_C.GetVisibility_0
// 0x0001 (0x0001 - 0x0000)
struct ServerBrowser_Mapselect_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ServerBrowser_Mapselect_C_GetVisibility_0) == 0x000001, "Wrong alignment on ServerBrowser_Mapselect_C_GetVisibility_0");
static_assert(sizeof(ServerBrowser_Mapselect_C_GetVisibility_0) == 0x000001, "Wrong size on ServerBrowser_Mapselect_C_GetVisibility_0");
static_assert(offsetof(ServerBrowser_Mapselect_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'ServerBrowser_Mapselect_C_GetVisibility_0::ReturnValue' has a wrong offset!");

}
