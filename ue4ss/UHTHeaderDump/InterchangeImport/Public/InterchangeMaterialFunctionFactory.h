#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeMaterialFunctionFactory.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeMaterialFunctionFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeMaterialFunctionFactory();

};

