#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowVertexSelection -FallbackName=DataflowVertexSelection
#include "FloatArrayNormalizeDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FFloatArrayNormalizeDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> InFloatArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVertexSelection Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OutFloatArray;
    
    GEOMETRYCOLLECTIONNODES_API FFloatArrayNormalizeDataflowNode();
};

