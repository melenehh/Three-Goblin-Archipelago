#pragma once
#include "CoreMinimal.h"
#include "EXPBDComplianceType.generated.h"

UENUM(BlueprintType)
enum class EXPBDComplianceType : uint8 {
    Concrete,
    Wood,
    Leather,
    Tendon,
    Rubber,
    Muscle,
    Fat,
};

