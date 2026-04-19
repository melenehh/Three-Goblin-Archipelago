#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "WorldPartitionDestructibleHLODComponent.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWorldPartitionDestructibleHLODComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DestructibleActors;
    
public:
    UWorldPartitionDestructibleHLODComponent(const FObjectInitializer& ObjectInitializer);

};

