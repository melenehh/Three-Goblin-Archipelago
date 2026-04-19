#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceTickInterval.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceTickInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvaluationBudgetMicroseconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRounding;
    
    MOVIESCENE_API FMovieSceneSequenceTickInterval();
};

