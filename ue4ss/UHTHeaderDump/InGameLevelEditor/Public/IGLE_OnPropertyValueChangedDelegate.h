#pragma once
#include "CoreMinimal.h"
#include "IGLE_OnPropertyValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGLE_OnPropertyValueChanged, const FString&, PropertyName);

