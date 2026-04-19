#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "StringNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FStringNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FStringNetSerializerConfig();
};

