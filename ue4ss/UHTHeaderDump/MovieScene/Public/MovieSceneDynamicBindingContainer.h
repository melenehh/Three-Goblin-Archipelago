#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDynamicBinding.h"
#include "MovieSceneDynamicBindingContainer.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneDynamicBindingContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDynamicBinding DynamicBinding;
    
    MOVIESCENE_API FMovieSceneDynamicBindingContainer();
};

