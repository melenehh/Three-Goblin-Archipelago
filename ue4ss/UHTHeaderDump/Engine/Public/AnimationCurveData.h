#pragma once
#include "CoreMinimal.h"
#include "FloatCurve.h"
#include "TransformCurve.h"
#include "AnimationCurveData.generated.h"

USTRUCT(BlueprintType)
struct FAnimationCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatCurve> FloatCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransformCurve> TransformCurves;
    
    ENGINE_API FAnimationCurveData();
};

