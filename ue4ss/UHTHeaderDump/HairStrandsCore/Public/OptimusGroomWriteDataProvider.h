#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusGroomWriteDataProvider.generated.h"

class UGroomComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusGroomWriteDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroomComponent* GroomComponent;
    
    UOptimusGroomWriteDataProvider();

};

