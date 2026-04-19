#pragma once
#include "CoreMinimal.h"
#include "InteractiveTool.h"
#include "SingleClickTool.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USingleClickTool : public UInteractiveTool {
    GENERATED_BODY()
public:
    USingleClickTool();

};

