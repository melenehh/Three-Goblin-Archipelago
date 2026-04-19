#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DynamicMeshActor.generated.h"

class UDynamicMesh;
class UDynamicMeshComponent;
class UDynamicMeshPool;

UCLASS(Blueprintable, MinimalAPI)
class ADynamicMeshActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshComponent* DynamicMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableComputeMeshPool;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDynamicMeshPool* DynamicMeshPool;
    
public:
    ADynamicMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ReleaseComputeMesh(UDynamicMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllComputeMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDynamicMeshComponent* GetDynamicMeshComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UDynamicMeshPool* GetComputeMeshPool();
    
    UFUNCTION(BlueprintCallable)
    void FreeAllComputeMeshes();
    
    UFUNCTION(BlueprintCallable)
    UDynamicMesh* AllocateComputeMesh();
    
};

