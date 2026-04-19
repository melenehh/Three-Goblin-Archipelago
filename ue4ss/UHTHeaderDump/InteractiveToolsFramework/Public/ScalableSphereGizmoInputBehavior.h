#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "ScalableSphereGizmoInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UScalableSphereGizmoInputBehavior();

};

