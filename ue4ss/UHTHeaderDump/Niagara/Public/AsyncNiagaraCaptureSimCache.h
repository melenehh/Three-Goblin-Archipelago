#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CancellableAsyncAction -FallbackName=CancellableAsyncAction
#include "NiagaraSimCacheCaptureParameters.h"
#include "NiagaraSimCacheCreateParameters.h"
#include "AsyncNiagaraCaptureSimCache.generated.h"

class UAsyncNiagaraCaptureSimCache;
class UNiagaraComponent;
class UNiagaraSimCache;

UCLASS(Blueprintable)
class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCaptureComplete, bool, bSuccess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSimCache* CaptureSimCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CaptureComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureComplete CaptureComplete;
    
    UAsyncNiagaraCaptureSimCache();

    UFUNCTION(BlueprintCallable)
    static UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCache(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, FNiagaraSimCacheCaptureParameters CaptureParameters, UNiagaraSimCache*& OutSimCache);
    
};

