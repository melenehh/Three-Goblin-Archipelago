#pragma once
#include "CoreMinimal.h"
#include "EDataLayerRuntimeState.h"
#include "OnDataLayerInstanceRuntimeStateChangedDelegate.generated.h"

class UDataLayerInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDataLayerInstanceRuntimeStateChanged, const UDataLayerInstance*, DataLayer, EDataLayerRuntimeState, State);

