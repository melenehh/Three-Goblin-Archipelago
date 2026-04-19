#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionDestructibleHLODComponent.h"
#include "WorldPartitionDestructibleHLODState.h"
#include "WorldPartitionDestructibleHLODMeshComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2DDynamic;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWorldPartitionDestructibleHLODMeshComponent : public UWorldPartitionDestructibleHLODComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DestructibleHLODMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FWorldPartitionDestructibleHLODState DestructibleHLODState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* VisibilityMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* VisibilityTexture;
    
public:
    UWorldPartitionDestructibleHLODMeshComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

