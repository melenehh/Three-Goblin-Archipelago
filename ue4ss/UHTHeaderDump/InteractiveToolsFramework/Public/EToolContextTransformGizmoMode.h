#pragma once
#include "CoreMinimal.h"
#include "EToolContextTransformGizmoMode.generated.h"

UENUM(BlueprintType)
enum class EToolContextTransformGizmoMode : uint8 {
    NoGizmo,
    Translation,
    Rotation,
    Scale,
    Combined = 8,
};

