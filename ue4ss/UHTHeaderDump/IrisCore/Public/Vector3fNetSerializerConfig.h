#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Vector3fNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FVector3fNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FVector3fNetSerializerConfig();
};

