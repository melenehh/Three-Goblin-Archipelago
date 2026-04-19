#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    DATAFLOWCORE_API FDataflowNode();
};

