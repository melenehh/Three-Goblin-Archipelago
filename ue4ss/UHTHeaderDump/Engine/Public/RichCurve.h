#pragma once
#include "CoreMinimal.h"
#include "RealCurve.h"
#include "RichCurveKey.h"
#include "RichCurve.generated.h"

USTRUCT(BlueprintType)
struct FRichCurve : public FRealCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRichCurveKey> Keys;
    
    ENGINE_API FRichCurve();
};

