#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraMessageDataBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraMessageDataBase : public UObject {
    GENERATED_BODY()
public:
    UNiagaraMessageDataBase();

};

