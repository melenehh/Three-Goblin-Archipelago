#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EInputMappingRebuildType.h"
#include "EMappingQueryIssue.h"
#include "EMappingQueryResult.h"
#include "EnhancedActionKeyMapping.h"
#include "EnhancedInputSubsystemInterface.h"
#include "InputActionValue.h"
#include "MappingQueryIssue.h"
#include "ModifyContextOptions.h"
#include "PlayerMappableKeySlot.h"
#include "EnhancedInputWorldSubsystem.generated.h"

class AActor;
class UEnhancedInputUserSettings;
class UEnhancedPlayerInput;
class UEnhancedPlayerMappableKeyProfile;
class UInputAction;
class UInputComponent;
class UInputMappingContext;
class UInputModifier;
class UInputTrigger;
class UPlayerMappableInputConfig;

UCLASS(Blueprintable)
class ENHANCEDINPUT_API UEnhancedInputWorldSubsystem : public UWorldSubsystem, public IEnhancedInputSubsystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnhancedPlayerInput* PlayerInput;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UInputComponent>> CurrentInputStack;
    
public:
    UEnhancedInputWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    bool RemoveActorInputComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddActorInputComponent(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopContinuousInputInjectionForPlayerMapping(const FName MappingName) override PURE_VIRTUAL(StopContinuousInputInjectionForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    void StopContinuousInputInjectionForAction(const UInputAction* Action) override PURE_VIRTUAL(StopContinuousInputInjectionForAction,);
    
    UFUNCTION(BlueprintCallable)
    void StartContinuousInputInjectionForPlayerMapping(const FName MappingName, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) override PURE_VIRTUAL(StartContinuousInputInjectionForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    void StartContinuousInputInjectionForAction(const UInputAction* Action, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) override PURE_VIRTUAL(StartContinuousInputInjectionForAction,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RequestRebuildControlMappings(const FModifyContextOptions& Options, EInputMappingRebuildType RebuildType) override PURE_VIRTUAL(RequestRebuildControlMappings,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemovePlayerMappableConfig(const UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options) override PURE_VIRTUAL(RemovePlayerMappableConfig,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveMappingContext(const UInputMappingContext* MappingContext, const FModifyContextOptions& Options) override PURE_VIRTUAL(RemoveMappingContext,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 RemoveAllPlayerMappedKeysForMapping(const FName MappingName, const FModifyContextOptions& Options) override PURE_VIRTUAL(RemoveAllPlayerMappedKeysForMapping, return 0;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveAllPlayerMappedKeys(const FModifyContextOptions& Options) override PURE_VIRTUAL(RemoveAllPlayerMappedKeys,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EMappingQueryResult QueryMapKeyInContextSet(const TArray<UInputMappingContext*>& PrioritizedActiveContexts, const UInputMappingContext* InputContext, const UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues) override PURE_VIRTUAL(QueryMapKeyInContextSet, return EMappingQueryResult::Error_EnhancedInputNotEnabled;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    EMappingQueryResult QueryMapKeyInActiveContextSet(const UInputMappingContext* InputContext, const UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues) override PURE_VIRTUAL(QueryMapKeyInActiveContextSet, return EMappingQueryResult::Error_EnhancedInputNotEnabled;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    TArray<FKey> QueryKeysMappedToAction(const UInputAction* Action) const override PURE_VIRTUAL(QueryKeysMappedToAction, return TArray<FKey>(););
    
protected:
    UFUNCTION()
    void OnUserSettingsChanged(UEnhancedInputUserSettings* Settings) override PURE_VIRTUAL(OnUserSettingsChanged,);
    
    UFUNCTION()
    void OnUserKeyProfileChanged(const UEnhancedPlayerMappableKeyProfile* InNewProfile) override PURE_VIRTUAL(OnUserKeyProfileChanged,);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 K2_RemovePlayerMappedKeyInSlot(const FName MappingName, const FPlayerMappableKeySlot& KeySlot, const FModifyContextOptions& Options) override PURE_VIRTUAL(K2_RemovePlayerMappedKeyInSlot, return 0;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FKey K2_GetPlayerMappedKeyInSlot(const FName MappingName, const FPlayerMappableKeySlot& KeySlot) const override PURE_VIRTUAL(K2_GetPlayerMappedKeyInSlot, return FKey{};);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 K2_AddPlayerMappedKeyInSlot(const FName MappingName, const FKey NewKey, const FPlayerMappableKeySlot& KeySlot, const FModifyContextOptions& Options) override PURE_VIRTUAL(K2_AddPlayerMappedKeyInSlot, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void InjectInputVectorForPlayerMapping(const FName MappingName, FVector Value, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) override PURE_VIRTUAL(InjectInputVectorForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    void InjectInputVectorForAction(const UInputAction* Action, FVector Value, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) override PURE_VIRTUAL(InjectInputVectorForAction,);
    
    UFUNCTION(BlueprintCallable)
    void InjectInputForPlayerMapping(const FName MappingName, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) override PURE_VIRTUAL(InjectInputForPlayerMapping,);
    
    UFUNCTION(BlueprintCallable)
    void InjectInputForAction(const UInputAction* Action, FInputActionValue RawValue, const TArray<UInputModifier*>& Modifiers, const TArray<UInputTrigger*>& Triggers) override PURE_VIRTUAL(InjectInputForAction,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool HasMappingContext(const UInputMappingContext* MappingContext, int32& OutFoundPriority) const override PURE_VIRTUAL(HasMappingContext, return false;);
    
    UFUNCTION(BlueprintCallable)
    UEnhancedInputUserSettings* GetUserSettings() const override PURE_VIRTUAL(GetUserSettings, return NULL;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    TArray<FKey> GetAllPlayerMappedKeys(const FName MappingName) const override PURE_VIRTUAL(GetAllPlayerMappedKeys, return TArray<FKey>(););
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings() const override PURE_VIRTUAL(GetAllPlayerMappableActionKeyMappings, return TArray<FEnhancedActionKeyMapping>(););
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ClearAllMappings() override PURE_VIRTUAL(ClearAllMappings,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddPlayerMappableConfig(const UPlayerMappableInputConfig* Config, const FModifyContextOptions& Options) override PURE_VIRTUAL(AddPlayerMappableConfig,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddMappingContext(const UInputMappingContext* MappingContext, int32 Priority, const FModifyContextOptions& Options) override PURE_VIRTUAL(AddMappingContext,);
    
};

