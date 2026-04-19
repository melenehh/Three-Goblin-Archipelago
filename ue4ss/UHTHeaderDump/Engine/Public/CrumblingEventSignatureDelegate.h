#pragma once
#include "CoreMinimal.h"
#include "ChaosCrumblingEvent.h"
#include "CrumblingEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrumblingEventSignature, const TArray<FChaosCrumblingEvent>&, CrumblingEvents);

