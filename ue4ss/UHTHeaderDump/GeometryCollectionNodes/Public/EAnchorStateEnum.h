#pragma once
#include "CoreMinimal.h"
#include "EAnchorStateEnum.generated.h"

UENUM(BlueprintType)
enum class EAnchorStateEnum : uint8 {
    Dataflow_AnchorState_Anchored,
    Dataflow_AnchorState_NotAnchored,
};

