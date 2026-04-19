#pragma once
#include "CoreMinimal.h"
#include "ToolTargetFactory.h"
#include "PrimitiveComponentToolTargetFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory {
    GENERATED_BODY()
public:
    UPrimitiveComponentToolTargetFactory();

};

