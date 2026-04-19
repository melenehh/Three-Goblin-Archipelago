#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneChannelOverrideContainer.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UMovieSceneChannelOverrideContainer();

};

