#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisplayBreakableGlassTop

#include "Basic.hpp"

#include "BreakableGlass_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DisplayBreakableGlassTop.DisplayBreakableGlassTop_C
// 0x0028 (0x02A0 - 0x0278)
class ADisplayBreakableGlassTop_C : public ABreakableGlass_C
{
public:
	class USoundBase*                             BreakSound_0;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          TwoHitBreak__0;                                    // 0x0280(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2549[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             GlassDestroyed_0;                                  // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Alarm__0;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_254A[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ParticleAmount_0;                                  // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void GlassDestroyed_0__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DisplayBreakableGlassTop_C">();
	}
	static class ADisplayBreakableGlassTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADisplayBreakableGlassTop_C>();
	}
};
static_assert(alignof(ADisplayBreakableGlassTop_C) == 0x000008, "Wrong alignment on ADisplayBreakableGlassTop_C");
static_assert(sizeof(ADisplayBreakableGlassTop_C) == 0x0002A0, "Wrong size on ADisplayBreakableGlassTop_C");
static_assert(offsetof(ADisplayBreakableGlassTop_C, BreakSound_0) == 0x000278, "Member 'ADisplayBreakableGlassTop_C::BreakSound_0' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlassTop_C, TwoHitBreak__0) == 0x000280, "Member 'ADisplayBreakableGlassTop_C::TwoHitBreak__0' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlassTop_C, GlassDestroyed_0) == 0x000288, "Member 'ADisplayBreakableGlassTop_C::GlassDestroyed_0' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlassTop_C, Alarm__0) == 0x000298, "Member 'ADisplayBreakableGlassTop_C::Alarm__0' has a wrong offset!");
static_assert(offsetof(ADisplayBreakableGlassTop_C, ParticleAmount_0) == 0x00029C, "Member 'ADisplayBreakableGlassTop_C::ParticleAmount_0' has a wrong offset!");

}
