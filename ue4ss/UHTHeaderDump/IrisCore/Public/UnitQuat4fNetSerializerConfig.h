#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "UnitQuat4fNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUnitQuat4fNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FUnitQuat4fNetSerializerConfig();
};

