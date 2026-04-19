#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBase -FallbackName=InterchangeFactoryBase
#include "InterchangePhysicsAssetFactory.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEIMPORT_API UInterchangePhysicsAssetFactory : public UInterchangeFactoryBase {
    GENERATED_BODY()
public:
    UInterchangePhysicsAssetFactory();

};

