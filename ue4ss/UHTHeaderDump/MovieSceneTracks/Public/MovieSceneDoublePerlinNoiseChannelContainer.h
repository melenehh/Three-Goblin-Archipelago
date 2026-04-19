#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannelOverrideContainer -FallbackName=MovieSceneChannelOverrideContainer
#include "MovieSceneDoublePerlinNoiseChannel.h"
#include "MovieSceneDoublePerlinNoiseChannelContainer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDoublePerlinNoiseChannel PerlinNoiseChannel;
    
public:
    UMovieSceneDoublePerlinNoiseChannelContainer();

};

