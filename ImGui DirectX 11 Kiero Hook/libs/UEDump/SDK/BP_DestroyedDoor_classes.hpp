#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DestroyedDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DestroyedDoor.BP_DestroyedDoor_C
// 0x0040 (0x0260 - 0x0220)
class ABP_DestroyedDoor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USmoothSync*                            SmoothSync;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            DoorMesh;                                          // 0x0248(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0250(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DestroyedDoor(int32 EntryPoint);
	void AddForce();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DestroyedDoor_C">();
	}
	static class ABP_DestroyedDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DestroyedDoor_C>();
	}
};
static_assert(alignof(ABP_DestroyedDoor_C) == 0x000008, "Wrong alignment on ABP_DestroyedDoor_C");
static_assert(sizeof(ABP_DestroyedDoor_C) == 0x000260, "Wrong size on ABP_DestroyedDoor_C");
static_assert(offsetof(ABP_DestroyedDoor_C, UberGraphFrame) == 0x000220, "Member 'ABP_DestroyedDoor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedDoor_C, SmoothSync) == 0x000228, "Member 'ABP_DestroyedDoor_C::SmoothSync' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedDoor_C, StaticMesh) == 0x000230, "Member 'ABP_DestroyedDoor_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedDoor_C, Box) == 0x000238, "Member 'ABP_DestroyedDoor_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedDoor_C, Scene) == 0x000240, "Member 'ABP_DestroyedDoor_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedDoor_C, DoorMesh) == 0x000248, "Member 'ABP_DestroyedDoor_C::DoorMesh' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedDoor_C, StartLocation) == 0x000250, "Member 'ABP_DestroyedDoor_C::StartLocation' has a wrong offset!");

}
