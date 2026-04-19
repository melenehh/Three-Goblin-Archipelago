#include "EnhancedPlayerMappableKeyProfile.h"

UEnhancedPlayerMappableKeyProfile::UEnhancedPlayerMappableKeyProfile() {
}

FString UEnhancedPlayerMappableKeyProfile::ToString() const {
    return TEXT("");
}

void UEnhancedPlayerMappableKeyProfile::SetDisplayName(const FText& NewDisplayName) {
}

void UEnhancedPlayerMappableKeyProfile::ResetToDefault() {
}

void UEnhancedPlayerMappableKeyProfile::ResetMappingToDefault(const FName InMappingName) {
}

int32 UEnhancedPlayerMappableKeyProfile::QueryPlayerMappedKeys(const FPlayerMappableKeyQueryOptions& Options, TArray<FKey>& OutKeys) const {
    return 0;
}

void UEnhancedPlayerMappableKeyProfile::K2_FindKeyMapping(FPlayerKeyMapping& OutKeyMapping, const FMapPlayerKeyArgs& InArgs) const {
}

FGameplayTag UEnhancedPlayerMappableKeyProfile::GetProfileIdentifer() const {
    return FGameplayTag{};
}

FText UEnhancedPlayerMappableKeyProfile::GetProfileDisplayName() const {
    return FText::GetEmpty();
}

TMap<FName, FKeyMappingRow> UEnhancedPlayerMappableKeyProfile::GetPlayerMappingRows() const {
    return TMap<FName, FKeyMappingRow>();
}

int32 UEnhancedPlayerMappableKeyProfile::GetMappingNamesForKey(const FKey& InKey, TArray<FName>& OutMappingNames) const {
    return 0;
}

int32 UEnhancedPlayerMappableKeyProfile::GetMappedKeysInRow(const FName MappingName, TArray<FKey>& OutKeys) const {
    return 0;
}

void UEnhancedPlayerMappableKeyProfile::DumpProfileToLog() const {
}

bool UEnhancedPlayerMappableKeyProfile::DoesMappingPassQueryOptions(const FPlayerKeyMapping& PlayerMapping, const FPlayerMappableKeyQueryOptions& Options) const {
    return false;
}


