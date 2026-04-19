#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolBuilder.h"
#include "SingleClickToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USingleClickToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    USingleClickToolBuilder();

};

