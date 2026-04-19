#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshComponentRenderUpdateMode.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshComponentRenderUpdateMode : uint8 {
    NoUpdate,
    FullUpdate,
    FastUpdate,
};

