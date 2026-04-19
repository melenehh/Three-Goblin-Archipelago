#include "OptimusDataType.h"

FOptimusDataType::FOptimusDataType() {
    this->ShaderValueSize = 0;
    this->bHasCustomPinColor = false;
    this->UsageFlags = EOptimusDataTypeUsageFlags::None;
    this->TypeFlags = EOptimusDataTypeFlags::None;
}

