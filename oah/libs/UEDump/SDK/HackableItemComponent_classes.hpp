#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HackableItemComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HackableItemComponent.HackableItemComponent_C
// 0x0020 (0x00D0 - 0x00B0)
class UHackableItemComponent_C final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             HackItem;                                          // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PowerboxUnlock;                                    // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void HackItem__DelegateSignature();
	void PowerboxUnlock__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HackableItemComponent_C">();
	}
	static class UHackableItemComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHackableItemComponent_C>();
	}
};
static_assert(alignof(UHackableItemComponent_C) == 0x000008, "Wrong alignment on UHackableItemComponent_C");
static_assert(sizeof(UHackableItemComponent_C) == 0x0000D0, "Wrong size on UHackableItemComponent_C");
static_assert(offsetof(UHackableItemComponent_C, HackItem) == 0x0000B0, "Member 'UHackableItemComponent_C::HackItem' has a wrong offset!");
static_assert(offsetof(UHackableItemComponent_C, PowerboxUnlock) == 0x0000C0, "Member 'UHackableItemComponent_C::PowerboxUnlock' has a wrong offset!");

}

