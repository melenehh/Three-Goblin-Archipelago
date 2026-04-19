#pragma once
#include "CoreMinimal.h"
#include "FrameGrabberProtocol.h"
#include "ImageSequenceProtocol.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UImageSequenceProtocol : public UFrameGrabberProtocol {
    GENERATED_BODY()
public:
    UImageSequenceProtocol();

};

