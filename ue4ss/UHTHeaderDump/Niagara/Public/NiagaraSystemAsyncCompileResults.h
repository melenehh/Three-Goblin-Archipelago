#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraSystemAsyncCompileResults.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNiagaraSystemAsyncCompileResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> RootObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> ExposedVariables;
    
    NIAGARA_API FNiagaraSystemAsyncCompileResults();
};

