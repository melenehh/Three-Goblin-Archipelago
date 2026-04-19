#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataInterface -FallbackName=ComputeDataInterface
#include "OptimusGraphVariableDescription.h"
#include "OptimusGraphDataInterface.generated.h"

UCLASS(Blueprintable)
class UOptimusGraphDataInterface : public UComputeDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusGraphVariableDescription> Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParameterBufferSize;
    
public:
    UOptimusGraphDataInterface();

};

