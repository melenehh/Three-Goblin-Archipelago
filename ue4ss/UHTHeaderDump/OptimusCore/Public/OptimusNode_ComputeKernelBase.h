#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeKernelProvider.h"
#include "OptimusNode.h"
#include "OptimusNode_ComputeKernelBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UOptimusNode_ComputeKernelBase : public UOptimusNode, public IOptimusComputeKernelProvider {
    GENERATED_BODY()
public:
    UOptimusNode_ComputeKernelBase();


    // Fix for true pure virtual functions not being implemented
};

