#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystem -FallbackName=MovieSceneBlenderSystem
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneValueDecomposer -FallbackName=MovieSceneValueDecomposer
#include "MovieSceneQuaternionBlenderSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneQuaternionBlenderSystem : public UMovieSceneBlenderSystem, public IMovieSceneValueDecomposer {
    GENERATED_BODY()
public:
    UMovieSceneQuaternionBlenderSystem();


    // Fix for true pure virtual functions not being implemented
};

