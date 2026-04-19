#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraDataChannelAsset.generated.h"

class UNiagaraDataChannel;

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraDataChannelAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannel* DataChannel;
    
public:
    UNiagaraDataChannelAsset();

};

