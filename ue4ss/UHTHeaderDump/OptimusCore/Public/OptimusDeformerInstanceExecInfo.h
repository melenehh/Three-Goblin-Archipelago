#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeGraphInstance -FallbackName=ComputeGraphInstance
#include "EOptimusNodeGraphType.h"
#include "OptimusDeformerInstanceExecInfo.generated.h"

class UComputeGraph;

USTRUCT(BlueprintType)
struct FOptimusDeformerInstanceExecInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GraphName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusNodeGraphType GraphType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComputeGraph* ComputeGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputeGraphInstance ComputeGraphInstance;
    
    OPTIMUSCORE_API FOptimusDeformerInstanceExecInfo();
};

