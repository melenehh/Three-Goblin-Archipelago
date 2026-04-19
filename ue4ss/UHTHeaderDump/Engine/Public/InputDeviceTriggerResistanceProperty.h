#pragma once
#include "CoreMinimal.h"
#include "DeviceTriggerTriggerResistanceData.h"
#include "InputDeviceTriggerEffect.h"
#include "InputDeviceTriggerResistanceProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UInputDeviceTriggerResistanceProperty : public UInputDeviceTriggerEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceTriggerTriggerResistanceData TriggerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDeviceTriggerTriggerResistanceData> DeviceOverrideData;
    
public:
    UInputDeviceTriggerResistanceProperty();

};

