#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDynamicBindingPayloadVariable.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneDynamicBindingPayloadVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    MOVIESCENE_API FMovieSceneDynamicBindingPayloadVariable();
};

