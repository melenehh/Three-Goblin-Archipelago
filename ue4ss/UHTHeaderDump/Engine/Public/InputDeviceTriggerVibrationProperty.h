#pragma once
#include "CoreMinimal.h"
#include "DeviceTriggerTriggerVibrationData.h"
#include "InputDeviceTriggerEffect.h"
#include "InputDeviceTriggerVibrationProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UInputDeviceTriggerVibrationProperty : public UInputDeviceTriggerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceTriggerTriggerVibrationData TriggerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDeviceTriggerTriggerVibrationData> DeviceOverrideData;
    
    UInputDeviceTriggerVibrationProperty();

};

