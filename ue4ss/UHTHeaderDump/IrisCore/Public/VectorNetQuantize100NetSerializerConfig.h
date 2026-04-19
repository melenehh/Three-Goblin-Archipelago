#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "VectorNetQuantize100NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FVectorNetQuantize100NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FVectorNetQuantize100NetSerializerConfig();
};

