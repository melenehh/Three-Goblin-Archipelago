#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NDIDataChannel_GPUScriptParameterAccessInfo.generated.h"

USTRUCT(BlueprintType)
struct FNDIDataChannel_GPUScriptParameterAccessInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariableBase> SortedParameters;
    
    NIAGARA_API FNDIDataChannel_GPUScriptParameterAccessInfo();
};

