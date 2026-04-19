#include "NetObjectCountLimiterConfig.h"

UNetObjectCountLimiterConfig::UNetObjectCountLimiterConfig() {
    this->Mode = ENetObjectCountLimiterMode::RoundRobin;
    this->MaxObjectCount = 2;
    this->Priority = 1.00f;
    this->OwningConnectionPriority = 1.00f;
    this->bEnableOwnedObjectsFastLane = true;
}


