#include "InputAction.h"

UInputAction::UInputAction() {
    this->bTriggerWhenPaused = false;
    this->bConsumeInput = true;
    this->bConsumesActionAndAxisMappings = false;
    this->bReserveAllMappings = false;
    this->TriggerEventsThatConsumeLegacyKeys = 0;
    this->ValueType = EInputActionValueType::Boolean;
    this->AccumulationBehavior = EInputActionAccumulationBehavior::TakeHighestAbsoluteValue;
    this->PlayerMappableKeySettings = NULL;
}


