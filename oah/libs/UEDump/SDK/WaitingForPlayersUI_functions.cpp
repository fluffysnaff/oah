#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaitingForPlayersUI

#include "Basic.hpp"

#include "WaitingForPlayersUI_classes.hpp"
#include "WaitingForPlayersUI_parameters.hpp"


namespace SDK
{

// Function WaitingForPlayersUI.WaitingForPlayersUI_C.ExecuteUbergraph_WaitingForPlayersUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWaitingForPlayersUI_C::ExecuteUbergraph_WaitingForPlayersUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaitingForPlayersUI_C", "ExecuteUbergraph_WaitingForPlayersUI");

	Params::WaitingForPlayersUI_C_ExecuteUbergraph_WaitingForPlayersUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WaitingForPlayersUI.WaitingForPlayersUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWaitingForPlayersUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaitingForPlayersUI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

