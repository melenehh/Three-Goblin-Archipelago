#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneKeyHandleMap -FallbackName=MovieSceneKeyHandleMap
#include "MovieSceneCameraShakeSourceTrigger.h"
#include "MovieSceneCameraShakeSourceTriggerChannel.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneKeyHandleMap KeyHandles;
    
public:
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSourceTriggerChannel();
};

