#pragma once

// PUBG (Beta) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};


// Enum Niagara.ENiagaraDataType
enum class ENiagaraDataType
{
	ENiagaraDataType__Scalar       = 0,
	ENiagaraDataType__Vector       = 1,
	ENiagaraDataType__Matrix       = 2,
	ENiagaraDataType__ENiagaraDataType_MAX = 3
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};


// Enum Niagara.EEmitterRenderModuleType
enum class EEmitterRenderModuleType
{
	RMT_None                       = 0,
	RMT_Sprites                    = 1,
	RMT_Ribbon                     = 2,
	RMT_Trails                     = 3,
	RMT_Meshes                     = 4,
	RMT_MAX                        = 5
};



//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Niagara.NiagaraActor
// 0x0008 (0x0390 - 0x0388)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                 		// 0x0388(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0010 (0x06B0 - 0x06A0)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x06A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x00A8 (0x00D0 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	TArray<unsigned char>                              ByteCode;                                         		// 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FNiagaraScriptConstantData                  ConstantData;                                     		// 0x0038(0x0060)
	TArray<struct FNiagaraVariableInfo>                Attributes;                                       		// 0x0098(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventReceivers;                                   		// 0x00A8(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventGenerators;                                  		// 0x00B8(0x0010) (CPF_ZeroConstructor)
	struct FNiagaraScriptUsageInfo                     Usage;                                            		// 0x00C8(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitterProperties
// 0x00F0 (0x0118 - 0x0028)
class UNiagaraEmitterProperties : public UObject
{
public:
	struct FString                                     EmitterName;                                      		// 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bIsEnabled : 1;                                   		// 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	float                                              SpawnRate;                                        		// 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterial*                                   Material;                                         		// 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EEmitterRenderModuleType>   RenderModuleType;                                 		// 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0049(0x0003) MISSED OFFSET
	float                                              StartTime;                                        		// 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                          		// 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x0054(0x0004) MISSED OFFSET
	class UNiagaraEffectRendererProperties*            RendererProperties;                               		// 0x0058(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                NumLoops;                                         		// 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x0064(0x0004) MISSED OFFSET
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                		// 0x0068(0x0058) (CPF_Edit)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                 		// 0x00C0(0x0058) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitterProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraEffect
// 0x0010 (0x0038 - 0x0028)
class UNiagaraEffect : public UObject
{
public:
	TArray<class UNiagaraEmitterProperties*>           EmitterProps;                                     		// 0x0028(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffect");
		return ptr;
	}

};


// Class Niagara.NiagaraEffectRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEffectRendererProperties : public UObject
{
public:
	struct FName                                       dummy;                                            		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffectRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x0008 (0x0038 - 0x0030)
class UNiagaraMeshRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                     		// 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0000 (0x0030 - 0x0030)
class UNiagaraRibbonRendererProperties : public UNiagaraEffectRendererProperties
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x0010 (0x0040 - 0x0030)
class UNiagaraSpriteRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	class Vector2D                                     SubImageInfo;                                     		// 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBVelocityAligned : 1;                            		// 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                     		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const class Vector3D& Location, const class Rotator& Rotation, TEnumAsByte<enum class EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const class Vector3D& Location, const class Rotator& Rotation, bool bAutoDestroy);
	void STATIC_SetUpdateScriptConstant(class UNiagaraComponent* Component, const struct FName& EmitterName, const struct FName& ConstantName, const class Vector3D& Value);
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                              		// 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSequence
// 0x0008 (0x0030 - 0x0028)
class UNiagaraSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                       		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSequence");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
