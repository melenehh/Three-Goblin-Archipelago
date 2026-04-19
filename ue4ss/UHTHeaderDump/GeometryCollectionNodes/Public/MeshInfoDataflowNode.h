#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MeshInfoDataflowNode.generated.h"

class UDynamicMesh;

USTRUCT(BlueprintType)
struct FMeshInfoDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InfoString;
    
    GEOMETRYCOLLECTIONNODES_API FMeshInfoDataflowNode();
};

