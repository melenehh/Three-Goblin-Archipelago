#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusComputeDataInterface -FallbackName=OptimusComputeDataInterface
#include "OptimusGroomGuideDataInterface.generated.h"

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UOptimusGroomGuideDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusGroomGuideDataInterface();

};

