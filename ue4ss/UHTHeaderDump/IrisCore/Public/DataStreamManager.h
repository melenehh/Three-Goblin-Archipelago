#pragma once
#include "CoreMinimal.h"
#include "DataStream.h"
#include "DataStreamManager.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDataStreamManager : public UDataStream {
    GENERATED_BODY()
public:
    UDataStreamManager();

};

