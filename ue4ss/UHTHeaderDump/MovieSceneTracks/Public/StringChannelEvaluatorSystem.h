#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "StringChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UStringChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UStringChannelEvaluatorSystem();

};

