#include "InputDeviceProperty.h"

UInputDeviceProperty::UInputDeviceProperty() {
    this->PropertyDuration = 0.00f;
}

void UInputDeviceProperty::ResetDeviceProperty_Implementation(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceID, bool bForceReset) {
}

void UInputDeviceProperty::EvaluateDeviceProperty_Implementation(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceID, const float DeltaTime, const float Duration) {
}

void UInputDeviceProperty::ApplyDeviceProperty(const FPlatformUserId UserId, const FInputDeviceId DeviceID) {
}


