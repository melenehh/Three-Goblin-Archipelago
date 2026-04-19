#pragma once
#include "CoreMinimal.h"
#include "MovieScenePreAnimatedMaterialParameters.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMovieScenePreAnimatedMaterialParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviousMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> SoftPreviousMaterial;
    
public:
    MOVIESCENETRACKS_API FMovieScenePreAnimatedMaterialParameters();
};

