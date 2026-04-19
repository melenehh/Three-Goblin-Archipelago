#pragma once
#include "CoreMinimal.h"
#include "DeviceColorData.h"
#include "InputDeviceProperty.h"
#include "ColorInputDeviceProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UColorInputDeviceProperty : public UInputDeviceProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceColorData ColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDeviceColorData> DeviceOverrideData;
    
    UColorInputDeviceProperty();

};

