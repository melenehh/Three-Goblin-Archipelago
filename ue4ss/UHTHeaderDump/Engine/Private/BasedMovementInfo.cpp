#include "BasedMovementInfo.h"

FBasedMovementInfo::FBasedMovementInfo() {
    this->BaseID = 0;
    this->MovementBase = NULL;
    this->bServerHasBaseComponent = false;
    this->bRelativeRotation = false;
    this->bServerHasVelocity = false;
}

