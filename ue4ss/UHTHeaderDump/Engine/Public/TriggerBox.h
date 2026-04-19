#pragma once
#include "CoreMinimal.h"
#include "TriggerBase.h"
#include "TriggerBox.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ATriggerBox : public ATriggerBase {
    GENERATED_BODY()
public:
    ATriggerBox(const FObjectInitializer& ObjectInitializer);

};

