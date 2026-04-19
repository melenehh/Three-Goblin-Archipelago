#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "ObjectNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FObjectNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FObjectNetSerializerConfig();
};

