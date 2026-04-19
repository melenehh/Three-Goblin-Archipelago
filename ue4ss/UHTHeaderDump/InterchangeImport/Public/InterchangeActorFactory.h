#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangeActorFactory.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangeActorFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangeActorFactory();

};

