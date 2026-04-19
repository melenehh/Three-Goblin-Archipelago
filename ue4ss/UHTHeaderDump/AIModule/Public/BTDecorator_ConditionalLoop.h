#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_Blackboard.h"
#include "BTDecorator_ConditionalLoop.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard {
    GENERATED_BODY()
public:
    UBTDecorator_ConditionalLoop();

};

