#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneBoundSceneComponentInstantiator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneBoundSceneComponentInstantiator();

};

