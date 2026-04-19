#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvalTemplate.h"
#include "MovieScenePropertySectionData.h"
#include "MovieScenePropertySectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertySectionData PropertyData;
    
public:
    MOVIESCENE_API FMovieScenePropertySectionTemplate();
};

