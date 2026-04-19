#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DataflowSphereCovering.h"
#include "SphereCoveringToMeshDataflowNode.generated.h"

class UDynamicMesh;

USTRUCT(BlueprintType)
struct FSphereCoveringToMeshDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSphereCovering SphereCovering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VerticesAlongEachSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* Mesh;
    
    GEOMETRYCOLLECTIONNODES_API FSphereCoveringToMeshDataflowNode();
};

