#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraParameterBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraParameterBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableBase ResolvedParameter;
    
    NIAGARA_API FNiagaraParameterBinding();
};

