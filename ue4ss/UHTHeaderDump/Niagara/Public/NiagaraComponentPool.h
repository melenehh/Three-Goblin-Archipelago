#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NCPool.h"
#include "NiagaraComponentPool.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UNiagaraComponentPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools;
    
public:
    UNiagaraComponentPool();

};

