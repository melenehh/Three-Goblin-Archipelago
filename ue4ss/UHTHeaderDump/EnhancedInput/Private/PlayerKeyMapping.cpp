#include "PlayerKeyMapping.h"

FPlayerKeyMapping::FPlayerKeyMapping() {
    this->Slot = EPlayerMappableKeySlot::First;
    this->bIsDirty = false;
    this->AssociatedInputAction = NULL;
}

