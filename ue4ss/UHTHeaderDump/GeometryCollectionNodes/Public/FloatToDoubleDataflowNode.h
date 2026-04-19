#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "FloatToDoubleDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FFloatToDoubleDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Double;
    
    GEOMETRYCOLLECTIONNODES_API FFloatToDoubleDataflowNode();
};

