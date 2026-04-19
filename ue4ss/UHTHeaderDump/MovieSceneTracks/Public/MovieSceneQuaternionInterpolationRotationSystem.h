#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneQuaternionInterpolationRotationSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneQuaternionInterpolationRotationSystem();

};

