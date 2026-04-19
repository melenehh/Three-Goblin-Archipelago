#include "LandscapeMeshProxyComponent.h"

ULandscapeMeshProxyComponent::ULandscapeMeshProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProxyLOD = 0;
    this->LODGroupKey = 0;
}


