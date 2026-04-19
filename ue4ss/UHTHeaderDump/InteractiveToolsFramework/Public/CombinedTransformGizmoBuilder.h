#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "CombinedTransformGizmoBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UCombinedTransformGizmoBuilder();

};

