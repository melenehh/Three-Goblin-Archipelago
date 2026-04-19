#include "WorldPartitionDestructibleHLODMeshComponent.h"
#include "Net/UnrealNetwork.h"

UWorldPartitionDestructibleHLODMeshComponent::UWorldPartitionDestructibleHLODMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestructibleHLODMaterial = NULL;
    this->VisibilityMaterial = NULL;
    this->VisibilityTexture = NULL;
}

void UWorldPartitionDestructibleHLODMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWorldPartitionDestructibleHLODMeshComponent, DestructibleHLODState);
}


