#pragma once
#include "CoreMinimal.h"
#include "MouseHoverBehavior.h"
#include "LocalMouseHoverBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ULocalMouseHoverBehavior : public UMouseHoverBehavior {
    GENERATED_BODY()
public:
    ULocalMouseHoverBehavior();

};

