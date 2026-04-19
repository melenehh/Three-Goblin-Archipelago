#pragma once
#include "CoreMinimal.h"
#include "CrowdAvoidanceSamplingPattern.generated.h"

USTRUCT(BlueprintType)
struct FCrowdAvoidanceSamplingPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Angles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Radii;
    
    AIMODULE_API FCrowdAvoidanceSamplingPattern();
};

