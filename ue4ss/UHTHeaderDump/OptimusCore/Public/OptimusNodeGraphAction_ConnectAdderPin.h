#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeGraphAction_AddRemoveLink.h"
#include "OptimusNodeGraphAction_ConnectAdderPin.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_ConnectAdderPin : public FOptimusNodeGraphAction_AddRemoveLink {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_ConnectAdderPin();
};

