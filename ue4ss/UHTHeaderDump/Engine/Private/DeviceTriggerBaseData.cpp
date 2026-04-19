#include "DeviceTriggerBaseData.h"

FDeviceTriggerBaseData::FDeviceTriggerBaseData() {
    this->AffectedTriggers = EInputDeviceTriggerMask::None;
    this->bResetUponCompletion = false;
}

