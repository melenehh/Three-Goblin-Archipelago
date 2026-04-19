#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraExternalUObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraExternalUObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableBase Variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExternalName;
    
    NIAGARA_API FNiagaraExternalUObjectInfo();
};

