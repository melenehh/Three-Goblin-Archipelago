#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "IntToDoubleDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FIntToDoubleDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Int;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Double;
    
    GEOMETRYCOLLECTIONNODES_API FIntToDoubleDataflowNode();
};

