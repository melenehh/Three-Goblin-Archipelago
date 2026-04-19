#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "GuidNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FGuidNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FGuidNetSerializerConfig();
};

