#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockPickUI

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LockPickUI.LockPickUI_C
// 0x0010 (0x0270 - 0x0260)
class ULockPickUI_C final : public UUserWidget
{
public:
	class UProgressBar*                           ProgressBar_67;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ALock_pick_C*                           LockPick;                                          // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LockPickUI_C">();
	}
	static class ULockPickUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULockPickUI_C>();
	}
};
static_assert(alignof(ULockPickUI_C) == 0x000008, "Wrong alignment on ULockPickUI_C");
static_assert(sizeof(ULockPickUI_C) == 0x000270, "Wrong size on ULockPickUI_C");
static_assert(offsetof(ULockPickUI_C, ProgressBar_67) == 0x000260, "Member 'ULockPickUI_C::ProgressBar_67' has a wrong offset!");
static_assert(offsetof(ULockPickUI_C, LockPick) == 0x000268, "Member 'ULockPickUI_C::LockPick' has a wrong offset!");

}
