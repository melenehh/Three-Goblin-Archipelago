#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
#include "PerlinNoiseParams.h"
#include "MovieSceneFloatPerlinNoiseChannel.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseParams PerlinNoiseParams;
    
    MOVIESCENETRACKS_API FMovieSceneFloatPerlinNoiseChannel();
};

