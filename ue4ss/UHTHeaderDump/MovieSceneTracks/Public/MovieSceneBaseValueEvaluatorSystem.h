#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneBaseValueEvaluatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneBaseValueEvaluatorSystem();

};

