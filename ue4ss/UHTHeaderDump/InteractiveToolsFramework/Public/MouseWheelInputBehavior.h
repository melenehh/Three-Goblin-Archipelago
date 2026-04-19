#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "MouseWheelInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMouseWheelInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UMouseWheelInputBehavior();

};

