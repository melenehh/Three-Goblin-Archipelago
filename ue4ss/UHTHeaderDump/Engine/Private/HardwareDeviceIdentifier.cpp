#include "HardwareDeviceIdentifier.h"

FHardwareDeviceIdentifier::FHardwareDeviceIdentifier() {
    this->PrimaryDeviceType = EHardwareDevicePrimaryType::Unspecified;
    this->SupportedFeaturesMask = 0;
}

