#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettingsBackedByCVars -FallbackName=DeveloperSettingsBackedByCVars
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PerPlatformSettings -FallbackName=PerPlatformSettings
#include "DefaultContextSetting.h"
#include "EnhancedInputDeveloperSettings.generated.h"

class UEnhancedInputUserSettings;
class UEnhancedPlayerInput;
class UEnhancedPlayerMappableKeyProfile;

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class ENHANCEDINPUT_API UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultContextSetting> DefaultMappingContexts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultContextSetting> DefaultWorldSubsystemMappingContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformSettings PlatformSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnhancedInputUserSettings> UserSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnhancedPlayerMappableKeyProfile> DefaultPlayerMappableKeyProfileClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnhancedPlayerInput> DefaultWorldInputClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSendTriggeredEventsWhenInputIsFlushed: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableUserSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDefaultMappingContexts: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldOnlyTriggerLastActionInChord: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLogOnDeprecatedConfigUsed: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableWorldSubsystem: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldLogAllWorldSubsystemInputs: 1;
    
    UEnhancedInputDeveloperSettings();

};

