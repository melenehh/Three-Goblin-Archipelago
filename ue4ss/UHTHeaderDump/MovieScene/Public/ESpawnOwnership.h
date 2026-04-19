#pragma once
#include "CoreMinimal.h"
#include "ESpawnOwnership.generated.h"

UENUM(BlueprintType)
enum class ESpawnOwnership : uint8 {
    InnerSequence,
    RootSequence,
    External,
};

