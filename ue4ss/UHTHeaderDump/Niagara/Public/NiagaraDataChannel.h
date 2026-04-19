#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraVariable.h"
#include "NiagaraDataChannel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataChannel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepPreviousFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData CompiledData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData CompiledDataGPU;
    
public:
    UNiagaraDataChannel();

};

