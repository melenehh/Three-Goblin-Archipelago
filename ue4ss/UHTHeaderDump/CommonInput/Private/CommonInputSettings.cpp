#include "CommonInputSettings.h"

UCommonInputSettings::UCommonInputSettings() {
    this->bEnableInputMethodThrashingProtection = true;
    this->InputMethodThrashingLimit = 30;
    this->InputMethodThrashingWindowInSeconds = 3.00f;
    this->InputMethodThrashingCooldownInSeconds = 1.00f;
    this->bAllowOutOfFocusDeviceInput = true;
    this->bEnableDefaultInputConfig = true;
    this->bEnableEnhancedInputSupport = false;
    this->InputDataClass = NULL;
    this->ActionDomainTablePtr = NULL;
}

bool UCommonInputSettings::IsEnhancedInputSupportEnabled() {
    return false;
}


