#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "PlanePositionGizmoBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UPlanePositionGizmoBuilder();

};

