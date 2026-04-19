#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "DateTimeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FDateTimeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FDateTimeNetSerializerConfig();
};

