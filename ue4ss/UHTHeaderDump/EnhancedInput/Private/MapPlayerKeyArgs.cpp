#include "MapPlayerKeyArgs.h"

FMapPlayerKeyArgs::FMapPlayerKeyArgs() {
    this->Slot = EPlayerMappableKeySlot::First;
    this->bCreateMatchingSlotIfNeeded = false;
    this->bDeferOnSettingsChangedBroadcast = false;
}

