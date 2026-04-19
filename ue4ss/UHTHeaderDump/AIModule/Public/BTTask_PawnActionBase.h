#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_PawnActionBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UBTTask_PawnActionBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_PawnActionBase();

};

