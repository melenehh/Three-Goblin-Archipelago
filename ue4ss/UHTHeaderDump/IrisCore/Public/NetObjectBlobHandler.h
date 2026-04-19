#pragma once
#include "CoreMinimal.h"
#include "NetBlobHandler.h"
#include "NetObjectBlobHandler.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UNetObjectBlobHandler : public UNetBlobHandler {
    GENERATED_BODY()
public:
    UNetObjectBlobHandler();

};

