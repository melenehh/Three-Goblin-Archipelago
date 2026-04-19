#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraDataInterfaceBase -FallbackName=NiagaraDataInterfaceBase
#include "NiagaraDataInterface.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase {
    GENERATED_BODY()
public:
    UNiagaraDataInterface();

};

