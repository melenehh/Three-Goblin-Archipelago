#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeGraphAction_AddRemoveLink.h"
#include "OptimusNodeGraphAction_RemoveLink.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_RemoveLink : public FOptimusNodeGraphAction_AddRemoveLink {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_RemoveLink();
};

