#pragma once
#include "CoreMinimal.h"
#include "TimedDataInputEvaluationData.generated.h"

USTRUCT(BlueprintType)
struct FTimedDataInputEvaluationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToNewestSampleSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToOldestSampleSeconds;
    
    TIMEMANAGEMENT_API FTimedDataInputEvaluationData();
};

