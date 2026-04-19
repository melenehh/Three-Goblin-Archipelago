#pragma once
#include "CoreMinimal.h"
#include "DataStream.h"
#include "NetTokenDataStream.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNetTokenDataStream : public UDataStream {
    GENERATED_BODY()
public:
    UNetTokenDataStream();

};

