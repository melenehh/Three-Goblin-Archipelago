#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NiagaraDataChannelSearchParameters.h"
#include "NiagaraDataChannelLibrary.generated.h"

class UNiagaraDataChannelAsset;
class UNiagaraDataChannelHandler;
class UNiagaraDataChannelReader;
class UNiagaraDataChannelWriter;
class UObject;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraDataChannelLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraDataChannelWriter* WriteToNiagaraDataChannel(const UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraDataChannelReader* ReadFromNiagaraDataChannel(const UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraDataChannelHandler* GetNiagaraDataChannel(const UObject* WorldContextObject, UNiagaraDataChannelAsset* Channel);
    
};

