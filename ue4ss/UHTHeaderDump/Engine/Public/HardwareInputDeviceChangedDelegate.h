#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
#include "HardwareInputDeviceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHardwareInputDeviceChanged, const FPlatformUserId, UserId, const FInputDeviceId, DeviceID);

