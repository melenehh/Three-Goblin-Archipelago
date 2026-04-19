#pragma once
#include "CoreMinimal.h"
#include "IndexedCurve.h"
#include "NameCurveKey.h"
#include "NameCurve.generated.h"

USTRUCT(BlueprintType)
struct FNameCurve : public FIndexedCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FNameCurveKey> Keys;
    
    ENGINE_API FNameCurve();
};

