#include "FoliageInstancedStaticMeshComponent.h"

UFoliageInstancedStaticMeshComponent::UFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->bUseTranslatedInstanceSpace = true;
    this->bEnableDiscardOnLoad = false;
}


