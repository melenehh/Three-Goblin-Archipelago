#include "ClusterUnionReplicatedProxyComponent.h"
#include "Net/UnrealNetwork.h"

UClusterUnionReplicatedProxyComponent::UClusterUnionReplicatedProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetUpdateParentClusterUnion = false;
    this->bNetUpdateChildClusteredComponent = false;
    this->bNetUpdateParticleBoneIds = false;
    this->bNetUpdateParticleChildToParents = false;
    this->bIsPendingDeletion = false;
}

void UClusterUnionReplicatedProxyComponent::SetParticleChildToParent(int32 BoneID, const FTransform& ChildToParent) {
}

void UClusterUnionReplicatedProxyComponent::SetParticleBoneIds(const TArray<int32>& InIds) {
}

void UClusterUnionReplicatedProxyComponent::SetParentClusterUnion(UClusterUnionComponent* InComponent) {
}

void UClusterUnionReplicatedProxyComponent::SetChildClusteredComponent(UPrimitiveComponent* InComponent) {
}

void UClusterUnionReplicatedProxyComponent::OnRep_ParticleChildToParents() {
}

void UClusterUnionReplicatedProxyComponent::OnRep_ParticleBoneIds() {
}

void UClusterUnionReplicatedProxyComponent::OnRep_ParentClusterUnion() {
}

void UClusterUnionReplicatedProxyComponent::OnRep_ChildClusteredComponent() {
}

void UClusterUnionReplicatedProxyComponent::MarkPendingDeletion() {
}

bool UClusterUnionReplicatedProxyComponent::IsPendingDeletion() {
    return false;
}

UClusterUnionComponent* UClusterUnionReplicatedProxyComponent::GetParentClusterUnionComponent() const {
    return NULL;
}

void UClusterUnionReplicatedProxyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UClusterUnionReplicatedProxyComponent, ParentClusterUnion);
    DOREPLIFETIME(UClusterUnionReplicatedProxyComponent, ChildClusteredComponent);
    DOREPLIFETIME(UClusterUnionReplicatedProxyComponent, ParticleBoneIds);
    DOREPLIFETIME(UClusterUnionReplicatedProxyComponent, ParticleChildToParents);
}


