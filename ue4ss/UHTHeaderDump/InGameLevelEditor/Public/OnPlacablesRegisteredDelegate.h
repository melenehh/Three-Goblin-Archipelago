#pragma once
#include "CoreMinimal.h"
#include "OnPlacablesRegisteredDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlacablesRegistered, const TArray<AActor*>&, TempActors);

