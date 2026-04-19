#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySystem.h"
#include "MovieScene3DTransformPropertySystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem {
    GENERATED_BODY()
public:
    UMovieScene3DTransformPropertySystem();

};

