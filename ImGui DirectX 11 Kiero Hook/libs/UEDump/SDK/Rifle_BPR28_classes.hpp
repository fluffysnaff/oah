#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rifle_BPR28

#include "Basic.hpp"

#include "GunBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Rifle_BPR28.Rifle_BPR28_C
// 0x0008 (0x0318 - 0x0310)
class ARifle_BPR28_C final : public AGunBase_C
{
public:
	class UStaticMeshComponent*                   Scope_front;                                       // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Rifle_BPR28_C">();
	}
	static class ARifle_BPR28_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARifle_BPR28_C>();
	}
};
static_assert(alignof(ARifle_BPR28_C) == 0x000008, "Wrong alignment on ARifle_BPR28_C");
static_assert(sizeof(ARifle_BPR28_C) == 0x000318, "Wrong size on ARifle_BPR28_C");
static_assert(offsetof(ARifle_BPR28_C, Scope_front) == 0x000310, "Member 'ARifle_BPR28_C::Scope_front' has a wrong offset!");

}
