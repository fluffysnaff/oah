#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmoteBPBase_MakeItRain

#include "Basic.hpp"

#include "EmoteBPBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EmoteBPBase_MakeItRain.EmoteBPBase_MakeItRain_C
// 0x0010 (0x0250 - 0x0240)
class AEmoteBPBase_MakeItRain_C final : public AEmoteBPBase_C
{
public:
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmoteBPBase_MakeItRain_C">();
	}
	static class AEmoteBPBase_MakeItRain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEmoteBPBase_MakeItRain_C>();
	}
};
static_assert(alignof(AEmoteBPBase_MakeItRain_C) == 0x000008, "Wrong alignment on AEmoteBPBase_MakeItRain_C");
static_assert(sizeof(AEmoteBPBase_MakeItRain_C) == 0x000250, "Wrong size on AEmoteBPBase_MakeItRain_C");
static_assert(offsetof(AEmoteBPBase_MakeItRain_C, ParticleSystem) == 0x000240, "Member 'AEmoteBPBase_MakeItRain_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AEmoteBPBase_MakeItRain_C, StaticMesh) == 0x000248, "Member 'AEmoteBPBase_MakeItRain_C::StaticMesh' has a wrong offset!");

}
