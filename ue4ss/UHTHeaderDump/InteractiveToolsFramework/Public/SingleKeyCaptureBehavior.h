#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.h"
#include "SingleKeyCaptureBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USingleKeyCaptureBehavior : public UInputBehavior {
    GENERATED_BODY()
public:
    USingleKeyCaptureBehavior();

};

