#pragma once
#include "CoreMinimal.h"
#include "OnObjectImportDoneDynamicDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnObjectImportDoneDynamic, UObject*, Object);

