#pragma once
#include "CoreMinimal.h"
#include "DeviceTriggerFeedbackData.h"
#include "InputDeviceTriggerEffect.h"
#include "InputDeviceTriggerFeedbackProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UInputDeviceTriggerFeedbackProperty : public UInputDeviceTriggerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceTriggerFeedbackData TriggerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDeviceTriggerFeedbackData> DeviceOverrideData;
    
    UInputDeviceTriggerFeedbackProperty();

};

