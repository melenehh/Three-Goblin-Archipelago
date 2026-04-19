#pragma once
#include "CoreMinimal.h"
#include "AudioBasedVibrationData.h"
#include "InputDeviceProperty.h"
#include "InputDeviceAudioBasedVibrationProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UInputDeviceAudioBasedVibrationProperty : public UInputDeviceProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioBasedVibrationData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAudioBasedVibrationData> DeviceOverrideData;
    
    UInputDeviceAudioBasedVibrationProperty();

};

