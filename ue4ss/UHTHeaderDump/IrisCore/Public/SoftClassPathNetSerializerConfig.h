#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "SoftClassPathNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FSoftClassPathNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FSoftClassPathNetSerializerConfig();
};

