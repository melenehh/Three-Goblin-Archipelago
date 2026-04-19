#pragma once
#include "CoreMinimal.h"
#include "TextureCookPlatformTilingSettings.generated.h"

UENUM(BlueprintType)
enum TextureCookPlatformTilingSettings {
    TCPTS_FromTextureGroup,
    TCPTS_Tile,
    TCPTS_DoNotTile,
};

