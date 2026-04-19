#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraValidationRuleSet.generated.h"

class UNiagaraValidationRule;

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraValidationRuleSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraValidationRule*> ValidationRules;
    
    UNiagaraValidationRuleSet();

};

