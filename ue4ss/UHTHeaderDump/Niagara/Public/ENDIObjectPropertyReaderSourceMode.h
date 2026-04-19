#pragma once
#include "CoreMinimal.h"
#include "ENDIObjectPropertyReaderSourceMode.generated.h"

UENUM(BlueprintType)
enum class ENDIObjectPropertyReaderSourceMode : uint8 {
    Binding,
    AttachParentActor,
    BindingThenAttachParentActor,
};

