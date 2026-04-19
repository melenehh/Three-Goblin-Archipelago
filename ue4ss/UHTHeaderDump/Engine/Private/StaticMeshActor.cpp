#include "StaticMeshActor.h"
#include "StaticMeshComponent.h"

AStaticMeshActor::AStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->bStaticMeshReplicateMovement = false;
    this->StaticMeshPhysicsReplicationMode = EPhysicsReplicationMode::Default;
    this->NavigationGeometryGatheringMode = ENavDataGatheringMode::Default;
}

void AStaticMeshActor::SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility) {
}


