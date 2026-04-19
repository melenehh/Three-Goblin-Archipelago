#include "HierarchicalInstancedStaticMeshComponent.h"

UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAsOccluder = false;
    this->bUseTranslatedInstanceSpace = false;
    this->NumBuiltInstances = 0;
    this->bEnableDensityScaling = false;
    this->InstanceLODDistanceScale = 1.00f;
    this->OcclusionLayerNumNodes = 0;
    this->bDisableCollision = false;
    this->InstanceCountToRender = 0;
}

void UHierarchicalInstancedStaticMeshComponent::SetLODDistanceScale(float InLODDistanceScale) {
}

float UHierarchicalInstancedStaticMeshComponent::GetLODDistanceScale() const {
    return 0.0f;
}


