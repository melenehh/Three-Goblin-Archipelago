#pragma once
#include "CoreMinimal.h"
#include "ComputeKernelPermutationVector.generated.h"

USTRUCT(BlueprintType)
struct COMPUTEFRAMEWORK_API FComputeKernelPermutationVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, uint32> Permutations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BitCount;
    
    FComputeKernelPermutationVector();
};

