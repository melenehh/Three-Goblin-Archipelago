#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusComputeDataInterface -FallbackName=OptimusComputeDataInterface
#include "OptimusGroomWriteDataInterface.generated.h"

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusGroomWriteDataInterface();

};

