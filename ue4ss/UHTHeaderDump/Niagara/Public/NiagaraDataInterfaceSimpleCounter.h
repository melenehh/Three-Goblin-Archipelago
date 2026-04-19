#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraDataInterfaceSimpleCounter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuSyncMode GpuSyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialValue;
    
    UNiagaraDataInterfaceSimpleCounter();

};

