#pragma once
#include "CoreMinimal.h"
#include "ELoadingWidgetType.generated.h"

UENUM(BlueprintType)
enum class ELoadingWidgetType : uint8 {
    LWT_Horizontal,
    LWT_Vertical,
};

