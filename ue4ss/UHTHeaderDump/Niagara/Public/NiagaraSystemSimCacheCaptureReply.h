#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemSimCacheCaptureReply.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemSimCacheCaptureReply {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SimCacheData;
    
    NIAGARA_API FNiagaraSystemSimCacheCaptureReply();
};

