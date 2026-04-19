#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "BrushStampIndicatorBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UBrushStampIndicatorBuilder();

};

