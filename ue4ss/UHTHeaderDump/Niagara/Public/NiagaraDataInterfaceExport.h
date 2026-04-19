#pragma once
#include "CoreMinimal.h"
#include "ENDIExport_GPUAllocationMode.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceExport.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding CallbackHandlerParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENDIExport_GPUAllocationMode GPUAllocationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GPUAllocationFixedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GPUAllocationPerParticleSize;
    
    UNiagaraDataInterfaceExport();

};

