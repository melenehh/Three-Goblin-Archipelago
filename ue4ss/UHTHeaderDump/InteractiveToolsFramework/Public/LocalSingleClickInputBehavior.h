#pragma once
#include "CoreMinimal.h"
#include "SingleClickInputBehavior.h"
#include "LocalSingleClickInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ULocalSingleClickInputBehavior : public USingleClickInputBehavior {
    GENERATED_BODY()
public:
    ULocalSingleClickInputBehavior();

};

