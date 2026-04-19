#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "NopNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FNopNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FNopNetSerializerConfig();
};

