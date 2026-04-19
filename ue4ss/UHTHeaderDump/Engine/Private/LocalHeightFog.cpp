#include "LocalHeightFog.h"
#include "LocalHeightFogComponent.h"

ALocalHeightFog::ALocalHeightFog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULocalHeightFogComponent>(TEXT("LocalHeightFogComponent"));
    this->LocalHeightFogVolume = (ULocalHeightFogComponent*)RootComponent;
}


