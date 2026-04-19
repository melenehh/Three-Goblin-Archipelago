#include "EnhancedInputUserSettings.h"

UEnhancedInputUserSettings::UEnhancedInputUserSettings() {
}

bool UEnhancedInputUserSettings::UnregisterInputMappingContexts(const TSet<UInputMappingContext*>& MappingContexts) {
    return false;
}

bool UEnhancedInputUserSettings::UnregisterInputMappingContext(const UInputMappingContext* IMC) {
    return false;
}

void UEnhancedInputUserSettings::UnMapPlayerKey(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason) {
}

bool UEnhancedInputUserSettings::SetKeyProfile(const FGameplayTag& InProfileId) {
    return false;
}

void UEnhancedInputUserSettings::SaveSettings() {
}

void UEnhancedInputUserSettings::ResetKeyProfileToDefault(const FGameplayTag& ProfileId, FGameplayTagContainer& FailureReason) {
}

void UEnhancedInputUserSettings::ResetAllPlayerKeysInRow(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason) {
}

bool UEnhancedInputUserSettings::RegisterInputMappingContexts(const TSet<UInputMappingContext*>& MappingContexts) {
    return false;
}

bool UEnhancedInputUserSettings::RegisterInputMappingContext(const UInputMappingContext* IMC) {
    return false;
}

void UEnhancedInputUserSettings::MapPlayerKey(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason) {
}

bool UEnhancedInputUserSettings::IsMappingContextRegistered(const UInputMappingContext* IMC) const {
    return false;
}

UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::GetKeyProfileWithIdentifier(const FGameplayTag& ProfileId) const {
    return NULL;
}

FGameplayTag UEnhancedInputUserSettings::GetCurrentKeyProfileIdentifier() const {
    return FGameplayTag{};
}

UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::GetCurrentKeyProfile() const {
    return NULL;
}

TSet<FPlayerKeyMapping> UEnhancedInputUserSettings::FindMappingsInRow(const FName MappingName) const {
    return TSet<FPlayerKeyMapping>();
}

UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::CreateNewKeyProfile(const FPlayerMappableKeyProfileCreationArgs& InArgs) {
    return NULL;
}

void UEnhancedInputUserSettings::AsyncSaveSettings() {
}

void UEnhancedInputUserSettings::ApplySettings() {
}


