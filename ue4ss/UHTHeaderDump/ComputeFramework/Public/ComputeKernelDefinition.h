#pragma once
#include "CoreMinimal.h"
#include "ComputeKernelDefinition.generated.h"

USTRUCT(BlueprintType)
struct FComputeKernelDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Define;
    
    COMPUTEFRAMEWORK_API FComputeKernelDefinition();
};

