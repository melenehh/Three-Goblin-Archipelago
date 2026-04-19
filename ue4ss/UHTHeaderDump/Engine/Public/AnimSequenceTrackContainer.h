#pragma once
#include "CoreMinimal.h"
#include "RawAnimSequenceTrack.h"
#include "AnimSequenceTrackContainer.generated.h"

USTRUCT(BlueprintType)
struct FAnimSequenceTrackContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawAnimSequenceTrack> AnimationTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TrackNames;
    
    ENGINE_API FAnimSequenceTrackContainer();
};

