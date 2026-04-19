#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusDebugDrawParameters.h"
#include "OptimusDebugDrawDataInterface.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDebugDrawParameters DebugDrawParameters;
    
    UOptimusDebugDrawDataInterface();

};

