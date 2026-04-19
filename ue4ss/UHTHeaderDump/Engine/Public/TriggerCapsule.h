#pragma once
#include "CoreMinimal.h"
#include "TriggerBase.h"
#include "TriggerCapsule.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ATriggerCapsule : public ATriggerBase {
    GENERATED_BODY()
public:
    ATriggerCapsule(const FObjectInitializer& ObjectInitializer);

};

