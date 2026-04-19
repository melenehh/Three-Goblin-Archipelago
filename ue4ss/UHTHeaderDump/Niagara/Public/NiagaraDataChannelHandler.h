#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraDataChannelHandler.generated.h"

class UNiagaraDataChannel;
class UNiagaraDataChannelReader;
class UNiagaraDataChannelWriter;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UNiagaraDataChannelHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraDataChannel> DataChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannelWriter* Writer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannelReader* Reader;
    
public:
    UNiagaraDataChannelHandler();

    UFUNCTION(BlueprintCallable)
    UNiagaraDataChannelWriter* GetDataChannelWriter();
    
    UFUNCTION(BlueprintCallable)
    UNiagaraDataChannelReader* GetDataChannelReader();
    
};

