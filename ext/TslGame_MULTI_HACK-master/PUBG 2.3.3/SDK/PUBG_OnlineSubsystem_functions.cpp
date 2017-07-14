#pragma once

// PUBG (Beta) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Match                          (CPF_Parm, CPF_ZeroConstructor)
// bool                           bDidBecomeActive               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTurnBasedMatchInterface::OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn");

	struct
	{
		struct FString                 Match;
		bool                           bDidBecomeActive;
	} params;
	params.Match = Match;
	params.bDidBecomeActive = bDidBecomeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Match                          (CPF_Parm, CPF_ZeroConstructor)

void UTurnBasedMatchInterface::OnMatchEnded(const struct FString& Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded");

	struct
	{
		struct FString                 Match;
	} params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
