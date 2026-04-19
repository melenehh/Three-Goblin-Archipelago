#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EDataLayerRuntimeState.h"
#include "OnDataLayerInstanceRuntimeStateChangedDelegate.h"
#include "DataLayerManager.generated.h"

class UDataLayerAsset;
class UDataLayerInstance;

UCLASS(Blueprintable, MinimalAPI, Within=WorldPartition)
class UDataLayerManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDataLayerInstanceRuntimeStateChanged OnDataLayerInstanceRuntimeStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UObject*> ReferencedObjects;
    
public:
    UDataLayerManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetDataLayerRuntimeState(const UDataLayerAsset* InDataLayerAsset, EDataLayerRuntimeState InState, bool bInIsRecursive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetDataLayerInstanceRuntimeState(const UDataLayerInstance* InDataLayerInstance, EDataLayerRuntimeState InState, bool bInIsRecursive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDataLayerInstanceRuntimeState(const UDataLayerInstance* InDataLayerInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerInstance* GetDataLayerInstanceFromName(const FName& InDataLayerInstanceName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerInstance* GetDataLayerInstanceFromAsset(const UDataLayerAsset* InDataLayerAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDataLayerInstanceEffectiveRuntimeState(const UDataLayerInstance* InDataLayerInstance) const;
    
};

