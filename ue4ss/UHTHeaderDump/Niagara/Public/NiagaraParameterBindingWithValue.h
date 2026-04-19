#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterBinding.h"
#include "NiagaraParameterBindingWithValue.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraParameterBindingWithValue : public FNiagaraParameterBinding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> DefaultValue;
    
public:
    NIAGARA_API FNiagaraParameterBindingWithValue();
};

