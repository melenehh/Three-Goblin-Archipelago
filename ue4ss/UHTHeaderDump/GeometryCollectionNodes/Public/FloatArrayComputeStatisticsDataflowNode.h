#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTransformSelection -FallbackName=DataflowTransformSelection
#include "EStatisticsOperationEnum.h"
#include "FloatArrayComputeStatisticsDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FFloatArrayComputeStatisticsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FloatArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowTransformSelection TransformSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatisticsOperationEnum OperationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Indices;
    
    GEOMETRYCOLLECTIONNODES_API FFloatArrayComputeStatisticsDataflowNode();
};

