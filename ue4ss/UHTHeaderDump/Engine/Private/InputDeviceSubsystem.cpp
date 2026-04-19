#include "InputDeviceSubsystem.h"
#include "Templates/SubclassOf.h"

UInputDeviceSubsystem::UInputDeviceSubsystem() {
}

void UInputDeviceSubsystem::RemoveDevicePropertyHandles(const TSet<FInputDevicePropertyHandle>& HandlesToRemove) {
}

void UInputDeviceSubsystem::RemoveDevicePropertyByHandle(const FInputDevicePropertyHandle HandleToRemove) {
}

void UInputDeviceSubsystem::RemoveAllDeviceProperties() {
}

bool UInputDeviceSubsystem::IsPropertyActive(const FInputDevicePropertyHandle Handle) const {
    return false;
}

FHardwareDeviceIdentifier UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(const FPlatformUserId InUserId) const {
    return FHardwareDeviceIdentifier{};
}

FHardwareDeviceIdentifier UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier(const FInputDeviceId InputDevice) const {
    return FHardwareDeviceIdentifier{};
}

UInputDeviceProperty* UInputDeviceSubsystem::GetActiveDeviceProperty(const FInputDevicePropertyHandle Handle) const {
    return NULL;
}

FInputDevicePropertyHandle UInputDeviceSubsystem::ActivateDevicePropertyOfClass(TSubclassOf<UInputDeviceProperty> PropertyClass, const FActivateDevicePropertyParams& Params) {
    return FInputDevicePropertyHandle{};
}


