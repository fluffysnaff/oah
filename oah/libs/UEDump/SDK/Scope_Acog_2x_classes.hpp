#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scope_Acog_2x

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Attachment_scope_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Scope_Acog_2x.Scope_Acog_2x_C
// 0x0028 (0x0298 - 0x0270)
class AScope_Acog_2x_C final : public AAttachment_scope_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Scope_Acog_2x_C;                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Pattern;                                           // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Zoom;                                              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lens;                                              // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Scope_Acog_2x(int32 EntryPoint);
	void ScopeOut();
	void ScopeIn();
	void SetupScope();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Scope_Acog_2x_C">();
	}
	static class AScope_Acog_2x_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AScope_Acog_2x_C>();
	}
};
static_assert(alignof(AScope_Acog_2x_C) == 0x000008, "Wrong alignment on AScope_Acog_2x_C");
static_assert(sizeof(AScope_Acog_2x_C) == 0x000298, "Wrong size on AScope_Acog_2x_C");
static_assert(offsetof(AScope_Acog_2x_C, UberGraphFrame_Scope_Acog_2x_C) == 0x000270, "Member 'AScope_Acog_2x_C::UberGraphFrame_Scope_Acog_2x_C' has a wrong offset!");
static_assert(offsetof(AScope_Acog_2x_C, Pattern) == 0x000278, "Member 'AScope_Acog_2x_C::Pattern' has a wrong offset!");
static_assert(offsetof(AScope_Acog_2x_C, Zoom) == 0x000280, "Member 'AScope_Acog_2x_C::Zoom' has a wrong offset!");
static_assert(offsetof(AScope_Acog_2x_C, Lens) == 0x000288, "Member 'AScope_Acog_2x_C::Lens' has a wrong offset!");
static_assert(offsetof(AScope_Acog_2x_C, SceneCaptureComponent2D) == 0x000290, "Member 'AScope_Acog_2x_C::SceneCaptureComponent2D' has a wrong offset!");

}
