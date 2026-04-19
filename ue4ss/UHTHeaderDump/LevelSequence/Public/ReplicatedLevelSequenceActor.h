#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "ReplicatedLevelSequenceActor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AReplicatedLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AReplicatedLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

