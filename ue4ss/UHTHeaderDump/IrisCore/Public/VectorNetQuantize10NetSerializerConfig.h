#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "VectorNetQuantize10NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FVectorNetQuantize10NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FVectorNetQuantize10NetSerializerConfig();
};

