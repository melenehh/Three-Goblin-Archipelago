#pragma once
#include "CoreMinimal.h"
#include "OnPlacableUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlacableUpdated, AActor*, PlacableActor);

