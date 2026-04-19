#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "UnitQuat4dNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUnitQuat4dNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FUnitQuat4dNetSerializerConfig();
};

