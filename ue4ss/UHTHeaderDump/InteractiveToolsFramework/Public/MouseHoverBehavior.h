#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.h"
#include "MouseHoverBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMouseHoverBehavior : public UInputBehavior {
    GENERATED_BODY()
public:
    UMouseHoverBehavior();

};

