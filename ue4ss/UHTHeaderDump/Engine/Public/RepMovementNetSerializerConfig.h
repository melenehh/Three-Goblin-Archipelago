#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "RepMovementNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FRepMovementNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    ENGINE_API FRepMovementNetSerializerConfig();
};

