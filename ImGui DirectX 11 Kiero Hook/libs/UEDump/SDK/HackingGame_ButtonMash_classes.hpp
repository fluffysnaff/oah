#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HackingGame_ButtonMash

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HackingGame_base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HackingGame_ButtonMash.HackingGame_ButtonMash_C
// 0x0030 (0x0298 - 0x0268)
class UHackingGame_ButtonMash_C final : public UHackingGame_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BreakWall;                                         // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_54;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CrackImage;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_0;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Progress;                                          // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HackingGame_ButtonMash(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void BndEvt__HackingGame_ButtonMash_Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HackingGame_ButtonMash_C">();
	}
	static class UHackingGame_ButtonMash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHackingGame_ButtonMash_C>();
	}
};
static_assert(alignof(UHackingGame_ButtonMash_C) == 0x000008, "Wrong alignment on UHackingGame_ButtonMash_C");
static_assert(sizeof(UHackingGame_ButtonMash_C) == 0x000298, "Wrong size on UHackingGame_ButtonMash_C");
static_assert(offsetof(UHackingGame_ButtonMash_C, UberGraphFrame) == 0x000268, "Member 'UHackingGame_ButtonMash_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHackingGame_ButtonMash_C, BreakWall) == 0x000270, "Member 'UHackingGame_ButtonMash_C::BreakWall' has a wrong offset!");
static_assert(offsetof(UHackingGame_ButtonMash_C, Button_54) == 0x000278, "Member 'UHackingGame_ButtonMash_C::Button_54' has a wrong offset!");
static_assert(offsetof(UHackingGame_ButtonMash_C, CrackImage) == 0x000280, "Member 'UHackingGame_ButtonMash_C::CrackImage' has a wrong offset!");
static_assert(offsetof(UHackingGame_ButtonMash_C, ProgressBar_0) == 0x000288, "Member 'UHackingGame_ButtonMash_C::ProgressBar_0' has a wrong offset!");
static_assert(offsetof(UHackingGame_ButtonMash_C, Progress) == 0x000290, "Member 'UHackingGame_ButtonMash_C::Progress' has a wrong offset!");

}
