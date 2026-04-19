#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "IntervalGizmoBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UIntervalGizmoBuilder();

};

