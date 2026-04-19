#pragma once
#include "CoreMinimal.h"
#include "Channel.h"
#include "DataStreamChannel.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDataStreamChannel : public UChannel {
    GENERATED_BODY()
public:
    UDataStreamChannel();

};

