#include "LocalHeightFogComponent.h"

ULocalHeightFogComponent::ULocalHeightFogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FogMode = ELocalFogMode::LocalHeightFog;
    this->FogDensity = 5.00f;
    this->FogHeightFalloff = 1000.00f;
    this->FogHeightOffset = 0.00f;
    this->FogRadialAttenuation = 0.00f;
    this->FogPhaseG = 0.80f;
    this->FogSortPriority = 0;
}


