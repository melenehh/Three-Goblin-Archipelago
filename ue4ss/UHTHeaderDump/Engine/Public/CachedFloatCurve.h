#pragma once
#include "CoreMinimal.h"
#include "CachedFloatCurve.generated.h"

USTRUCT(BlueprintType)
struct FCachedFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    ENGINE_API FCachedFloatCurve();
};

