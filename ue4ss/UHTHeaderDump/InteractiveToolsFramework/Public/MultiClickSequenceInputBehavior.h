#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "MultiClickSequenceInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UMultiClickSequenceInputBehavior();

};

