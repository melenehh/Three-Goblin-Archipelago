#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneEvalTimeSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneEvalTimeSystem();

};

