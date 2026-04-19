#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.h"
#include "KeyAsModifierInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UKeyAsModifierInputBehavior : public UInputBehavior {
    GENERATED_BODY()
public:
    UKeyAsModifierInputBehavior();

};

