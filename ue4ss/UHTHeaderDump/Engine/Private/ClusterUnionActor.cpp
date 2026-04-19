#include "ClusterUnionActor.h"
#include "ClusterUnionComponent.h"

AClusterUnionActor::AClusterUnionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UClusterUnionComponent>(TEXT("ClusterUnion"));
    this->ClusterUnion = (UClusterUnionComponent*)RootComponent;
}

UClusterUnionComponent* AClusterUnionActor::GetClusterUnionComponent() const {
    return NULL;
}


