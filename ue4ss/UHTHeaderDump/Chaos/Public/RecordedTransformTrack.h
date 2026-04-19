#pragma once
#include "CoreMinimal.h"
#include "RecordedFrame.h"
#include "RecordedTransformTrack.generated.h"

USTRUCT(BlueprintType)
struct FRecordedTransformTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecordedFrame> Records;
    
    CHAOS_API FRecordedTransformTrack();
};

