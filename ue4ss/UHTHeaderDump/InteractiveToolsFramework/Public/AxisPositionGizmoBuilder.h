#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "AxisPositionGizmoBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UAxisPositionGizmoBuilder();

};

