#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "EOptimusGroomExecDomain.h"
#include "OptimusGroomExecDataProvider.generated.h"

class UGroomComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusGroomExecDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroomComponent* GroomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusGroomExecDomain Domain;
    
    UOptimusGroomExecDataProvider();

};

