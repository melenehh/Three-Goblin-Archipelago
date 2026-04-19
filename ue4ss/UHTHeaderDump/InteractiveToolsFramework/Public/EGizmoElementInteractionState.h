#pragma once
#include "CoreMinimal.h"
#include "EGizmoElementInteractionState.generated.h"

UENUM()
enum class EGizmoElementInteractionState : int32 {
    None,
    Hovering,
    Interacting,
};

