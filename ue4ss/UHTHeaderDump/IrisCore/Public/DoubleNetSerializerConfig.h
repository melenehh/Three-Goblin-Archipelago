#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "DoubleNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FDoubleNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FDoubleNetSerializerConfig();
};

