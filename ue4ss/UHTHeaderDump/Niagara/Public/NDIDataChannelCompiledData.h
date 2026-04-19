#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraCompileHash -FallbackName=NiagaraCompileHash
#include "NDIDataChannelFunctionInfo.h"
#include "NDIDataChannel_GPUScriptParameterAccessInfo.h"
#include "NDIDataChannelCompiledData.generated.h"

USTRUCT(BlueprintType)
struct FNDIDataChannelCompiledData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNDIDataChannelFunctionInfo> FunctionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FNiagaraCompileHash, FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedByCPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedByGPU;
    
public:
    NIAGARA_API FNDIDataChannelCompiledData();
};

