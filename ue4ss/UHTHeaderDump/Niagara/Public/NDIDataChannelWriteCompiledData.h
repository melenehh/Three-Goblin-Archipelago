#pragma once
#include "CoreMinimal.h"
#include "NDIDataChannelCompiledData.h"
#include "NiagaraDataSetCompiledData.h"
#include "NDIDataChannelWriteCompiledData.generated.h"

USTRUCT(BlueprintType)
struct FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData DataLayout;
    
    NIAGARA_API FNDIDataChannelWriteCompiledData();
};

