#pragma once
#include "CoreMinimal.h"
#include "NDIDataChannelCompiledData.h"
#include "NiagaraDataInterfaceEmitterBinding.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraDataInterfaceDataChannelRead.generated.h"

class UNiagaraDataChannelAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannelAsset* Channel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataInterfaceEmitterBinding EmitterBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadCurrentFrame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateSourceDataEveryTick;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSpawnGroupToDataChannelIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnInfoName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNDIDataChannelCompiledData CompiledData;
    
public:
    UNiagaraDataInterfaceDataChannelRead();

};

