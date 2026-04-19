#pragma once
#include "CoreMinimal.h"
#include "OnImportDoneDynamicDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImportDoneDynamic, const TArray<UObject*>&, Objects);

