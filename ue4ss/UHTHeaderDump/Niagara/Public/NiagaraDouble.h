#pragma once
#include "CoreMinimal.h"
#include "NiagaraDouble.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDouble {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    NIAGARA_API FNiagaraDouble();
};

