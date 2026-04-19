#pragma once
#include "CoreMinimal.h"
#include "NameCurveKey.generated.h"

USTRUCT(BlueprintType)
struct FNameCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    ENGINE_API FNameCurveKey();
};

