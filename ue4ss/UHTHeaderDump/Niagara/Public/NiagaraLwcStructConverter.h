#pragma once
#include "CoreMinimal.h"
#include "NiagaraStructConversionStep.h"
#include "NiagaraLwcStructConverter.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraLwcStructConverter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LWCSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SWCSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraStructConversionStep> ConversionSteps;
    
public:
    NIAGARA_API FNiagaraLwcStructConverter();
};

