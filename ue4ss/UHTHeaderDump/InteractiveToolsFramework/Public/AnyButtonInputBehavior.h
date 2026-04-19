#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.h"
#include "AnyButtonInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAnyButtonInputBehavior : public UInputBehavior {
    GENERATED_BODY()
public:
    UAnyButtonInputBehavior();

};

