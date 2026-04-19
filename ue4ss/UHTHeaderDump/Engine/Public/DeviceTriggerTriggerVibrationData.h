#pragma once
#include "CoreMinimal.h"
#include "DeviceTriggerTriggerVibrationData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDeviceTriggerTriggerVibrationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TriggerPositionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VibrationFrequencyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VibrationAmplitudeCurve;
    
    ENGINE_API FDeviceTriggerTriggerVibrationData();
};

