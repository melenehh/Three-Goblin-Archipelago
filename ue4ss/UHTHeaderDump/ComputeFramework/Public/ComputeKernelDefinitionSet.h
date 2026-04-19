#pragma once
#include "CoreMinimal.h"
#include "ComputeKernelDefinition.h"
#include "ComputeKernelDefinitionSet.generated.h"

USTRUCT(BlueprintType)
struct FComputeKernelDefinitionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FComputeKernelDefinition> Defines;
    
    COMPUTEFRAMEWORK_API FComputeKernelDefinitionSet();
};

