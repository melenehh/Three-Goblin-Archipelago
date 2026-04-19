#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraValidationRule.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraValidationRule : public UObject {
    GENERATED_BODY()
public:
    UNiagaraValidationRule();

};

