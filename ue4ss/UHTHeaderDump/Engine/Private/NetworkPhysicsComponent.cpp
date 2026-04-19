#include "NetworkPhysicsComponent.h"
#include "Net/UnrealNetwork.h"

UNetworkPhysicsComponent::UNetworkPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UNetworkPhysicsComponent::ServerReceiveInputsDatas_Implementation(const TArray<uint8>& ClientInputs) {
}
bool UNetworkPhysicsComponent::ServerReceiveInputsDatas_Validate(const TArray<uint8>& ClientInputs) {
    return true;
}

void UNetworkPhysicsComponent::OnRep_SetReplicatedStates() {
}

void UNetworkPhysicsComponent::OnRep_SetReplicatedInputs() {
}

void UNetworkPhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNetworkPhysicsComponent, ReplicatedInputs);
    DOREPLIFETIME(UNetworkPhysicsComponent, ReplicatedStates);
}


