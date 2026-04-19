#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusDebugDrawParameters.h"
#include "OptimusDebugDrawDataProvider.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusDebugDrawDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDebugDrawParameters DebugDrawParameters;
    
    UOptimusDebugDrawDataProvider();

};

