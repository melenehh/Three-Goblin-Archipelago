#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackChannelDetails.h"
#include "ForceFeedbackEffectOverridenChannelDetails.generated.h"

USTRUCT(BlueprintType)
struct FForceFeedbackEffectOverridenChannelDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FForceFeedbackChannelDetails> ChannelDetails;
    
    ENGINE_API FForceFeedbackEffectOverridenChannelDetails();
};

