#pragma once
#include "CoreMinimal.h"
#include "EGizmoElementState.generated.h"

UENUM(BlueprintType)
enum class EGizmoElementState : uint8 {
    None,
    Visible = 2,
    Hittable = 4,
    VisibleAndHittable = 6,
};

