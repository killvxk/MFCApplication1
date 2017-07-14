#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// 0x01BC (0x067C - 0x04C0)
class AVehicleBase_C : public ATslWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                   		// 0x04C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        BoostLight;                                       		// 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        LowFuelLight;                                     		// 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        TailLamp_3;                                       		// 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        TailLamp_2;                                       		// 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         HeadLamp_3;                                       		// 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpotLightComponent*                         HeadLamp_2;                                       		// 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                       		// 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                    		// 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            FirstPersonCameraInVehicle;                       		// 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                FirstPersonSpringArmInVehicle;                    		// 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                      		// 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactModifier;                                   		// 0x0520(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactAbsorption;                                 		// 0x0524(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactModifierUpsideDown;                         		// 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactAbsorptionUpsideDown;                       		// 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FuelConsumptionModifierBoost;                     		// 0x0530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactAbsorptionPassenger;                        		// 0x0534(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ImpactAbsorptionPassengerUpsideDown;              		// 0x0538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LaunchVelocityFactorOnHitCharacter;               		// 0x053C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsLightsOn : 1;                                   		// 0x0540(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsBrakeEngaging : 1;                              		// 0x0541(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsReverseEngaging : 1;                            		// 0x0542(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsHandBraking : 1;                                		// 0x0543(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrakeLightIntensity_On;                           		// 0x0544(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrakeLightIntensity_Off;                          		// 0x0548(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadius_Inner;                            		// 0x054C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadius_Outer;                            		// 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0554(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DamageCurve;                                      		// 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Throttle;                                         		// 0x0560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0564(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FuelConsumptionCurve;                             		// 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FuelEfficiency;                                   		// 0x0570(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x0574(0x0004) MISSED OFFSET
	class UTslWheeledVehicleMovement*                  TslWheeledVehicleMovementRef;                     		// 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslPlayerController*                        DriveControllerrRef;                              		// 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      WheelsLatSlip;                                    		// 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsLongSlip;                                   		// 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              FuelConsumptionModifierIdle;                      		// 0x05A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedKPH;                                         		// 0x05AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      WheelsSuspensionOffset;                           		// 0x05B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UPhysicalMaterial*>                   WheelsContactSurface;                             		// 0x05C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsRotationSpeed;                              		// 0x05D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsSuspensionMaxDrop;                          		// 0x05E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsSuspensionMaxRaise;                         		// 0x05F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              RPM;                                              		// 0x0600(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestBoostingAKEvent : 1;                          		// 0x0604(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestBoostingAKEvent_prev : 1;                     		// 0x0605(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestThrottlingAKEvent : 1;                        		// 0x0606(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestThrottlingAKEvent_prev : 1;                   		// 0x0607(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestSteeringAKEvent : 1;                          		// 0x0608(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestSteeringAKEvent_prev : 1;                     		// 0x0609(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                               		// 0x060A(0x0002) MISSED OFFSET
	float                                              Brake;                                            		// 0x060C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TestBrakingAKEvent : 1;                           		// 0x0610(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                               		// 0x0611(0x0007) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   TestWheelsContactSurface_prev;                    		// 0x0618(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      TestBrakingAKEvent_prev : 1;                      		// 0x0628(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                               		// 0x0629(0x0007) MISSED OFFSET
	TArray<float>                                      WheelsSuspensionOffsetNorm;                       		// 0x0630(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsWaterDepth;                                 		// 0x0640(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              FlatTireCount;                                    		// 0x0650(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDynamicCamera : 1;                            		// 0x0654(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                               		// 0x0655(0x0003) MISSED OFFSET
	struct FVector                                     LastVelocity;                                     		// 0x0658(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Acceleration;                                     		// 0x0664(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTickFuelIndicator : 1;                           		// 0x0670(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTickBoostIndicator : 1;                          		// 0x0671(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                               		// 0x0672(0x0002) MISSED OFFSET
	float                                              LowFuelLevel;                                     		// 0x0674(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LastFuelConsumptionTime;                          		// 0x0678(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleBase.VehicleBase_C");
		return ptr;
	}


	void TickIndicators();
	void TickDynamicCamera();
	void TickBrakeSoundTest();
	void TickThrottleSoundTest();
	void TickBoostSoundTest();
	void TickFuelConsumption(float DeltaSeconds);
	void TickBasicInfoCaching();
	void TickWheelCaching();
	void TickWheelSound();
	void OnRep_IsBrakeEngaged();
	void OnRep_isLightsOn();
	void UserConstructionScript();
	void InpActEvt_Handbrake_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Handbrake_K2Node_InputActionEvent_3(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void ToggleLights();
	void BrakeLampOn();
	void BrakeLampOff();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_8(float AxisValue);
	void ReceiveBeginPlay();
	void TurnOffLight(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_16(float AxisValue);
	void EventFuelConsumption();
	void ExecuteUbergraph_VehicleBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif