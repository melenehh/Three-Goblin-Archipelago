#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "SoftObjectPathNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FSoftObjectPathNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FSoftObjectPathNetSerializerConfig();
};

