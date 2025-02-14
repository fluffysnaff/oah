#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponBag

#include "Basic.hpp"

#include "WeaponBag_classes.hpp"
#include "WeaponBag_parameters.hpp"


namespace SDK
{

// Function WeaponBag.WeaponBag_C.ExecuteUbergraph_WeaponBag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponBag_C::ExecuteUbergraph_WeaponBag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBag_C", "ExecuteUbergraph_WeaponBag");

	Params::WeaponBag_C_ExecuteUbergraph_WeaponBag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponBag.WeaponBag_C.PickupLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponBag_C::PickupLoadout(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBag_C", "PickupLoadout");

	Params::WeaponBag_C_PickupLoadout Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponBag.WeaponBag_C.SpawnMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Magactor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Rifle_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponBag_C::SpawnMag(class UClass* Magactor, bool Rifle_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBag_C", "SpawnMag");

	Params::WeaponBag_C_SpawnMag Parms{};

	Parms.Magactor = Magactor;
	Parms.Rifle_ = Rifle_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponBag.WeaponBag_C.BndEvt__WeaponBag_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponBag_C::BndEvt__WeaponBag_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature(class AActor* Player, class UPrimitiveComponent* HitComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBag_C", "BndEvt__WeaponBag_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature");

	Params::WeaponBag_C_BndEvt__WeaponBag_InteractComponent_K2Node_ComponentBoundEvent_0_Interact__DelegateSignature Parms{};

	Parms.Player = Player;
	Parms.HitComponent = HitComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponBag.WeaponBag_C.SetupGuns
// (BlueprintCallable, BlueprintEvent)

void AWeaponBag_C::SetupGuns()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBag_C", "SetupGuns");

	UObject::ProcessEvent(Func, nullptr);
}

}

