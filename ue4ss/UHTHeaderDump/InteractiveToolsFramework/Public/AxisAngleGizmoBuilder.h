#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "AxisAngleGizmoBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UAxisAngleGizmoBuilder();

};

