#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "HitResultNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FHitResultNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    ENGINE_API FHitResultNetSerializerConfig();
};

