#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusComputeDataInterface -FallbackName=OptimusComputeDataInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusDeprecatedExecutionDataInterface -FallbackName=OptimusDeprecatedExecutionDataInterface
#include "EOptimusGroomExecDomain.h"
#include "OptimusGroomExecDataInterface.generated.h"

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface, public IOptimusDeprecatedExecutionDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusGroomExecDomain Domain;
    
    UOptimusGroomExecDataInterface();


    // Fix for true pure virtual functions not being implemented
};

