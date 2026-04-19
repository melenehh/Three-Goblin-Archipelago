#pragma once
#include "CoreMinimal.h"
#include "RichCurve.h"
#include "RuntimeCurveLinearColor.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FRuntimeCurveLinearColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve ColorCurves[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* ExternalCurve;
    
    ENGINE_API FRuntimeCurveLinearColor();
};

