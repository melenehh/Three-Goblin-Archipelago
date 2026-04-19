#include "InputPlatformSettings.h"

UInputPlatformSettings::UInputPlatformSettings() {
    this->MaxTriggerFeedbackPosition = 8;
    this->MaxTriggerFeedbackStrength = 8;
    this->MaxTriggerVibrationTriggerPosition = 9;
    this->MaxTriggerVibrationFrequency = 255;
    this->MaxTriggerVibrationAmplitude = 8;
    this->HardwareDevices.AddDefaulted(4);
}


