#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneFadeSystem.generated.h"

UCLASS(Blueprintable)
class UMovieSceneFadeSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneFadeSystem();

};

