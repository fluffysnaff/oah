#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultDoor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function VaultDoor.VaultDoor_C.IsDoorOpenInterfaceCall
// 0x0001 (0x0001 - 0x0000)
struct VaultDoor_C_IsDoorOpenInterfaceCall final
{
public:
	bool                                          IsOpen_;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultDoor_C_IsDoorOpenInterfaceCall) == 0x000001, "Wrong alignment on VaultDoor_C_IsDoorOpenInterfaceCall");
static_assert(sizeof(VaultDoor_C_IsDoorOpenInterfaceCall) == 0x000001, "Wrong size on VaultDoor_C_IsDoorOpenInterfaceCall");
static_assert(offsetof(VaultDoor_C_IsDoorOpenInterfaceCall, IsOpen_) == 0x000000, "Member 'VaultDoor_C_IsDoorOpenInterfaceCall::IsOpen_' has a wrong offset!");

// Function VaultDoor.VaultDoor_C.TakeDamage
// 0x0004 (0x0004 - 0x0000)
struct VaultDoor_C_TakeDamage final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultDoor_C_TakeDamage) == 0x000004, "Wrong alignment on VaultDoor_C_TakeDamage");
static_assert(sizeof(VaultDoor_C_TakeDamage) == 0x000004, "Wrong size on VaultDoor_C_TakeDamage");
static_assert(offsetof(VaultDoor_C_TakeDamage, Amount) == 0x000000, "Member 'VaultDoor_C_TakeDamage::Amount' has a wrong offset!");

// Function VaultDoor.VaultDoor_C.ExecuteUbergraph_VaultDoor
// 0x0080 (0x0080 - 0x0000)
struct VaultDoor_C_ExecuteUbergraph_VaultDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMoveComponentAction                          Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_254C[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Amount;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_254D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UActorComponent*>                CallFunc_GetComponentsByTag_ReturnValue;           // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254E[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorComponent*                        CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInstructionInterface_C> K2Node_DynamicCast_AsInstruction_Interface;        // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_254F[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2550[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APoliceWaveSpawner_C*                   CallFunc_GetActorOfClass_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultDoor_C_ExecuteUbergraph_VaultDoor) == 0x000008, "Wrong alignment on VaultDoor_C_ExecuteUbergraph_VaultDoor");
static_assert(sizeof(VaultDoor_C_ExecuteUbergraph_VaultDoor) == 0x000080, "Wrong size on VaultDoor_C_ExecuteUbergraph_VaultDoor");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, EntryPoint) == 0x000000, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, Temp_int_Array_Index_Variable) == 0x000010, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, Temp_byte_Variable) == 0x000014, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, Temp_bool_IsClosed_Variable) == 0x000015, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, Temp_bool_Has_Been_Initd_Variable) == 0x000016, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, K2Node_CustomEvent_Amount) == 0x000018, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_GetComponentsByTag_ReturnValue) == 0x000028, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_Array_Get_Item) == 0x000040, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, K2Node_DynamicCast_AsInstruction_Interface) == 0x000048, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::K2Node_DynamicCast_AsInstruction_Interface' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_Greater_IntInt_ReturnValue) == 0x000069, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_GetActorOfClass_ReturnValue) == 0x000070, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultDoor_C_ExecuteUbergraph_VaultDoor, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000078, "Member 'VaultDoor_C_ExecuteUbergraph_VaultDoor::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

