#pragma once
#include "CoreMinimal.h"
#include "Channel.h"
#include "ControlChannel.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UControlChannel : public UChannel {
    GENERATED_BODY()
public:
    UControlChannel();

};

