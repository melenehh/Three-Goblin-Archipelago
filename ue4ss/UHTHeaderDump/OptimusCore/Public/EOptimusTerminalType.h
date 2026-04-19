#pragma once
#include "CoreMinimal.h"
#include "EOptimusTerminalType.generated.h"

UENUM()
enum class EOptimusTerminalType : int32 {
    Unknown,
    Entry,
    Return,
};

