#include "CommonUISubsystemBase.h"

UCommonUISubsystemBase::UCommonUISubsystemBase() {
}

FSlateBrush UCommonUISubsystemBase::GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const FName& GamepadName) const {
    return FSlateBrush{};
}

FSlateBrush UCommonUISubsystemBase::GetEnhancedInputActionButtonIcon(const UInputAction* InputAction, const ULocalPlayer* LocalPlayer) const {
    return FSlateBrush{};
}


