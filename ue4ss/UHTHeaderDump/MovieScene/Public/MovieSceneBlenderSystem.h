#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneBlenderSystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneBlenderSystem();

};

