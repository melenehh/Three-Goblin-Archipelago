#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTerminalNode -FallbackName=DataflowTerminalNode
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryCollectionEngine -ObjectName=GeometryCollectionAutoInstanceMesh -FallbackName=GeometryCollectionAutoInstanceMesh
#include "GeometryCollectionTerminalDataflowNode.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct FGeometryCollectionTerminalDataflowNode : public FDataflowTerminalNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterial*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;
    
    GEOMETRYCOLLECTIONNODES_API FGeometryCollectionTerminalDataflowNode();
};

