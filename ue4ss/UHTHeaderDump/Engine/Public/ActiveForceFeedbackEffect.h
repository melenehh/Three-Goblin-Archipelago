#pragma once
#include "CoreMinimal.h"
#include "InputDevicePropertyHandle.h"
#include "ActiveForceFeedbackEffect.generated.h"

class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FActiveForceFeedbackEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FInputDevicePropertyHandle> ActiveDeviceProperties;
    
    ENGINE_API FActiveForceFeedbackEffect();
};

