#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "UnitQuatNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUnitQuatNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FUnitQuatNetSerializerConfig();
};

