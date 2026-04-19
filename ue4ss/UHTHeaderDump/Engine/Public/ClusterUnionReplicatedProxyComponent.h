#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ActorComponent.h"
#include "ClusterUnionReplicatedProxyComponent.generated.h"

class UClusterUnionComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UClusterUnionReplicatedProxyComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, ReplicatedUsing=OnRep_ParentClusterUnion, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UClusterUnionComponent> ParentClusterUnion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNetUpdateParentClusterUnion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, ReplicatedUsing=OnRep_ChildClusteredComponent, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> ChildClusteredComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNetUpdateChildClusteredComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParticleBoneIds, meta=(AllowPrivateAccess=true))
    TArray<int32> ParticleBoneIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNetUpdateParticleBoneIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ParticleChildToParents, meta=(AllowPrivateAccess=true))
    TArray<FTransform> ParticleChildToParents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNetUpdateParticleChildToParents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPendingDeletion;
    
public:
    UClusterUnionReplicatedProxyComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetParticleChildToParent(int32 BoneID, const FTransform& ChildToParent);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleBoneIds(const TArray<int32>& InIds);
    
    UFUNCTION(BlueprintCallable)
    void SetParentClusterUnion(UClusterUnionComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetChildClusteredComponent(UPrimitiveComponent* InComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ParticleChildToParents();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ParticleBoneIds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ParentClusterUnion();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChildClusteredComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkPendingDeletion();
    
    UFUNCTION(BlueprintCallable)
    bool IsPendingDeletion();
    
    UFUNCTION(BlueprintCallable)
    UClusterUnionComponent* GetParentClusterUnionComponent() const;
    
};

