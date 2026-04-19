#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "PackedInt64NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FPackedInt64NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FPackedInt64NetSerializerConfig();
};

