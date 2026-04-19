#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "ScalableSphereGizmoBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UScalableSphereGizmoBuilder();

};

