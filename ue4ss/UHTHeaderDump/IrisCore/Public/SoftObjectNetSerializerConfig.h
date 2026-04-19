#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "SoftObjectNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FSoftObjectNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FSoftObjectNetSerializerConfig();
};

