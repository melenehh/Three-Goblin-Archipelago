#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "IntegerChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UIntegerChannelEvaluatorSystem();

};

