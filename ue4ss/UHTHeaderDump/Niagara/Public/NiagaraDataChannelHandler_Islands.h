#pragma once
#include "CoreMinimal.h"
#include "NDCIsland.h"
#include "NiagaraDataChannelHandler.h"
#include "NiagaraDataChannelHandler_Islands.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveIslands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FreeIslands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNDCIsland> IslandPool;
    
public:
    UNiagaraDataChannelHandler_Islands();

};

