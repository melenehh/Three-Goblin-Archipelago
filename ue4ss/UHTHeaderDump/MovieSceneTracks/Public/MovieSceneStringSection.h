#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneStringChannel.h"
#include "MovieSceneStringSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneStringSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel StringCurve;
    
public:
    UMovieSceneStringSection();


    // Fix for true pure virtual functions not being implemented
};

