#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "VersionedNiagaraEmitter.generated.h"

class UNiagaraEmitter;

USTRUCT(BlueprintType)
struct FVersionedNiagaraEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraEmitter* Emitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Version;
    
    NIAGARA_API FVersionedNiagaraEmitter();
};

