#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "BrushAdjusterInputBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBrushAdjusterInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UBrushAdjusterInputBehavior();

};

