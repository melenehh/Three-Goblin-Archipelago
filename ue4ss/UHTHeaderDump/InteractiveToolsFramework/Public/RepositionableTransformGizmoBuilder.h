#pragma once
#include "CoreMinimal.h"
#include "CombinedTransformGizmoBuilder.h"
#include "RepositionableTransformGizmoBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder {
    GENERATED_BODY()
public:
    URepositionableTransformGizmoBuilder();

};

