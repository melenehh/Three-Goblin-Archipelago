#include "ProceduralFoliageBlockingVolume.h"

AProceduralFoliageBlockingVolume::AProceduralFoliageBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->ProceduralFoliageVolume = NULL;
}


