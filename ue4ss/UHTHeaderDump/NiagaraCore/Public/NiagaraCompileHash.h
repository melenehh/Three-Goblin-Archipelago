#pragma once
#include "CoreMinimal.h"
#include "NiagaraCompileHash.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraCompileHash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> DataHash;
    
public:
    NIAGARACORE_API FNiagaraCompileHash();
};
FORCEINLINE uint32 GetTypeHash(const FNiagaraCompileHash) { return 0; }

