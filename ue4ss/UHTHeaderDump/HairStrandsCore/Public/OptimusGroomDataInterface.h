#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusComputeDataInterface -FallbackName=OptimusComputeDataInterface
#include "OptimusGroomDataInterface.generated.h"

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UOptimusGroomDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusGroomDataInterface();

};

