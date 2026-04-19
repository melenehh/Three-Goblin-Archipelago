#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "PartitionActor.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class APartitionActor : public AActor {
    GENERATED_BODY()
public:
    APartitionActor(const FObjectInitializer& ObjectInitializer);

};

