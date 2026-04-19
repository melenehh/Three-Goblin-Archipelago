#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PlatformSettings -FallbackName=PlatformSettings
#include "HardwareDeviceIdentifier.h"
#include "InputPlatformSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Input)
class UInputPlatformSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTriggerFeedbackPosition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTriggerFeedbackStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTriggerVibrationTriggerPosition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTriggerVibrationFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTriggerVibrationAmplitude;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHardwareDeviceIdentifier> HardwareDevices;
    
public:
    UInputPlatformSettings();

};

