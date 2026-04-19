#include "GeometryCollectionISMPoolDebugDrawComponent.h"

UGeometryCollectionISMPoolDebugDrawComponent::UGeometryCollectionISMPoolDebugDrawComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->bShowGlobalStats = false;
    this->bShowStats = false;
    this->bShowBounds = false;
    this->SelectedComponent = NULL;
}


