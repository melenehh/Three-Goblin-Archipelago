#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDynamicBindingResolveResult.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneDynamicBindingResolveResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPossessedObject;
    
    MOVIESCENE_API FMovieSceneDynamicBindingResolveResult();
};

