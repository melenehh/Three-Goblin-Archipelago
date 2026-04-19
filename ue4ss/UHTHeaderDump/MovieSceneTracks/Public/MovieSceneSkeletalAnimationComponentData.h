#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSkeletalAnimationComponentData.generated.h"

class UMovieSceneSkeletalAnimationSection;

USTRUCT(BlueprintType)
struct FMovieSceneSkeletalAnimationComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSkeletalAnimationSection* Section;
    
    MOVIESCENETRACKS_API FMovieSceneSkeletalAnimationComponentData();
};

