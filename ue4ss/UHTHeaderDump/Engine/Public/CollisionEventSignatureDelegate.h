#pragma once
#include "CoreMinimal.h"
#include "CollisionChaosEvent.h"
#include "CollisionEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollisionEventSignature, const TArray<FCollisionChaosEvent>&, CollisionEvents);

