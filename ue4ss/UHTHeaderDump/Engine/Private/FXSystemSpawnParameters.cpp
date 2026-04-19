#include "FXSystemSpawnParameters.h"

FFXSystemSpawnParameters::FFXSystemSpawnParameters() {
    this->WorldContextObject = NULL;
    this->SystemTemplate = NULL;
    this->AttachToComponent = NULL;
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->bAutoDestroy = false;
    this->bAutoActivate = false;
    this->PoolingMethod = EPSCPoolMethod::None;
    this->bPreCullCheck = false;
    this->bIsPlayerEffect = false;
}

