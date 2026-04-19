#pragma once
#include "CoreMinimal.h"
#include "InteractiveTool.h"
#include "ClickDragTool.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UClickDragTool : public UInteractiveTool {
    GENERATED_BODY()
public:
    UClickDragTool();

};

