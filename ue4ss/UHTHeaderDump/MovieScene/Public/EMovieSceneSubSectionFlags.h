#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneSubSectionFlags.generated.h"

UENUM()
enum class EMovieSceneSubSectionFlags : int32 {
    None,
    OverrideKeepState,
    OverrideRestoreState,
    IgnoreHierarchicalBias = 4,
    BlendHierarchicalBias = 8,
    AnyRestoreStateOverride = 3,
};

