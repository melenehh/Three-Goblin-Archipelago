#pragma once
#include "CoreMinimal.h"
#include "DeviceColorCurveData.h"
#include "InputDeviceProperty.h"
#include "ColorInputDeviceCurveProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UColorInputDeviceCurveProperty : public UInputDeviceProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceColorCurveData ColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDeviceColorCurveData> DeviceOverrideData;
    
public:
    UColorInputDeviceCurveProperty();

};

