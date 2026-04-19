#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=PolymorphicArrayStructNetSerializerConfig -FallbackName=PolymorphicArrayStructNetSerializerConfig
#include "RootMotionSourceGroupNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionSourceGroupNetSerializerConfig : public FPolymorphicArrayStructNetSerializerConfig {
    GENERATED_BODY()
public:
    ENGINE_API FRootMotionSourceGroupNetSerializerConfig();
};

