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

// Function CameraShakeForFalling.CameraShakeForFalling_C.ReceivePlayShake
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCameraShakeForFalling_C::ReceivePlayShake(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraShakeForFalling.CameraShakeForFalling_C.ReceivePlayShake");

	struct
	{
		float*                         Scale;
	} params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraShakeForFalling.CameraShakeForFalling_C.ExecuteUbergraph_CameraShakeForFalling
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCameraShakeForFalling_C::ExecuteUbergraph_CameraShakeForFalling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraShakeForFalling.CameraShakeForFalling_C.ExecuteUbergraph_CameraShakeForFalling");

	struct
	{
		int                            EntryPoint;
	} params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
