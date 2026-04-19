#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraConvertInPlaceUtilityBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UNiagaraConvertInPlaceUtilityBase : public UObject {
    GENERATED_BODY()
public:
    UNiagaraConvertInPlaceUtilityBase();

};

