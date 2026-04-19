#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneGenericBoundObjectInstantiator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneGenericBoundObjectInstantiator();

};

