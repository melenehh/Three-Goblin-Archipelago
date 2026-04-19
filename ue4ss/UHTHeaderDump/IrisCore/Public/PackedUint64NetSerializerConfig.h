#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "PackedUint64NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FPackedUint64NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FPackedUint64NetSerializerConfig();
};

