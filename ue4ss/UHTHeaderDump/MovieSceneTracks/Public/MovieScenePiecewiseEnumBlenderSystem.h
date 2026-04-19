#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystem -FallbackName=MovieSceneBlenderSystem
#include "MovieScenePiecewiseEnumBlenderSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem {
    GENERATED_BODY()
public:
    UMovieScenePiecewiseEnumBlenderSystem();

};

