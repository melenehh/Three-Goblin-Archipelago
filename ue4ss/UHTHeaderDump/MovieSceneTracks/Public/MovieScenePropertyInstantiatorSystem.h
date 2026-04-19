#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "MovieScenePropertyInstantiatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieScenePropertyInstantiatorSystem();

};

