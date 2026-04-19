#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "NameNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FNameNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FNameNetSerializerConfig();
};

