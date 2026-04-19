#pragma once
#include "CoreMinimal.h"
#include "ISMPartitionActor.h"
#include "InstancedPlacementPartitionActor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AInstancedPlacementPartitionActor : public AISMPartitionActor {
    GENERATED_BODY()
public:
    AInstancedPlacementPartitionActor(const FObjectInitializer& ObjectInitializer);

};

