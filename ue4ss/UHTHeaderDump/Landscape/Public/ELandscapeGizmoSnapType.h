#pragma once
#include "CoreMinimal.h"
#include "ELandscapeGizmoSnapType.generated.h"

UENUM(BlueprintType)
enum class ELandscapeGizmoSnapType : uint8 {
    None,
    Component,
    Texel,
};

