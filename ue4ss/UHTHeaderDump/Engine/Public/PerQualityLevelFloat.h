#pragma once
#include "CoreMinimal.h"
#include "PerQualityLevelFloat.generated.h"

USTRUCT(BlueprintType)
struct FPerQualityLevelFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> PerQuality;
    
    ENGINE_API FPerQualityLevelFloat();
};

