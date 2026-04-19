#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "EComponentMobility.h"
#include "ENavDataGatheringMode.h"
#include "EPhysicsReplicationMode.h"
#include "StaticMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class AStaticMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticMeshReplicateMovement;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhysicsReplicationMode StaticMeshPhysicsReplicationMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavDataGatheringMode NavigationGeometryGatheringMode;
    
    AStaticMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
    
};

