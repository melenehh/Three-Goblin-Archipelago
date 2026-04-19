#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSystem.h"
#include "MovieScenePreSpawnEventSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem {
    GENERATED_BODY()
public:
    UMovieScenePreSpawnEventSystem();

};

