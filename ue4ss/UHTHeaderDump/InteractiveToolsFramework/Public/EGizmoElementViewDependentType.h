#pragma once
#include "CoreMinimal.h"
#include "EGizmoElementViewDependentType.generated.h"

UENUM()
enum class EGizmoElementViewDependentType : int32 {
    None,
    Axis,
    Plane,
};

