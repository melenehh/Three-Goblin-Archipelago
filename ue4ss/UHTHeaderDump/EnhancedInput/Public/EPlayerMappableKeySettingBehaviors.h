#pragma once
#include "CoreMinimal.h"
#include "EPlayerMappableKeySettingBehaviors.generated.h"

UENUM(BlueprintType)
enum class EPlayerMappableKeySettingBehaviors : uint8 {
    InheritSettingsFromAction,
    OverrideSettings,
    IgnoreSettings,
};

