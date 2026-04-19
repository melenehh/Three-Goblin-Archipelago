#include "HLODLayer.h"
#include "WorldPartitionHLOD.h"

UHLODLayer::UHLODLayer() {
    this->LayerType = EHLODLayerType::Instancing;
    this->HLODBuilderClass = NULL;
    this->HLODBuilderSettings = NULL;
    this->bIsSpatiallyLoaded = true;
    this->CellSize = 25600;
    this->LoadingRange = 51200.00f;
    this->ParentLayer = NULL;
    this->HLODActorClass = AWorldPartitionHLOD::StaticClass();
    this->HLODModifierClass = NULL;
}


