#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "BoolNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FBoolNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FBoolNetSerializerConfig();
};

