#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aps_Roofprop_Watertower

#include "Basic.hpp"

#include "Aps_Roofprop_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Aps_Roofprop_Watertower.Aps_Roofprop_Watertower_C
// 0x0008 (0x0238 - 0x0230)
class AAps_Roofprop_Watertower_C final : public AAps_Roofprop_base_C
{
public:
	class UStaticMeshComponent*                   WaterTower;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Aps_Roofprop_Watertower_C">();
	}
	static class AAps_Roofprop_Watertower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAps_Roofprop_Watertower_C>();
	}
};
static_assert(alignof(AAps_Roofprop_Watertower_C) == 0x000008, "Wrong alignment on AAps_Roofprop_Watertower_C");
static_assert(sizeof(AAps_Roofprop_Watertower_C) == 0x000238, "Wrong size on AAps_Roofprop_Watertower_C");
static_assert(offsetof(AAps_Roofprop_Watertower_C, WaterTower) == 0x000230, "Member 'AAps_Roofprop_Watertower_C::WaterTower' has a wrong offset!");

}
