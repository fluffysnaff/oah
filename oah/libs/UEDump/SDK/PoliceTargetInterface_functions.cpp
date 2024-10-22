#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PoliceTargetInterface

#include "Basic.hpp"

#include "PoliceTargetInterface_classes.hpp"
#include "PoliceTargetInterface_parameters.hpp"


namespace SDK
{

// Function PoliceTargetInterface.PoliceTargetInterface_C.TakeDamageInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DamageTaken                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Attacker_location                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowDirection_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IPoliceTargetInterface_C::TakeDamageInterface(int32 DamageTaken, const struct FVector& Attacker_location, bool ShowDirection_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "TakeDamageInterface");

	Params::PoliceTargetInterface_C_TakeDamageInterface Parms{};

	Parms.DamageTaken = DamageTaken;
	Parms.Attacker_location = std::move(Attacker_location);
	Parms.ShowDirection_ = ShowDirection_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PoliceTargetInterface.PoliceTargetInterface_C.CheckIfDowned?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Downed_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IPoliceTargetInterface_C::CheckIfDowned_(bool* Downed_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "CheckIfDowned?");

	Params::PoliceTargetInterface_C_CheckIfDowned_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Downed_ != nullptr)
		*Downed_ = Parms.Downed_;
}


// Function PoliceTargetInterface.PoliceTargetInterface_C.HitmarkerInterfaceCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPoliceTargetInterface_C::HitmarkerInterfaceCall(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "HitmarkerInterfaceCall");

	Params::PoliceTargetInterface_C_HitmarkerInterfaceCall Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PoliceTargetInterface.PoliceTargetInterface_C.AddAmmoInterfaceCall
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DidAddAmmo_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IPoliceTargetInterface_C::AddAmmoInterfaceCall(int32 Amount, bool* DidAddAmmo_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "AddAmmoInterfaceCall");

	Params::PoliceTargetInterface_C_AddAmmoInterfaceCall Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (DidAddAmmo_ != nullptr)
		*DidAddAmmo_ = Parms.DidAddAmmo_;
}


// Function PoliceTargetInterface.PoliceTargetInterface_C.CheckHoldingItemInterfaceCall
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HoldingItem                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPoliceTargetInterface_C::CheckHoldingItemInterfaceCall(class AActor** HoldingItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "CheckHoldingItemInterfaceCall");

	Params::PoliceTargetInterface_C_CheckHoldingItemInterfaceCall Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HoldingItem != nullptr)
		*HoldingItem = Parms.HoldingItem;
}


// Function PoliceTargetInterface.PoliceTargetInterface_C.SetInteractDescriptionInterfaceCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InteractDescription                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IPoliceTargetInterface_C::SetInteractDescriptionInterfaceCall(const class FString& InteractDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "SetInteractDescriptionInterfaceCall");

	Params::PoliceTargetInterface_C_SetInteractDescriptionInterfaceCall Parms{};

	Parms.InteractDescription = std::move(InteractDescription);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PoliceTargetInterface.PoliceTargetInterface_C.SetPoliceAlerted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Alerted_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IPoliceTargetInterface_C::SetPoliceAlerted(bool Alerted_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "SetPoliceAlerted");

	Params::PoliceTargetInterface_C_SetPoliceAlerted Parms{};

	Parms.Alerted_ = Alerted_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PoliceTargetInterface.PoliceTargetInterface_C.GetHoldingActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HoldingActor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPoliceTargetInterface_C::GetHoldingActor(class AActor** HoldingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "GetHoldingActor");

	Params::PoliceTargetInterface_C_GetHoldingActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HoldingActor != nullptr)
		*HoldingActor = Parms.HoldingActor;
}


// Function PoliceTargetInterface.PoliceTargetInterface_C.AddCivDeath
// (Public, BlueprintCallable, BlueprintEvent)

void IPoliceTargetInterface_C::AddCivDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PoliceTargetInterface_C", "AddCivDeath");

	UObject::ProcessEvent(Func, nullptr);
}

}

