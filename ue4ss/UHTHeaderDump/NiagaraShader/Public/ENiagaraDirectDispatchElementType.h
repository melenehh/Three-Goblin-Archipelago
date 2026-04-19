#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDirectDispatchElementType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraDirectDispatchElementType : uint8 {
    NumThreads,
    NumThreadsNoClipping,
    NumGroups,
};

