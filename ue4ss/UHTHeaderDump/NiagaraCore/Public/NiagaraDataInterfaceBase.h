#pragma once
#include "CoreMinimal.h"
#include "NiagaraMergeable.h"
#include "NiagaraDataInterfaceBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceBase();

};

