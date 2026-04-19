#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ClusterUnionParticleCandidateData.h"
#include "ClusterUnionReplicatedData.h"
#include "ComponentReference.h"
#include "EComponentPhysicsStateChange.h"
#include "OnClusterUnionAddedComponentDelegate.h"
#include "OnClusterUnionBoundsChangedDelegate.h"
#include "OnClusterUnionRemovedComponentDelegate.h"
#include "PrimitiveComponent.h"
#include "ClusterUnionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UClusterUnionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClusterUnionAddedComponent OnComponentAddedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClusterUnionRemovedComponent OnComponentRemovedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClusterUnionBoundsChanged OnComponentBoundsChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> ClusteredComponentsReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FClusterUnionParticleCandidateData> UniqueIdxToComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RigidState, meta=(AllowPrivateAccess=true))
    FClusterUnionReplicatedData ReplicatedRigidState;
    
public:
    UClusterUnionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsAnchored(bool bIsAnchored);
    
    UFUNCTION(BlueprintCallable)
    void RemoveComponentFromCluster(UPrimitiveComponent* InComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RigidState();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsComponentAdded(UPrimitiveComponent* Component);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsAuthority() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleComponentPhysicsStateChangePostAddIntoClusterUnion(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
    
    UFUNCTION(BlueprintCallable)
    void HandleComponentPhysicsStateChange(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> GetPrimitiveComponents();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetActors();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceSetChildToParent(UPrimitiveComponent* InComponent, const TArray<int32>& BoneIds, const TArray<FTransform>& ChildToParent);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddComponentToCluster(UPrimitiveComponent* InComponent, const TArray<int32>& BoneIds);
    
};

