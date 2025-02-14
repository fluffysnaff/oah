#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopCategoryTab

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ShopItemCategory_structs.hpp"


namespace SDK::Params
{

// Function ShopCategoryTab.ShopCategoryTab_C.ExecuteUbergraph_ShopCategoryTab
// 0x0100 (0x0100 - 0x0000)
struct ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemCategory                             K2Node_Event_Category_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Event_ItemInfo;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SalePrice;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMenuUIInteraface_C>   K2Node_DynamicCast_AsMenu_UIInteraface;            // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EShopItemCategory                             K2Node_Event_Category;                             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0068(0x0088)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab) == 0x000008, "Wrong alignment on ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab");
static_assert(sizeof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab) == 0x000100, "Wrong size on ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, EntryPoint) == 0x000000, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, K2Node_Event_Category_1) == 0x000008, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::K2Node_Event_Category_1' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, K2Node_Event_ItemInfo) == 0x000010, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::K2Node_Event_ItemInfo' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, K2Node_Event_SalePrice) == 0x000018, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::K2Node_Event_SalePrice' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, CallFunc_GetAllWidgetsWithInterface_FoundWidgets) == 0x000020, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::CallFunc_GetAllWidgetsWithInterface_FoundWidgets' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, CallFunc_Array_Get_Item) == 0x000030, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, K2Node_DynamicCast_AsMenu_UIInteraface) == 0x000040, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::K2Node_DynamicCast_AsMenu_UIInteraface' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, K2Node_Event_Category) == 0x000051, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::K2Node_Event_Category' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, K2Node_MakeStruct_Margin) == 0x000054, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, K2Node_MakeStruct_SlateBrush) == 0x000068, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F0, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, Temp_int_Loop_Counter_Variable) == 0x0000F4, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab, CallFunc_Add_IntInt_ReturnValue) == 0x0000FC, "Member 'ShopCategoryTab_C_ExecuteUbergraph_ShopCategoryTab::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ShopCategoryTab.ShopCategoryTab_C.ChangeCategory
// 0x0001 (0x0001 - 0x0000)
struct ShopCategoryTab_C_ChangeCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopCategoryTab_C_ChangeCategory) == 0x000001, "Wrong alignment on ShopCategoryTab_C_ChangeCategory");
static_assert(sizeof(ShopCategoryTab_C_ChangeCategory) == 0x000001, "Wrong size on ShopCategoryTab_C_ChangeCategory");
static_assert(offsetof(ShopCategoryTab_C_ChangeCategory, Category) == 0x000000, "Member 'ShopCategoryTab_C_ChangeCategory::Category' has a wrong offset!");

// Function ShopCategoryTab.ShopCategoryTab_C.PreviewItem
// 0x0010 (0x0010 - 0x0000)
struct ShopCategoryTab_C_PreviewItem final
{
public:
	class UClass*                                 ItemInfo;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SalePrice;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopCategoryTab_C_PreviewItem) == 0x000008, "Wrong alignment on ShopCategoryTab_C_PreviewItem");
static_assert(sizeof(ShopCategoryTab_C_PreviewItem) == 0x000010, "Wrong size on ShopCategoryTab_C_PreviewItem");
static_assert(offsetof(ShopCategoryTab_C_PreviewItem, ItemInfo) == 0x000000, "Member 'ShopCategoryTab_C_PreviewItem::ItemInfo' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_PreviewItem, SalePrice) == 0x000008, "Member 'ShopCategoryTab_C_PreviewItem::SalePrice' has a wrong offset!");

// Function ShopCategoryTab.ShopCategoryTab_C.DragItemFromCategory
// 0x0001 (0x0001 - 0x0000)
struct ShopCategoryTab_C_DragItemFromCategory final
{
public:
	EShopItemCategory                             Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopCategoryTab_C_DragItemFromCategory) == 0x000001, "Wrong alignment on ShopCategoryTab_C_DragItemFromCategory");
static_assert(sizeof(ShopCategoryTab_C_DragItemFromCategory) == 0x000001, "Wrong size on ShopCategoryTab_C_DragItemFromCategory");
static_assert(offsetof(ShopCategoryTab_C_DragItemFromCategory, Category) == 0x000000, "Member 'ShopCategoryTab_C_DragItemFromCategory::Category' has a wrong offset!");

// Function ShopCategoryTab.ShopCategoryTab_C.GetText_0
// 0x0040 (0x0040 - 0x0000)
struct ShopCategoryTab_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(ShopCategoryTab_C_GetText_0) == 0x000008, "Wrong alignment on ShopCategoryTab_C_GetText_0");
static_assert(sizeof(ShopCategoryTab_C_GetText_0) == 0x000040, "Wrong size on ShopCategoryTab_C_GetText_0");
static_assert(offsetof(ShopCategoryTab_C_GetText_0, ReturnValue) == 0x000000, "Member 'ShopCategoryTab_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetText_0, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'ShopCategoryTab_C_GetText_0::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'ShopCategoryTab_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ShopCategoryTab.ShopCategoryTab_C.GetBrush_0
// 0x01A0 (0x01A0 - 0x0000)
struct ShopCategoryTab_C_GetBrush_0 final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	EShopItemCategory                             Temp_byte_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_2;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_3;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_4;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_5;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_6;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_7;                            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_8;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_9;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_10;                           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_11;                           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_12;                           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_13;                           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_14;                           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_15;                           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default;                             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0118(0x0088)()
};
static_assert(alignof(ShopCategoryTab_C_GetBrush_0) == 0x000008, "Wrong alignment on ShopCategoryTab_C_GetBrush_0");
static_assert(sizeof(ShopCategoryTab_C_GetBrush_0) == 0x0001A0, "Wrong size on ShopCategoryTab_C_GetBrush_0");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, ReturnValue) == 0x000000, "Member 'ShopCategoryTab_C_GetBrush_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_byte_Variable) == 0x000088, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable) == 0x000090, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_1) == 0x000098, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_2) == 0x0000A0, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_3) == 0x0000A8, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_4) == 0x0000B0, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_5) == 0x0000B8, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_6) == 0x0000C0, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_7) == 0x0000C8, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_8) == 0x0000D0, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_9) == 0x0000D8, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_10) == 0x0000E0, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_11) == 0x0000E8, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_12) == 0x0000F0, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_12' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_13) == 0x0000F8, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_13' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_14) == 0x000100, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_14' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, Temp_object_Variable_15) == 0x000108, "Member 'ShopCategoryTab_C_GetBrush_0::Temp_object_Variable_15' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, K2Node_Select_Default) == 0x000110, "Member 'ShopCategoryTab_C_GetBrush_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopCategoryTab_C_GetBrush_0, K2Node_MakeStruct_SlateBrush) == 0x000118, "Member 'ShopCategoryTab_C_GetBrush_0::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

}

