#pragma once
#include "CoreMinimal.h"
#include "DeviceTriggerBaseData.h"
#include "InputDeviceProperty.h"
#include "InputDeviceTriggerEffect.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UInputDeviceTriggerEffect : public UInputDeviceProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceTriggerBaseData BaseTriggerData;
    
    UInputDeviceTriggerEffect();

};

