#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeStaticMeshFactory.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeStaticMeshFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeStaticMeshFactory();

};

