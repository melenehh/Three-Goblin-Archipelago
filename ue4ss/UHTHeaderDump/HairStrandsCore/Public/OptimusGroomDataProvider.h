#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusGroomDataProvider.generated.h"

class UGroomComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOptimusGroomDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroomComponent* Groom;
    
    UOptimusGroomDataProvider();

};

