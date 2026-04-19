#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeKernelSource -FallbackName=ComputeKernelSource
#include "OptimusKernelSource.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OPTIMUSCORE_API UOptimusKernelSource : public UComputeKernelSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
public:
    UOptimusKernelSource();

};

