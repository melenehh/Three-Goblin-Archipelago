#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAudioComponentData.generated.h"

class UMovieSceneAudioSection;

USTRUCT(BlueprintType)
struct FMovieSceneAudioComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneAudioSection* Section;
    
    MOVIESCENETRACKS_API FMovieSceneAudioComponentData();
};

