#pragma once
#include "CoreMinimal.h"
#include "MovieSceneImageCaptureProtocolBase.h"
#include "FrameGrabberProtocol.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase {
    GENERATED_BODY()
public:
    UFrameGrabberProtocol();

};

