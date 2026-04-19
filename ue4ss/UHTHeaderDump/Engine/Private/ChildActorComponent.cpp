#include "ChildActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UChildActorComponent::UChildActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChildActorClass = NULL;
    this->ChildActor = NULL;
    this->ChildActorTemplate = NULL;
    this->bChildActorIsTransient = false;
}

void UChildActorComponent::SetChildActorClass(TSubclassOf<AActor> InClass) {
}

void UChildActorComponent::OnRep_ChildActor() {
}

void UChildActorComponent::OnChildActorDestroyed(AActor* Actor) {
}

void UChildActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChildActorComponent, ChildActor);
}


