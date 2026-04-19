#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeBaseMaterialFactoryNode.generated.h"

UCLASS(Abstract, Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeBaseMaterialFactoryNode();

};

