#pragma once
#include "CoreMinimal.h"
#include "TriggerBase.h"
#include "TriggerSphere.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ATriggerSphere : public ATriggerBase {
    GENERATED_BODY()
public:
    ATriggerSphere(const FObjectInitializer& ObjectInitializer);

};

