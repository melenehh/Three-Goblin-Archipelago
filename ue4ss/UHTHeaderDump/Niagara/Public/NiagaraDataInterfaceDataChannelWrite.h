#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDataChannelAllocationMode.h"
#include "NDIDataChannelWriteCompiledData.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceDataChannelWrite.generated.h"

class UNiagaraDataChannelAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDataChannelAllocationMode AllocationMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AllocationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPublishToGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPublishToCPU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPublishToGPU;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateDestinationDataEveryTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataChannelAsset* Channel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNDIDataChannelWriteCompiledData CompiledData;
    
public:
    UNiagaraDataInterfaceDataChannelWrite();

};

