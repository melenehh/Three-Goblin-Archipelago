#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EMeshBooleanOperationEnum.h"
#include "MeshBooleanDataflowNode.generated.h"

class UDynamicMesh;

USTRUCT(BlueprintType)
struct FMeshBooleanDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshBooleanOperationEnum Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* Mesh1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* Mesh2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* Mesh;
    
    GEOMETRYCOLLECTIONNODES_API FMeshBooleanDataflowNode();
};

