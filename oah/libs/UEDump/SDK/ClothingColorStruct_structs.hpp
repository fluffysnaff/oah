#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingColorStruct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ClothingColorStruct.ClothingColorStruct
// 0x0058 (0x0058 - 0x0000)
struct FClothingColorStruct final
{
public:
	int32                                         Element_2_9A4704CC4D214907D57EA9B09A8B63B8;        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_256B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UMaterialInterface*, float>        MaterialsWithPercent_13_7BAA08A44B9514B21FD80DA52381A11B; // 0x0008(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FClothingColorStruct) == 0x000008, "Wrong alignment on FClothingColorStruct");
static_assert(sizeof(FClothingColorStruct) == 0x000058, "Wrong size on FClothingColorStruct");
static_assert(offsetof(FClothingColorStruct, Element_2_9A4704CC4D214907D57EA9B09A8B63B8) == 0x000000, "Member 'FClothingColorStruct::Element_2_9A4704CC4D214907D57EA9B09A8B63B8' has a wrong offset!");
static_assert(offsetof(FClothingColorStruct, MaterialsWithPercent_13_7BAA08A44B9514B21FD80DA52381A11B) == 0x000008, "Member 'FClothingColorStruct::MaterialsWithPercent_13_7BAA08A44B9514B21FD80DA52381A11B' has a wrong offset!");

}

