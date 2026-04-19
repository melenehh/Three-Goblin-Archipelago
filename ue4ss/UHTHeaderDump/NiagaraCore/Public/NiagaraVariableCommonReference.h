#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableCommonReference.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNiagaraVariableCommonReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* UnderlyingType;
    
    NIAGARACORE_API FNiagaraVariableCommonReference();
};

