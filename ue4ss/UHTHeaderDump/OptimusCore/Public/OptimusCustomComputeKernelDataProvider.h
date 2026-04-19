#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusCustomComputeKernelDataProvider.generated.h"

UCLASS(Blueprintable)
class UOptimusCustomComputeKernelDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UOptimusCustomComputeKernelDataProvider();

};

