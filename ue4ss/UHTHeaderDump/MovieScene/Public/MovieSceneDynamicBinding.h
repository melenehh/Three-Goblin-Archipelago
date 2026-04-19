#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDynamicBinding.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FMovieSceneDynamicBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> ResolveParamsProperty;
    
    MOVIESCENE_API FMovieSceneDynamicBinding();
};

