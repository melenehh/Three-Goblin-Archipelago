#include "HeterogeneousVolume.h"
#include "HeterogeneousVolumeComponent.h"

AHeterogeneousVolume::AHeterogeneousVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHeterogeneousVolumeComponent>(TEXT("HeterogeneousVolumeComponent"));
    this->HeterogeneousVolumeComponent = (UHeterogeneousVolumeComponent*)RootComponent;
}


