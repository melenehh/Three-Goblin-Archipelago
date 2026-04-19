#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractionMechanic.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UInteractionMechanic : public UObject {
    GENERATED_BODY()
public:
    UInteractionMechanic();

};

