#include "WorldPartition.h"

UWorldPartition::UWorldPartition() {
    this->ActorDescContainer = NULL;
    this->RuntimeHash = NULL;
    this->bEnableStreaming = true;
    this->ServerStreamingMode = EWorldPartitionServerStreamingMode::ProjectDefault;
    this->ServerStreamingOutMode = EWorldPartitionServerStreamingOutMode::ProjectDefault;
    this->DataLayerManager = NULL;
    this->StreamingPolicy = NULL;
}


