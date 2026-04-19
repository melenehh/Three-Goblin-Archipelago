#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneMediaSectionParams.h"
#include "MovieSceneMediaSectionTemplate.generated.h"

class UMovieSceneMediaSection;

USTRUCT(BlueprintType)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneMediaSectionParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneMediaSection* MediaSection;
    
public:
    MEDIACOMPOSITING_API FMovieSceneMediaSectionTemplate();
};

