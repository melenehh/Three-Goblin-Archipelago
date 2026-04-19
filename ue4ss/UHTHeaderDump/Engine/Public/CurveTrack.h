#pragma once
#include "CoreMinimal.h"
#include "CurveTrack.generated.h"

USTRUCT(BlueprintType)
struct FCurveTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CurveWeights;
    
    ENGINE_API FCurveTrack();
};

