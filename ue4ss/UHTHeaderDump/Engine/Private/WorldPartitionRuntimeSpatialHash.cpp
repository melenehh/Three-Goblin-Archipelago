#include "WorldPartitionRuntimeSpatialHash.h"

UWorldPartitionRuntimeSpatialHash::UWorldPartitionRuntimeSpatialHash() {
    this->UseAlignedGridLevels = EWorldPartitionCVarProjectDefaultOverride::Disabled;
    this->SnapNonAlignedGridLevelsToLowerLevels = EWorldPartitionCVarProjectDefaultOverride::Disabled;
    this->PlaceSmallActorsUsingLocation = EWorldPartitionCVarProjectDefaultOverride::Enabled;
    this->PlacePartitionActorsUsingLocation = EWorldPartitionCVarProjectDefaultOverride::Enabled;
    this->bEnableZCulling = false;
}


