#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGeneratedFunction.h"
#include "NiagaraDataInterfaceGPUParamInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataInterfaceGPUParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataInterfaceHLSLSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DIClassName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ShaderParametersOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;
    
    NIAGARASHADER_API FNiagaraDataInterfaceGPUParamInfo();
};

