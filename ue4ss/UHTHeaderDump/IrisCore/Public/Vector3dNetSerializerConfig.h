#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Vector3dNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FVector3dNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISCORE_API FVector3dNetSerializerConfig();
};

