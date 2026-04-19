#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolBuilder.h"
#include "ClickDragToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UClickDragToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UClickDragToolBuilder();

};

