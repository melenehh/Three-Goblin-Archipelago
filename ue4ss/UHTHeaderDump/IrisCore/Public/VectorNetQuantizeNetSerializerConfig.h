#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "VectorNetQuantizeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FVectorNetQuantizeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FVectorNetQuantizeNetSerializerConfig();
};

