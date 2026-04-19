#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EDamageModelTypeEnum -FallbackName=EDamageModelTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EGeometryCollectionPhysicsTypeEnum -FallbackName=EGeometryCollectionPhysicsTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EInitialVelocityTypeEnum -FallbackName=EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EObjectStateTypeEnum -FallbackName=EObjectStateTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosNotifyHandlerInterface -FallbackName=ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosPhysicsCollisionInfo -FallbackName=ChaosPhysicsCollisionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=EClusterConnectionTypeEnum -FallbackName=EClusterConnectionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=OnChaosPhysicsCollision__DelegateSignature -FallbackName=OnChaosPhysicsCollisionDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "GeomComponentCacheParameters.h"
#include "GeometryCollectionDamagePropagationData.h"
#include "GeometryCollectionRepData.h"
#include "OnChaosBreakEventDelegate.h"
#include "OnChaosCrumblingEventDelegate.h"
#include "OnChaosRemovalEventDelegate.h"
#include "GeometryCollectionComponent.generated.h"

class AChaosSolverActor;
class AFieldSystemActor;
class AGeometryCollectionISMPoolActor;
class IGeometryCollectionExternalRenderInterface;
class UGeometryCollectionExternalRenderInterface;
class UBodySetup;
class UChaosGameplayEventDispatcher;
class UChaosPhysicalMaterial;
class UFieldNodeBase;
class UFieldSystemMetaData;
class UGeometryCollection;
class UGeometryCollectionComponent;
class UInstancedStaticMeshComponent;
class UPhysicalMaterial;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class UGeometryCollectionComponent : public UMeshComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent*, FracturedComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent*, FracturedComponent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UGeometryCollection* RestCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<AFieldSystemActor*> InitializationFields;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Simulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GravityGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableClustering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClusterGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxClusterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimulatedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageModelTypeEnum DamageModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSizeSpecificDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryCollectionDamagePropagationData DamagePropagationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDamageFromCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRemovalOnSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRemovalOnBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClusterConnectionTypeEnum ClusterConnectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionSampleFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearEtherDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularEtherDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeomComponentCacheParameters CacheParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> RestTransforms;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosBreakEvent OnChaosBreakEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosRemovalEvent OnChaosRemovalEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosCrumblingEvent OnChaosCrumblingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    float DesiredCacheTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CachePlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyBreaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyTrailing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyRemovals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyCrumblings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrumblingEventIncludesChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyGlobalBreaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyGlobalCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyGlobalRemovals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyGlobalCrumblings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobalCrumblingEventIncludesChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStoreVelocities;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBoneColors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRootProxyForNavigation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateNavigationInTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGeometryCollectionISMPoolActor* ISMPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAssignISMPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCustomRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CustomRendererType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGeometryCollectionExternalRenderInterface* CustomRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAbandonAfterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbandonedCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CollisionProfilePerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplicationAbandonClusterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplicationAbandonAfterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplicationMaxPositionAndVelocityCorrectionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepData, meta=(AllowPrivateAccess=true))
    FGeometryCollectionRepData RepData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* DummyBodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChaosGameplayEventDispatcher* EventDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;
    
public:
    UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetRestCollection(const UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults);
    
    UFUNCTION(BlueprintCallable)
    void SetPerParticleCollisionProfileName(const TArray<int32>& BoneIds, FName ProfileName);
    
    UFUNCTION(BlueprintCallable)
    void SetPerLevelCollisionProfileNames(const TArray<FName>& ProfileNames);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyRemovals(bool bNewNotifyRemovals);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyBreaks(bool bNewNotifyBreaks);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalRestTransforms(const TArray<FTransform>& Transforms, bool bOnlyLeaves);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDamageFromCollision(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageThreshold(const TArray<float>& InDamageThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32 MaxLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchoredByIndex(int32 Index, bool bAnchored);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32 MaxLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAbandonedParticleCollisionProfileName(FName CollisionProfile);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllAnchors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepData();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRootBroken() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRootInitialTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRootIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRootCurrentTransform() const;
    
    UFUNCTION(BlueprintCallable)
    void GetMassAndExtents(int32 ItemIndex, float& OutMass, FBox& OutExtents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetLocalBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTransform> GetInitialLocalRestTransforms() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetInitialLevel(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetDamageThreshold() const;
    
    UFUNCTION(BlueprintCallable)
    void CrumbleCluster(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void CrumbleActiveClusters();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFUNCTION(BlueprintCallable)
    void ApplyLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKinematicField(float Radius, FVector position);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
    
    UFUNCTION(BlueprintCallable)
    void ApplyExternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBreakingLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBreakingAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAssetDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity);
    

    // Fix for true pure virtual functions not being implemented
};

