#pragma once
#include "CoreMinimal.h"
#include "OnCreateAuditionGeneratorHandleDelegateDelegate.generated.h"

class UMetasoundGeneratorHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCreateAuditionGeneratorHandleDelegate, UMetasoundGeneratorHandle*, GeneratorHandle);

