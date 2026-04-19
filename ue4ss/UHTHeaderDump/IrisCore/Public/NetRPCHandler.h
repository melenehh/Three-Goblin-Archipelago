#pragma once
#include "CoreMinimal.h"
#include "NetBlobHandler.h"
#include "NetRPCHandler.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UNetRPCHandler : public UNetBlobHandler {
    GENERATED_BODY()
public:
    UNetRPCHandler();

};

