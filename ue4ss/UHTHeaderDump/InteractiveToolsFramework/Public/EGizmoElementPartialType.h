#pragma once
#include "CoreMinimal.h"
#include "EGizmoElementPartialType.generated.h"

UENUM()
enum class EGizmoElementPartialType : int32 {
    None,
    Partial,
    PartialViewDependent,
};

