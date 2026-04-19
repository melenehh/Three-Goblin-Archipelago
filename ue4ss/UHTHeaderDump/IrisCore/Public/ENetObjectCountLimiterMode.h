#pragma once
#include "CoreMinimal.h"
#include "ENetObjectCountLimiterMode.generated.h"

UENUM()
enum class ENetObjectCountLimiterMode : uint32 {
    RoundRobin,
    Fill,
};

