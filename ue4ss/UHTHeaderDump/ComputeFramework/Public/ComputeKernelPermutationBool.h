#pragma once
#include "CoreMinimal.h"
#include "ComputeKernelPermutationBool.generated.h"

USTRUCT(BlueprintType)
struct FComputeKernelPermutationBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    COMPUTEFRAMEWORK_API FComputeKernelPermutationBool();
};

