#pragma once
#include "CoreMinimal.h"
#include "TimeStretchCurveInstance.generated.h"

USTRUCT(BlueprintType)
struct FTimeStretchCurveInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasValidData;
    
public:
    ENGINE_API FTimeStretchCurveInstance();
};

