#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KAggregateGeom -FallbackName=KAggregateGeom
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
#include "BaseDynamicMeshComponent.h"
#include "EDynamicMeshComponentTangentsMode.h"
#include "DynamicMeshComponent.generated.h"

class UBodySetup;
class UDynamicMesh;
class UMaterialInterface;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDynamicMeshComponent : public UBaseDynamicMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMesh* MeshObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicMeshComponentTangentsMode TangentsType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionTraceFlag> CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsyncCooking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableComplexCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferCollisionUpdates;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBodySetup* MeshBodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKAggregateGeom AggGeom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBodySetup*> AsyncBodySetupQueue;
    
public:
    UDynamicMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCollision(bool bOnlyIfPending);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicMesh(UDynamicMesh* NewMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMeshModified();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDynamicMeshComponentTangentsMode GetTangentsTypePure() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDynamicMeshComponentTangentsMode GetTangentsType() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableComplexAsSimpleCollision();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureMaterialSet(const TArray<UMaterialInterface*>& NewMaterialSet);
    

    // Fix for true pure virtual functions not being implemented
};

