#pragma once
#include "CoreMinimal.h"
#include "NiagaraLwcStructConverter.h"
#include "NiagaraVariableBase.h"
#include "NiagaraDataChannelGameDataLayout.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataChannelGameDataLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FNiagaraVariableBase, int32> VariableIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraLwcStructConverter> LwcConverters;
    
    NIAGARA_API FNiagaraDataChannelGameDataLayout();
};

