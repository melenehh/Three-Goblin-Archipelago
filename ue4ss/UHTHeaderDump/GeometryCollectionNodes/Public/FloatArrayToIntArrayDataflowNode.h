#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EFloatArrayToIntArrayFunctionEnum.h"
#include "FloatArrayToIntArrayDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FFloatArrayToIntArrayDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFloatArrayToIntArrayFunctionEnum Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FloatArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IntArray;
    
    GEOMETRYCOLLECTIONNODES_API FFloatArrayToIntArrayDataflowNode();
};

