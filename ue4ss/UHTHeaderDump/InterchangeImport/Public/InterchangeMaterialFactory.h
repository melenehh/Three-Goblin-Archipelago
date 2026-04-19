#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeMaterialFactory.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeMaterialFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeMaterialFactory();

};

