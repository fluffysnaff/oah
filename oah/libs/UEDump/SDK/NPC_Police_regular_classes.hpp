#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Police_regular

#include "Basic.hpp"

#include "NPC_Police_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_Police_regular.NPC_Police_regular_C
// 0x0000 (0x0600 - 0x0600)
class ANPC_Police_regular_C final : public ANPC_Police_base_C
{
public:
	uint8                                         Pad_5F1[0x7];                                      // 0x05F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x05F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Police_regular_C">();
	}
	static class ANPC_Police_regular_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_Police_regular_C>();
	}
};
static_assert(alignof(ANPC_Police_regular_C) == 0x000010, "Wrong alignment on ANPC_Police_regular_C");
static_assert(sizeof(ANPC_Police_regular_C) == 0x000600, "Wrong size on ANPC_Police_regular_C");
static_assert(offsetof(ANPC_Police_regular_C, StaticMesh) == 0x0005F8, "Member 'ANPC_Police_regular_C::StaticMesh' has a wrong offset!");

}

