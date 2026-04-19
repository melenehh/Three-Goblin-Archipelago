#pragma once
#include "CoreMinimal.h"
#include "EInterchangeTranslatorType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeTranslatorType : uint8 {
    Invalid,
    Assets = 2,
    Actors = 4,
    Scenes = 6,
};

