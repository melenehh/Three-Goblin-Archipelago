#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneTransformOriginInstantiatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTransformOriginInstantiatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneTransformOriginInstantiatorSystem();

};

