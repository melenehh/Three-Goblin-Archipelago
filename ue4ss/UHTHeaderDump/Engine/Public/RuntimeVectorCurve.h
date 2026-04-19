#pragma once
#include "CoreMinimal.h"
#include "RichCurve.h"
#include "RuntimeVectorCurve.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FRuntimeVectorCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve VectorCurves[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ExternalCurve;
    
    ENGINE_API FRuntimeVectorCurve();
};

