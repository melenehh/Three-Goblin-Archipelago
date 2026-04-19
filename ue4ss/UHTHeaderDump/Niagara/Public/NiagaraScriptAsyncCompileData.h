#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraScriptAsyncCompileData.generated.h"

class UNiagaraDataInterface;

USTRUCT(BlueprintType)
struct FNiagaraScriptAsyncCompileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> RapidIterationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UNiagaraDataInterface*> NamedDataInterfaces;
    
    NIAGARA_API FNiagaraScriptAsyncCompileData();
};

