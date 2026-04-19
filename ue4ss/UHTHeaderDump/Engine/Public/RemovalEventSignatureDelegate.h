#pragma once
#include "CoreMinimal.h"
#include "ChaosRemovalEvent.h"
#include "RemovalEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemovalEventSignature, const TArray<FChaosRemovalEvent>&, RemovalEvents);

