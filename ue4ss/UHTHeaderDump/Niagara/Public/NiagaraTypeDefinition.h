#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNiagaraTypeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ClassStructOrEnum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 UnderlyingType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
public:
    NIAGARA_API FNiagaraTypeDefinition();
};

