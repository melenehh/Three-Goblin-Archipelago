#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerData.h"
#include "NiagaraDebuggerOutlinerUpdate.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDebuggerOutlinerUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerData OutlinerData;
    
    NIAGARA_API FNiagaraDebuggerOutlinerUpdate();
};

