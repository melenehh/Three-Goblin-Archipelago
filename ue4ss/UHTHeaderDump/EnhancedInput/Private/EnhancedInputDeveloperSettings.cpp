#include "EnhancedInputDeveloperSettings.h"

UEnhancedInputDeveloperSettings::UEnhancedInputDeveloperSettings() {
    this->bSendTriggeredEventsWhenInputIsFlushed = true;
    this->bEnableUserSettings = false;
    this->bEnableDefaultMappingContexts = true;
    this->bShouldOnlyTriggerLastActionInChord = true;
    this->bLogOnDeprecatedConfigUsed = true;
    this->bEnableWorldSubsystem = false;
    this->bShouldLogAllWorldSubsystemInputs = false;
}


