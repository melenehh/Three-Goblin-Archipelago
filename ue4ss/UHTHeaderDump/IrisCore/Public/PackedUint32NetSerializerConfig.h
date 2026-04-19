#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "PackedUint32NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FPackedUint32NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FPackedUint32NetSerializerConfig();
};

