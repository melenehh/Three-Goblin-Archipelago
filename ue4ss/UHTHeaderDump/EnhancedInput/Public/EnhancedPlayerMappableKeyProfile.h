#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeyMappingRow.h"
#include "MapPlayerKeyArgs.h"
#include "PlayerKeyMapping.h"
#include "PlayerMappableKeyQueryOptions.h"
#include "EnhancedPlayerMappableKeyProfile.generated.h"

UCLASS(Blueprintable)
class ENHANCEDINPUT_API UEnhancedPlayerMappableKeyProfile : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag ProfileIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlatformUserId OwningUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FKeyMappingRow> PlayerMappedKeys;
    
public:
    UEnhancedPlayerMappableKeyProfile();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToString() const;
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayName(const FText& NewDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ResetMappingToDefault(const FName InMappingName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 QueryPlayerMappedKeys(const FPlayerMappableKeyQueryOptions& Options, TArray<FKey>& OutKeys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_FindKeyMapping(FPlayerKeyMapping& OutKeyMapping, const FMapPlayerKeyArgs& InArgs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetProfileIdentifer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetProfileDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FKeyMappingRow> GetPlayerMappingRows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMappingNamesForKey(const FKey& InKey, TArray<FName>& OutMappingNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMappedKeysInRow(const FName MappingName, TArray<FKey>& OutKeys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpProfileToLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesMappingPassQueryOptions(const FPlayerKeyMapping& PlayerMapping, const FPlayerMappableKeyQueryOptions& Options) const;
    
};

