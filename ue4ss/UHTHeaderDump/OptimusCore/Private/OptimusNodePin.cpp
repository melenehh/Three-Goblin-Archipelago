#include "OptimusNodePin.h"

UOptimusNodePin::UOptimusNodePin() {
    this->bIsGroupingPin = false;
    this->Direction = EOptimusNodePinDirection::Unknown;
    this->StorageType = EOptimusNodePinStorageType::Value;
}


