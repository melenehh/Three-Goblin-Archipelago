#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCaptureProtocolBase.h"
#include "MovieSceneImageCaptureProtocolBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase {
    GENERATED_BODY()
public:
    UMovieSceneImageCaptureProtocolBase();

};

