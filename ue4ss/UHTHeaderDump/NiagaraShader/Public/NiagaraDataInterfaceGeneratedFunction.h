#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraVariableCommonReference -FallbackName=NiagaraVariableCommonReference
#include "NiagaraDataInterfaceGeneratedFunction.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataInterfaceGeneratedFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariableCommonReference> VariadicInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariableCommonReference> VariadicOutputs;
    
    NIAGARASHADER_API FNiagaraDataInterfaceGeneratedFunction();
};

