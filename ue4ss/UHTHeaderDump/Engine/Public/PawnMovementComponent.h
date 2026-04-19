#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AsyncPhysicsTimestamp.h"
#include "EPhysicsStateAction.h"
#include "NavMovementComponent.h"
#include "PawnMovementComponent.generated.h"

class APawn;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPawnMovementComponent : public UNavMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* PawnOwner;
    
public:
    UPawnMovementComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAsyncPhysicsStateAction(const UPrimitiveComponent* ActionComponent, const FName BoneName, const FAsyncPhysicsTimestamp Timestamp, const EPhysicsStateAction ActionType, const FVector ActionDatas, const FVector ActionPosition);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAsyncPhysicsStateAction(const UPrimitiveComponent* ActionComponent, const FName BoneName, const FAsyncPhysicsTimestamp Timestamp, const EPhysicsStateAction ActionType, const FVector ActionDatas, const FVector ActionPosition);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPendingInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastInputVector() const;
    
    UFUNCTION(BlueprintCallable)
    FVector ConsumeInputVector();
    
    UFUNCTION(BlueprintCallable)
    void AddInputVector(FVector WorldVector, bool bForce);
    
};

