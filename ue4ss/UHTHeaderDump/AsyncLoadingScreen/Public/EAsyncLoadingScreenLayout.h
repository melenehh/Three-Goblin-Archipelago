#pragma once
#include "CoreMinimal.h"
#include "EAsyncLoadingScreenLayout.generated.h"

UENUM(BlueprintType)
enum class EAsyncLoadingScreenLayout : uint8 {
    ALSL_Classic,
    ALSL_Center,
    ALSL_Letterbox,
    ALSL_Sidebar,
    ALSL_DualSidebar,
};

