#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAudioCaptureProtocolBase.h"
#include "NullAudioCaptureProtocol.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
    GENERATED_BODY()
public:
    UNullAudioCaptureProtocol();

};

