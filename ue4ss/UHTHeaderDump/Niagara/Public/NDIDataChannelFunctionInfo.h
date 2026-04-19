#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NDIDataChannelFunctionInfo.generated.h"

USTRUCT(BlueprintType)
struct FNDIDataChannelFunctionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariableBase> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariableBase> Outputs;
    
    NIAGARA_API FNDIDataChannelFunctionInfo();
};

