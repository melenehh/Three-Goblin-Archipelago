#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "NetworkPhysicsComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNetworkPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetReplicatedInputs, meta=(AllowPrivateAccess=true))
    TArray<uint8> ReplicatedInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetReplicatedStates, meta=(AllowPrivateAccess=true))
    TArray<uint8> ReplicatedStates;
    
public:
    UNetworkPhysicsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerReceiveInputsDatas(const TArray<uint8>& ClientInputs);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SetReplicatedStates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetReplicatedInputs();
    
};

