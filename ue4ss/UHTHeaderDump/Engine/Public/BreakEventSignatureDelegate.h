#pragma once
#include "CoreMinimal.h"
#include "ChaosBreakEvent.h"
#include "BreakEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakEventSignature, const TArray<FChaosBreakEvent>&, BreakEvents);

