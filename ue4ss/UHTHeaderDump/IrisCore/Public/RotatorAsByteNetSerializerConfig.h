#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "RotatorAsByteNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FRotatorAsByteNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FRotatorAsByteNetSerializerConfig();
};

