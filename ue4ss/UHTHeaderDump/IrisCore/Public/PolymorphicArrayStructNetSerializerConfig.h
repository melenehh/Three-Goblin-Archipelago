#pragma once
#include "CoreMinimal.h"
#include "PolymorphicStructNetSerializerConfig.h"
#include "PolymorphicArrayStructNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FPolymorphicArrayStructNetSerializerConfig : public FPolymorphicStructNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FPolymorphicArrayStructNetSerializerConfig();
};

