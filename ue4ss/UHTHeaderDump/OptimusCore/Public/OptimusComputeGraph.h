#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeGraph -FallbackName=ComputeGraph
#include "OptimusComputeGraph.generated.h"

class UOptimusNode;

UCLASS(Blueprintable)
class UOptimusComputeGraph : public UComputeGraph {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UOptimusNode>> KernelToNode;
    
public:
    UOptimusComputeGraph();

};

