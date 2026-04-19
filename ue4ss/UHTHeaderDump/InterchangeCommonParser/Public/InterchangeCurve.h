#pragma once
#include "CoreMinimal.h"
#include "InterchangeCurveKey.h"
#include "InterchangeCurve.generated.h"

USTRUCT(BlueprintType)
struct INTERCHANGECOMMONPARSER_API FInterchangeCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterchangeCurveKey> Keys;
    
    FInterchangeCurve();
};

