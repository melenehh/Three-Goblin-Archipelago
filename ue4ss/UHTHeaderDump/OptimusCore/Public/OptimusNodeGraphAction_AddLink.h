#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeGraphAction_AddRemoveLink.h"
#include "OptimusNodeGraphAction_AddLink.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_AddLink : public FOptimusNodeGraphAction_AddRemoveLink {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_AddLink();
};

