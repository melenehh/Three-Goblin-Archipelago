#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAudioInputData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneAudioInputData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FloatInputs[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StringInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoolInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IntInput;
    
    MOVIESCENETRACKS_API FMovieSceneAudioInputData();
};

