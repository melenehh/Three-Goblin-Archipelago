#pragma once
#include "CoreMinimal.h"
#include "InterchangeStepCurve.generated.h"

USTRUCT(BlueprintType)
struct INTERCHANGECOMMONPARSER_API FInterchangeStepCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> KeyTimes;
    
    FInterchangeStepCurve();
};

