#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSystem.h"
#include "MovieScenePostEvalEventSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem {
    GENERATED_BODY()
public:
    UMovieScenePostEvalEventSystem();

};

