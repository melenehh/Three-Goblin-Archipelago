#pragma once
#include "CoreMinimal.h"
#include "EOptimusNodeGraphType.h"
#include "OptimusComputeGraphInfo.generated.h"

class UOptimusComputeGraph;

USTRUCT(BlueprintType)
struct FOptimusComputeGraphInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusNodeGraphType GraphType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GraphName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusComputeGraph* ComputeGraph;
    
    OPTIMUSCORE_API FOptimusComputeGraphInfo();
};

