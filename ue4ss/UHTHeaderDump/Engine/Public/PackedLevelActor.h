#pragma once
#include "CoreMinimal.h"
#include "LevelInstance.h"
#include "PackedLevelActor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class APackedLevelActor : public ALevelInstance {
    GENERATED_BODY()
public:
    APackedLevelActor(const FObjectInitializer& ObjectInitializer);

};

