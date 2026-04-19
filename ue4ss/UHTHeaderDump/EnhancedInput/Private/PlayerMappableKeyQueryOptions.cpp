#include "PlayerMappableKeyQueryOptions.h"

FPlayerMappableKeyQueryOptions::FPlayerMappableKeyQueryOptions() {
    this->SlotToMatch = EPlayerMappableKeySlot::First;
    this->bMatchBasicKeyTypes = false;
    this->bMatchKeyAxisType = false;
    this->RequiredDeviceType = EHardwareDevicePrimaryType::Unspecified;
    this->RequiredDeviceFlags = 0;
}

