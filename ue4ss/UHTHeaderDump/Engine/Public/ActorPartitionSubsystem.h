#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "ActorPartitionSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UActorPartitionSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UActorPartitionSubsystem();

};

