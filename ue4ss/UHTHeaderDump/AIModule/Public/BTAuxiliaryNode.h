#pragma once
#include "CoreMinimal.h"
#include "BTNode.h"
#include "BTAuxiliaryNode.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UBTAuxiliaryNode : public UBTNode {
    GENERATED_BODY()
public:
    UBTAuxiliaryNode();

};

