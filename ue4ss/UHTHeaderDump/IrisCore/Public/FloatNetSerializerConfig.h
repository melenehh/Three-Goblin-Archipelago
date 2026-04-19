#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "FloatNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FFloatNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FFloatNetSerializerConfig();
};

