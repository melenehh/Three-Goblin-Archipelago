#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneRootInstantiatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneRootInstantiatorSystem();

};

