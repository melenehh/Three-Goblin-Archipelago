#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "IsNearlyZeroDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FIsNearlyZeroDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReturnValue;
    
    GEOMETRYCOLLECTIONNODES_API FIsNearlyZeroDataflowNode();
};

