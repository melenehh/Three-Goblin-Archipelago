#pragma once
#include "CoreMinimal.h"
#include "EDamageModelTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EDamageModelTypeEnum : uint8 {
    Chaos_Damage_Model_UserDefined_Damage_Threshold,
    Chaos_Damage_Model_Material_Strength_And_Connectivity_DamageThreshold,
};

