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

// Function HealEffectWidget.HealEffectWidget_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHealEffectWidget_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealEffectWidget.HealEffectWidget_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealEffectWidget.HealEffectWidget_C.SetScalaParameterValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHealEffectWidget_C::SetScalaParameterValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealEffectWidget.HealEffectWidget_C.SetScalaParameterValue");

	struct
	{
		float                          Value;
	} params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealEffectWidget.HealEffectWidget_C.EnableUpdate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHealEffectWidget_C::EnableUpdate(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealEffectWidget.HealEffectWidget_C.EnableUpdate");

	struct
	{
		bool                           NewParam;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function HealEffectWidget.HealEffectWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHealEffectWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealEffectWidget.HealEffectWidget_C.Tick");

	struct
	{
		struct FGeometry*              MyGeometry;
		float*                         InDeltaTime;
	} params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealEffectWidget.HealEffectWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHealEffectWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealEffectWidget.HealEffectWidget_C.Construct");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealEffectWidget.HealEffectWidget_C.ExecuteUbergraph_HealEffectWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHealEffectWidget_C::ExecuteUbergraph_HealEffectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealEffectWidget.HealEffectWidget_C.ExecuteUbergraph_HealEffectWidget");

	struct
	{
		int                            EntryPoint;
	} params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealEffectWidget.HealEffectWidget_C.FnishHealEffect__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHealEffectWidget_C::FnishHealEffect__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealEffectWidget.HealEffectWidget_C.FnishHealEffect__DelegateSignature");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
