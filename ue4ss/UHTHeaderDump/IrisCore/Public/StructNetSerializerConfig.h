#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "StructNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FStructNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FStructNetSerializerConfig();
};

