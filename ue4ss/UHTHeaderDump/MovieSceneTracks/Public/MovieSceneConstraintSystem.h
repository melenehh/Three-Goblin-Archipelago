#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneConstraintSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneConstraintSystem();

};

