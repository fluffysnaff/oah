#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PoliceGunBase

#include "Basic.hpp"

#include "PoliceGunBase_classes.hpp"
#include "PoliceGunBase_parameters.hpp"


namespace SDK
{

// Function PoliceGunBase.PoliceGunBase_C.ExecuteUbergraph_PoliceGunBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APoliceGunBase_C::ExecuteUbergraph_PoliceGunBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceGunBase_C", "ExecuteUbergraph_PoliceGunBase");

	Params::PoliceGunBase_C_ExecuteUbergraph_PoliceGunBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PoliceGunBase.PoliceGunBase_C.Shoot
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APoliceGunBase_C::Shoot(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceGunBase_C", "Shoot");

	Params::PoliceGunBase_C_Shoot Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

}
