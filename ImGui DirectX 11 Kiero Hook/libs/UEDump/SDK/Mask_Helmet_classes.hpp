#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mask_Helmet

#include "Basic.hpp"

#include "Mask_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mask_Helmet.Mask_Helmet_C
// 0x0000 (0x0230 - 0x0230)
class AMask_Helmet_C final : public AMask_base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mask_Helmet_C">();
	}
	static class AMask_Helmet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMask_Helmet_C>();
	}
};
static_assert(alignof(AMask_Helmet_C) == 0x000008, "Wrong alignment on AMask_Helmet_C");
static_assert(sizeof(AMask_Helmet_C) == 0x000230, "Wrong size on AMask_Helmet_C");

}
