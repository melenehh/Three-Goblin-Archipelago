#pragma once
#include "CoreMinimal.h"
#include "EGizmoElementViewAlignType.generated.h"

UENUM()
enum class EGizmoElementViewAlignType : int32 {
    None,
    PointOnly,
    PointEye,
    PointScreen,
    Axial,
};

