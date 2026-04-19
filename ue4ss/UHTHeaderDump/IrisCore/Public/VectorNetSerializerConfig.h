#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "VectorNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FVectorNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FVectorNetSerializerConfig();
};

