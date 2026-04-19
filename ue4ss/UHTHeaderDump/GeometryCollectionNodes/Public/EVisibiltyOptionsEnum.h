#pragma once
#include "CoreMinimal.h"
#include "EVisibiltyOptionsEnum.generated.h"

UENUM(BlueprintType)
enum class EVisibiltyOptionsEnum : uint8 {
    Dataflow_VisibilityOptions_Visible,
    Dataflow_VisibilityOptions_Invisible,
};

