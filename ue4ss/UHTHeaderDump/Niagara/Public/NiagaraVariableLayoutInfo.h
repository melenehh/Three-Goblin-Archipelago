#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.h"
#include "NiagaraVariableLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableLayoutInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FloatComponentStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Int32ComponentStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 HalfComponentStart;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraTypeLayoutInfo LayoutInfo;
    
    NIAGARA_API FNiagaraVariableLayoutInfo();
};

