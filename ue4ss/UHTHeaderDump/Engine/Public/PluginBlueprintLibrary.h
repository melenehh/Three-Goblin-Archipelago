#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "BlueprintFunctionLibrary.h"
#include "PluginBlueprintLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPluginBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPluginBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsPluginMounted(const FString& PluginName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginVersionName(const FString& PluginName, FString& OutVersionName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginVersion(const FString& PluginName, int32& OutVersion);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginNameForObjectPath(const FSoftObjectPath& ObjectPath, FString& OutPluginName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginMountedAssetPath(const FString& PluginName, FString& OutAssetPath);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginEditorCustomVirtualPath(const FString& PluginName, FString& OutVirtualPath);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginDescriptorFilePath(const FString& PluginName, FString& OutFilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginDescription(const FString& PluginName, FString& OutDescription);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginContentDir(const FString& PluginName, FString& OutContentDir);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPluginBaseDir(const FString& PluginName, FString& OutBaseDir);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetEnabledPluginNames();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAdditionalProjectPluginSearchPaths();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAdditionalPluginSearchPaths();
    
};

