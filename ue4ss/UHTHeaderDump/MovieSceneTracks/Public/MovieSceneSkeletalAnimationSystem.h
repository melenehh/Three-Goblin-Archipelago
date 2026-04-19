#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneSkeletalAnimationSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSkeletalAnimationSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneSkeletalAnimationSystem();

};

