#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InstructionInterface

#include "Basic.hpp"

#include "InstructionStruct_structs.hpp"


namespace SDK::Params
{

// Function InstructionInterface.InstructionInterface_C.AnnounceNewInstructionWidget
// 0x0010 (0x0010 - 0x0000)
struct InstructionInterface_C_AnnounceNewInstructionWidget final
{
public:
	class FString                                 Title;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(InstructionInterface_C_AnnounceNewInstructionWidget) == 0x000008, "Wrong alignment on InstructionInterface_C_AnnounceNewInstructionWidget");
static_assert(sizeof(InstructionInterface_C_AnnounceNewInstructionWidget) == 0x000010, "Wrong size on InstructionInterface_C_AnnounceNewInstructionWidget");
static_assert(offsetof(InstructionInterface_C_AnnounceNewInstructionWidget, Title) == 0x000000, "Member 'InstructionInterface_C_AnnounceNewInstructionWidget::Title' has a wrong offset!");

// Function InstructionInterface.InstructionInterface_C.GetCurrentInstruction
// 0x0030 (0x0030 - 0x0000)
struct InstructionInterface_C_GetCurrentInstruction final
{
public:
	struct FInstructionStruct                     Instruction;                                       // 0x0000(0x0030)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(InstructionInterface_C_GetCurrentInstruction) == 0x000008, "Wrong alignment on InstructionInterface_C_GetCurrentInstruction");
static_assert(sizeof(InstructionInterface_C_GetCurrentInstruction) == 0x000030, "Wrong size on InstructionInterface_C_GetCurrentInstruction");
static_assert(offsetof(InstructionInterface_C_GetCurrentInstruction, Instruction) == 0x000000, "Member 'InstructionInterface_C_GetCurrentInstruction::Instruction' has a wrong offset!");

}
