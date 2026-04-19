#include "ObjectReplicationBridgeConfig.h"

UObjectReplicationBridgeConfig::UObjectReplicationBridgeConfig() {
    this->FilterConfigs.AddDefaulted(3);
    this->PrioritizerConfigs.AddDefaulted(1);
    this->DeltaCompressionConfigs.AddDefaulted(2);
    this->DefaultSpatialFilterName = TEXT("Spatial");
}


