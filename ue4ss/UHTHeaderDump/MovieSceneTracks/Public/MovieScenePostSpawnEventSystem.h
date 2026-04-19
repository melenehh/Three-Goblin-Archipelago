#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSystem.h"
#include "MovieScenePostSpawnEventSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem {
    GENERATED_BODY()
public:
    UMovieScenePostSpawnEventSystem();

};

