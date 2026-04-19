#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolChannel -FallbackName=MovieSceneBoolChannel
#include "MovieSceneConstraintChannel.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneConstraintChannel : public FMovieSceneBoolChannel {
    GENERATED_BODY()
public:
    CONSTRAINTS_API FMovieSceneConstraintChannel();
};

