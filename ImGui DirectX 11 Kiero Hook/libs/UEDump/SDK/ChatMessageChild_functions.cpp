#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatMessageChild

#include "Basic.hpp"

#include "ChatMessageChild_classes.hpp"
#include "ChatMessageChild_parameters.hpp"


namespace SDK
{

// Function ChatMessageChild.ChatMessageChild_C.Get_Name_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UChatMessageChild_C::Get_Name_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessageChild_C", "Get_Name_Text_0");

	Params::ChatMessageChild_C_Get_Name_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatMessageChild.ChatMessageChild_C.Get_Chat_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UChatMessageChild_C::Get_Chat_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessageChild_C", "Get_Chat_Text_0");

	Params::ChatMessageChild_C_Get_Chat_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatMessageChild.ChatMessageChild_C.Get_Chat_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UChatMessageChild_C::Get_Chat_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatMessageChild_C", "Get_Chat_ColorAndOpacity_0");

	Params::ChatMessageChild_C_Get_Chat_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
