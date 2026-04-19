#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "ByteChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UByteChannelEvaluatorSystem();

};

