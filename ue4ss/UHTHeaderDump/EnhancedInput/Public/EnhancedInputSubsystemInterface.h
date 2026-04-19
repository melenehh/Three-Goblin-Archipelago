#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EInputMappingRebuildType.h"
#include "EMappingQueryIssue.h"
#include "EMappingQueryResult.h"
#include "EnhancedActionKeyMapping.h"
#include "InputActionValue.h"
#include "MappingQueryIssue.h"
#include "ModifyContextOptions.h"
#include "PlayerMappableKeySlot.h"
#include "EnhancedInputSubsystemInterface.generated.h"

class UEnhancedInputUserSettings;
class UEnhancedPlayerMappableKeyProfile;
class UInputAction;
class UInputMappingContext;
class UInputModifier;
class UInputTrigger;
class UPlayerMappableInputConfig;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UEnhancedInputSubsystemInterface : public UInterface {
    GENERATED_BODY()
};

class IEnhancedInputSubsystemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void StopContinuousInputInjectionForPlayerMapping(const FName MappingName) PURE_VIRTUAL(StopContinuousInputInjectionForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StopContinuousInputInjectionForAction(const UInputAction* Action) PURE_VIRTUAL(StopContinuousInputInjectionForAction,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StartContinuousInputInjectionForPlayerMapping(const FName MappingName, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(StartContinuousInputInjectionForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StartContinuousInputInjectionForAction(const UInputAction* Action, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(StartContinuousInputInjectionForAction,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RequestRebuildControlMappings(const FModifyContextOptions& Options, EInputMappingRebuildType RebuildType) PURE_VIRTUAL(RequestRebuildControlMappings,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RemovePlayerMappableConfig(const UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options) PURE_VIRTUAL(RemovePlayerMappableConfig,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RemoveMappingContext(const UInputMappingContext* MappingContext, const FModifyContextOptions& Options) PURE_VIRTUAL(RemoveMappingContext,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual int32 RemoveAllPlayerMappedKeysForMapping(const FName MappingName, const FModifyContextOptions& Options) PURE_VIRTUAL(RemoveAllPlayerMappedKeysForMapping, return 0;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RemoveAllPlayerMappedKeys(const FModifyContextOptions& Options) PURE_VIRTUAL(RemoveAllPlayerMappedKeys,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual EMappingQueryResult QueryMapKeyInContextSet(const TArray<UInputMappingContext*>& PrioritizedActiveContexts, const UInputMappingContext* InputContext, const UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues) PURE_VIRTUAL(QueryMapKeyInContextSet, return EMappingQueryResult::Error_EnhancedInputNotEnabled;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual EMappingQueryResult QueryMapKeyInActiveContextSet(const UInputMappingContext* InputContext, const UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues) PURE_VIRTUAL(QueryMapKeyInActiveContextSet, return EMappingQueryResult::Error_EnhancedInputNotEnabled;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual TArray<FKey> QueryKeysMappedToAction(const UInputAction* Action) const PURE_VIRTUAL(QueryKeysMappedToAction, return TArray<FKey>(););
    
protected:
    UFUNCTION()
    virtual void OnUserSettingsChanged(UEnhancedInputUserSettings* Settings) PURE_VIRTUAL(OnUserSettingsChanged,);
    
    UFUNCTION()
    virtual void OnUserKeyProfileChanged(const UEnhancedPlayerMappableKeyProfile* InNewProfile) PURE_VIRTUAL(OnUserKeyProfileChanged,);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual int32 K2_RemovePlayerMappedKeyInSlot(const FName MappingName, const FPlayerMappableKeySlot& KeySlot, const FModifyContextOptions& Options) PURE_VIRTUAL(K2_RemovePlayerMappedKeyInSlot, return 0;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual FKey K2_GetPlayerMappedKeyInSlot(const FName MappingName, const FPlayerMappableKeySlot& KeySlot) const PURE_VIRTUAL(K2_GetPlayerMappedKeyInSlot, return FKey{};);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual int32 K2_AddPlayerMappedKeyInSlot(const FName MappingName, const FKey NewKey, const FPlayerMappableKeySlot& KeySlot, const FModifyContextOptions& Options) PURE_VIRTUAL(K2_AddPlayerMappedKeyInSlot, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void InjectInputVectorForPlayerMapping(const FName MappingName, FVector Value, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(InjectInputVectorForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void InjectInputVectorForAction(const UInputAction* Action, FVector Value, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(InjectInputVectorForAction,);
    
    UFUNCTION(BlueprintCallable)
    virtual void InjectInputForPlayerMapping(const FName MappingName, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(InjectInputForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    virtual void InjectInputForAction(const UInputAction* Action, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) PURE_VIRTUAL(InjectInputForAction,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool HasMappingContext(const UInputMappingContext* MappingContext, int32& OutFoundPriority) const PURE_VIRTUAL(HasMappingContext, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual UEnhancedInputUserSettings* GetUserSettings() const PURE_VIRTUAL(GetUserSettings, return NULL;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual TArray<FKey> GetAllPlayerMappedKeys(const FName MappingName) const PURE_VIRTUAL(GetAllPlayerMappedKeys, return TArray<FKey>(););
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings() const PURE_VIRTUAL(GetAllPlayerMappableActionKeyMappings, return TArray<FEnhancedActionKeyMapping>(););
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void ClearAllMappings() PURE_VIRTUAL(ClearAllMappings,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void AddPlayerMappableConfig(const UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options) PURE_VIRTUAL(AddPlayerMappableConfig,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void AddMappingContext(const UInputMappingContext* MappingContext, int32 Priority, const FModifyContextOptions& Options) PURE_VIRTUAL(AddMappingContext,);
    
};

