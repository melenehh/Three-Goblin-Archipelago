#pragma once
#include "CoreMinimal.h"
#include "Channel.h"
#include "VoiceChannel.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoiceChannel : public UChannel {
    GENERATED_BODY()
public:
    UVoiceChannel();

};

