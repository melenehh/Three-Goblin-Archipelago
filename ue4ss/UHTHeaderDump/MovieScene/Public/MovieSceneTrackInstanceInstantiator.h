#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneTrackInstanceInstantiator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneTrackInstanceInstantiator();

};

