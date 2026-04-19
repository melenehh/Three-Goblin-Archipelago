#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "PackedInt32NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FPackedInt32NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FPackedInt32NetSerializerConfig();
};

