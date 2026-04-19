#pragma once
#include "CoreMinimal.h"
#include "ComputeKernelPermutationBool.h"
#include "ComputeKernelPermutationSet.generated.h"

USTRUCT(BlueprintType)
struct FComputeKernelPermutationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FComputeKernelPermutationBool> BooleanOptions;
    
    COMPUTEFRAMEWORK_API FComputeKernelPermutationSet();
};

