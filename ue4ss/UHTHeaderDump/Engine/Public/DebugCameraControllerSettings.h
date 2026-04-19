#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DebugCameraControllerSettingsViewModeIndex.h"
#include "DebugCameraControllerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Engine)
class UDebugCameraControllerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes;
    
    UDebugCameraControllerSettings();

};

