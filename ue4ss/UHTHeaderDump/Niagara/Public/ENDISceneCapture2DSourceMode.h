#pragma once
#include "CoreMinimal.h"
#include "ENDISceneCapture2DSourceMode.generated.h"

UENUM(BlueprintType)
enum class ENDISceneCapture2DSourceMode : uint8 {
    UserParameterThenAttachParent,
    UserParameterOnly,
    AttachParentOnly,
    Managed,
};

