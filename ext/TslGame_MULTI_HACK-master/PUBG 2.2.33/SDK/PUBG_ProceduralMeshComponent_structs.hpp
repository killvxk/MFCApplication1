#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010
struct FProcMeshTangent
{
	struct FVector                                     TangentX;                                         		// 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bFlipTangentY : 1;                                		// 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x0034
struct FProcMeshVertex
{
	struct FVector                                     Position;                                         		// 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Normal;                                           		// 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FProcMeshTangent                            Tangent;                                          		// 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FColor                                      Color;                                            		// 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   UV0;                                              		// 0x002C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040
struct FProcMeshSection
{
	TArray<struct FProcMeshVertex>                     ProcVertexBuffer;                                 		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        ProcIndexBuffer;                                  		// 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        SectionLocalBox;                                  		// 0x0020(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableCollision : 1;                             		// 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSectionVisible : 1;                              		// 0x003D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
