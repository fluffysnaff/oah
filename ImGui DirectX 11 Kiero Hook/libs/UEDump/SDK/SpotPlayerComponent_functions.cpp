#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpotPlayerComponent

#include "Basic.hpp"

#include "SpotPlayerComponent_classes.hpp"
#include "SpotPlayerComponent_parameters.hpp"


namespace SDK
{

// Function SpotPlayerComponent.SpotPlayerComponent_C.PlayerSpotted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpotPlayerComponent_C::PlayerSpotted__DelegateSignature(class APawn* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "PlayerSpotted__DelegateSignature");

	Params::SpotPlayerComponent_C_PlayerSpotted__DelegateSignature Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpotPlayerComponent.SpotPlayerComponent_C.CancelPlayerSpotted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USpotPlayerComponent_C::CancelPlayerSpotted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "CancelPlayerSpotted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpotPlayerComponent.SpotPlayerComponent_C.ExecuteUbergraph_SpotPlayerComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpotPlayerComponent_C::ExecuteUbergraph_SpotPlayerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "ExecuteUbergraph_SpotPlayerComponent");

	Params::SpotPlayerComponent_C_ExecuteUbergraph_SpotPlayerComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpotPlayerComponent.SpotPlayerComponent_C.StopFloatingWarning
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void USpotPlayerComponent_C::StopFloatingWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "StopFloatingWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpotPlayerComponent.SpotPlayerComponent_C.FloatingWarning
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   WarningTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   UpdateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              AttachComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Question_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USpotPlayerComponent_C::FloatingWarning(float WarningTime, float UpdateTime, class UPrimitiveComponent* AttachComponent, bool Question_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "FloatingWarning");

	Params::SpotPlayerComponent_C_FloatingWarning Parms{};

	Parms.WarningTime = WarningTime;
	Parms.UpdateTime = UpdateTime;
	Parms.AttachComponent = AttachComponent;
	Parms.Question_ = Question_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpotPlayerComponent.SpotPlayerComponent_C.Spotted
// (BlueprintCallable, BlueprintEvent)

void USpotPlayerComponent_C::Spotted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "Spotted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpotPlayerComponent.SpotPlayerComponent_C.UnspotPlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void USpotPlayerComponent_C::UnspotPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "UnspotPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpotPlayerComponent.SpotPlayerComponent_C.SpotPlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Alert_time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Update_time                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Min_time                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Max_time                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpotPlayerComponent_C::SpotPlayer(class APawn* Pawn, float Alert_time, float Update_time, float Min_time, float Max_time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "SpotPlayer");

	Params::SpotPlayerComponent_C_SpotPlayer Parms{};

	Parms.Pawn = Pawn;
	Parms.Alert_time = Alert_time;
	Parms.Update_time = Update_time;
	Parms.Min_time = Min_time;
	Parms.Max_time = Max_time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpotPlayerComponent.SpotPlayerComponent_C.SpotTimeDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float USpotPlayerComponent_C::SpotTimeDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotPlayerComponent_C", "SpotTimeDistance");

	Params::SpotPlayerComponent_C_SpotTimeDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
