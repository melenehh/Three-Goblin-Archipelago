#pragma once
#include "CoreMinimal.h"
#include "PointWeightMap.generated.h"

USTRUCT(BlueprintType)
struct FPointWeightMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    CLOTHINGSYSTEMRUNTIMECOMMON_API FPointWeightMap();
};

