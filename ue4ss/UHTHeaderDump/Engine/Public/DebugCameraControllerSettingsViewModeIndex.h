#pragma once
#include "CoreMinimal.h"
#include "EViewModeIndex.h"
#include "DebugCameraControllerSettingsViewModeIndex.generated.h"

USTRUCT(BlueprintType)
struct FDebugCameraControllerSettingsViewModeIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewModeIndex> ViewModeIndex;
    
    ENGINE_API FDebugCameraControllerSettingsViewModeIndex();
};

