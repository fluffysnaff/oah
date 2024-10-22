#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToolComponent

#include "Basic.hpp"

#include "ToolComponent_classes.hpp"
#include "ToolComponent_parameters.hpp"


namespace SDK
{

// Function ToolComponent.ToolComponent_C.ActivateTool__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UToolComponent_C::ActivateTool__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolComponent_C", "ActivateTool__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToolComponent.ToolComponent_C.DeactivateTool__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UToolComponent_C::DeactivateTool__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolComponent_C", "DeactivateTool__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToolComponent.ToolComponent_C.ExecuteUbergraph_ToolComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolComponent_C::ExecuteUbergraph_ToolComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolComponent_C", "ExecuteUbergraph_ToolComponent");

	Params::ToolComponent_C_ExecuteUbergraph_ToolComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolComponent.ToolComponent_C.Detach tool
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UToolComponent_C::Detach_tool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolComponent_C", "Detach tool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToolComponent.ToolComponent_C.AttachTool
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UToolComponent_C::AttachTool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolComponent_C", "AttachTool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToolComponent.ToolComponent_C.SetPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Pickuplocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         PickupRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolComponent_C::SetPickedUp(class AActor* Player, const struct FVector& Pickuplocation, const struct FRotator& PickupRotation, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolComponent_C", "SetPickedUp");

	Params::ToolComponent_C_SetPickedUp Parms{};

	Parms.Player = Player;
	Parms.Pickuplocation = std::move(Pickuplocation);
	Parms.PickupRotation = std::move(PickupRotation);
	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolComponent.ToolComponent_C.ReleaseFromSpot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToolComponent_C::ReleaseFromSpot(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolComponent_C", "ReleaseFromSpot");

	Params::ToolComponent_C_ReleaseFromSpot Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToolComponent.ToolComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UToolComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToolComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

