#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCaptureProtocolBase.h"
#include "MovieSceneAudioCaptureProtocolBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase {
    GENERATED_BODY()
public:
    UMovieSceneAudioCaptureProtocolBase();

};

