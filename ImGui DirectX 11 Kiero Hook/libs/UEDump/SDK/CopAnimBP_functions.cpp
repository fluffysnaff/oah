#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CopAnimBP

#include "Basic.hpp"

#include "CopAnimBP_classes.hpp"
#include "CopAnimBP_parameters.hpp"


namespace SDK
{

// Function CopAnimBP.CopAnimBP_C.ExecuteUbergraph_CopAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCopAnimBP_C::ExecuteUbergraph_CopAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CopAnimBP_C", "ExecuteUbergraph_CopAnimBP");

	Params::CopAnimBP_C_ExecuteUbergraph_CopAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CopAnimBP.CopAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCopAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CopAnimBP_C", "BlueprintUpdateAnimation");

	Params::CopAnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CopAnimBP.CopAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CopAnimBP_AnimGraphNode_ModifyBone_B041E55144A11580BAEDA69833B52D69
// (BlueprintEvent)

void UCopAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CopAnimBP_AnimGraphNode_ModifyBone_B041E55144A11580BAEDA69833B52D69()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CopAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CopAnimBP_AnimGraphNode_ModifyBone_B041E55144A11580BAEDA69833B52D69");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CopAnimBP.CopAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CopAnimBP_AnimGraphNode_TwoBoneIK_B72D01EC49C01B6A3080008D13BD7904
// (BlueprintEvent)

void UCopAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CopAnimBP_AnimGraphNode_TwoBoneIK_B72D01EC49C01B6A3080008D13BD7904()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CopAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CopAnimBP_AnimGraphNode_TwoBoneIK_B72D01EC49C01B6A3080008D13BD7904");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CopAnimBP.CopAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UCopAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CopAnimBP_C", "AnimGraph");

	Params::CopAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
