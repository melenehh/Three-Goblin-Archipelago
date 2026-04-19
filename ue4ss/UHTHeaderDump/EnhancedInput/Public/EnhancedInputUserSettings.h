#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "MapPlayerKeyArgs.h"
#include "PlayerKeyMapping.h"
#include "PlayerMappableKeyProfileCreationArgs.h"
#include "EnhancedInputUserSettings.generated.h"

class UEnhancedInputUserSettings;
class UEnhancedPlayerMappableKeyProfile;
class UInputMappingContext;
class ULocalPlayer;

UCLASS(Blueprintable, Config=GameUserSettings)
class ENHANCEDINPUT_API UEnhancedInputUserSettings : public USaveGame {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMappingContextRegisteredWithSettings, const UInputMappingContext*, IMC);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMappableKeyProfileChanged, const UEnhancedPlayerMappableKeyProfile*, NewProfile);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnhancedInputUserSettingsChanged, UEnhancedInputUserSettings*, Settings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnhancedInputUserSettingsApplied);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEnhancedInputUserSettingsChanged OnSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEnhancedInputUserSettingsApplied OnSettingsApplied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentProfileIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UEnhancedPlayerMappableKeyProfile*> SavedKeyProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULocalPlayer> OwningLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UInputMappingContext*> RegisteredMappingContexts;
    
public:
    UEnhancedInputUserSettings();

    UFUNCTION(BlueprintCallable)
    bool UnregisterInputMappingContexts(const TSet<UInputMappingContext*>& MappingContexts);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterInputMappingContext(const UInputMappingContext* IMC);
    
    UFUNCTION(BlueprintCallable)
    void UnMapPlayerKey(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);
    
    UFUNCTION(BlueprintCallable)
    bool SetKeyProfile(const FGameplayTag& InProfileId);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetKeyProfileToDefault(const FGameplayTag& ProfileId, FGameplayTagContainer& FailureReason);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllPlayerKeysInRow(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterInputMappingContexts(const TSet<UInputMappingContext*>& MappingContexts);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterInputMappingContext(const UInputMappingContext* IMC);
    
    UFUNCTION(BlueprintCallable)
    void MapPlayerKey(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMappingContextRegistered(const UInputMappingContext* IMC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnhancedPlayerMappableKeyProfile* GetKeyProfileWithIdentifier(const FGameplayTag& ProfileId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentKeyProfileIdentifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnhancedPlayerMappableKeyProfile* GetCurrentKeyProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FPlayerKeyMapping> FindMappingsInRow(const FName MappingName) const;
    
    UFUNCTION(BlueprintCallable)
    UEnhancedPlayerMappableKeyProfile* CreateNewKeyProfile(const FPlayerMappableKeyProfileCreationArgs& InArgs);
    
    UFUNCTION(BlueprintCallable)
    void AsyncSaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings();
    
};

