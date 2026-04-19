#pragma once
#include "CoreMinimal.h"
#include "EMetaSoundOutputAudioFormat.generated.h"

UENUM(BlueprintType)
enum class EMetaSoundOutputAudioFormat : uint8 {
    Mono,
    Stereo,
    Quad,
    FiveDotOne,
    SevenDotOne,
    COUNT,
};

