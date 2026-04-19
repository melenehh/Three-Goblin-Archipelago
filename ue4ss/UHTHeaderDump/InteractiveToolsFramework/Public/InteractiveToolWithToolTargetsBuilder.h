#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolBuilder.h"
#include "InteractiveToolWithToolTargetsBuilder.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UInteractiveToolWithToolTargetsBuilder();

};

