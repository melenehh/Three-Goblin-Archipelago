#pragma once
#include "CoreMinimal.h"
#include "DisplacementScaling.generated.h"

USTRUCT(BlueprintType)
struct FDisplacementScaling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Center;
    
    ENGINE_API FDisplacementScaling();
};

