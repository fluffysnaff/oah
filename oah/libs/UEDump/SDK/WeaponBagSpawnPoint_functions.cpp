#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponBagSpawnPoint

#include "Basic.hpp"

#include "WeaponBagSpawnPoint_classes.hpp"
#include "WeaponBagSpawnPoint_parameters.hpp"


namespace SDK
{

// Function WeaponBagSpawnPoint.WeaponBagSpawnPoint_C.ExecuteUbergraph_WeaponBagSpawnPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponBagSpawnPoint_C::ExecuteUbergraph_WeaponBagSpawnPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBagSpawnPoint_C", "ExecuteUbergraph_WeaponBagSpawnPoint");

	Params::WeaponBagSpawnPoint_C_ExecuteUbergraph_WeaponBagSpawnPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponBagSpawnPoint.WeaponBagSpawnPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponBagSpawnPoint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBagSpawnPoint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

