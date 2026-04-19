#pragma once
#include "CoreMinimal.h"
#include "ActorPerceptionForgetUpdatedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorPerceptionForgetUpdatedDelegate, AActor*, Actor);

