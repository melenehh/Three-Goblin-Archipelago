#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "RotatorNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FRotatorNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FRotatorNetSerializerConfig();
};

