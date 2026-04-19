#pragma once
#include "CoreMinimal.h"
#include "ClickDragInputBehavior.h"
#include "LocalClickDragInputBehavior.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior {
    GENERATED_BODY()
public:
    ULocalClickDragInputBehavior();

};

