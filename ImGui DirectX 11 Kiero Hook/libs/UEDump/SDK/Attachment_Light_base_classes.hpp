#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Attachment_Light_base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AttachmentBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Attachment_Light_base.Attachment_Light_base_C
// 0x0010 (0x0260 - 0x0250)
class AAttachment_Light_base_C final : public AAttachmentBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                             ToggleSound;                                       // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Attachment_Light_base(int32 EntryPoint);
	void ToggleFlashMulti();
	void ToggleFlash();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Attachment_Light_base_C">();
	}
	static class AAttachment_Light_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAttachment_Light_base_C>();
	}
};
static_assert(alignof(AAttachment_Light_base_C) == 0x000008, "Wrong alignment on AAttachment_Light_base_C");
static_assert(sizeof(AAttachment_Light_base_C) == 0x000260, "Wrong size on AAttachment_Light_base_C");
static_assert(offsetof(AAttachment_Light_base_C, UberGraphFrame) == 0x000250, "Member 'AAttachment_Light_base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAttachment_Light_base_C, ToggleSound) == 0x000258, "Member 'AAttachment_Light_base_C::ToggleSound' has a wrong offset!");

}
