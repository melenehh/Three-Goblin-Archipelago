#pragma once
#include "CoreMinimal.h"
#include "RichCurve.h"
#include "RuntimeFloatCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FRuntimeFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve EditorCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ExternalCurve;
    
    ENGINE_API FRuntimeFloatCurve();
};

