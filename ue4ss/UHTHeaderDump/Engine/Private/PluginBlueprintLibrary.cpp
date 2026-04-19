#include "PluginBlueprintLibrary.h"

UPluginBlueprintLibrary::UPluginBlueprintLibrary() {
}

bool UPluginBlueprintLibrary::IsPluginMounted(const FString& PluginName) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginVersionName(const FString& PluginName, FString& OutVersionName) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginVersion(const FString& PluginName, int32& OutVersion) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginNameForObjectPath(const FSoftObjectPath& ObjectPath, FString& OutPluginName) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginMountedAssetPath(const FString& PluginName, FString& OutAssetPath) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginEditorCustomVirtualPath(const FString& PluginName, FString& OutVirtualPath) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginDescriptorFilePath(const FString& PluginName, FString& OutFilePath) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginDescription(const FString& PluginName, FString& OutDescription) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginContentDir(const FString& PluginName, FString& OutContentDir) {
    return false;
}

bool UPluginBlueprintLibrary::GetPluginBaseDir(const FString& PluginName, FString& OutBaseDir) {
    return false;
}

TArray<FString> UPluginBlueprintLibrary::GetEnabledPluginNames() {
    return TArray<FString>();
}

TArray<FString> UPluginBlueprintLibrary::GetAdditionalProjectPluginSearchPaths() {
    return TArray<FString>();
}

TArray<FString> UPluginBlueprintLibrary::GetAdditionalPluginSearchPaths() {
    return TArray<FString>();
}


