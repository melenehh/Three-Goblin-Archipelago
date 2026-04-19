#pragma once
#include "CoreMinimal.h"
#include "EConnectionContactMethod.generated.h"

UENUM(BlueprintType)
enum class EConnectionContactMethod : uint8 {
    None,
    ConvexHullContactArea,
};

