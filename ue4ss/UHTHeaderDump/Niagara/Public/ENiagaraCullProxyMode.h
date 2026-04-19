#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCullProxyMode.generated.h"

UENUM()
enum class ENiagaraCullProxyMode : uint32 {
    None,
    Instanced_Rendered,
};

