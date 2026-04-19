#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "VectorNetQuantizeNormalNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FVectorNetQuantizeNormalNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FVectorNetQuantizeNormalNetSerializerConfig();
};

