#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "RotatorAsShortNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FRotatorAsShortNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FRotatorAsShortNetSerializerConfig();
};

