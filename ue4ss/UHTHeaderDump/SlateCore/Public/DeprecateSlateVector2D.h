#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "DeprecateSlateVector2D.generated.h"

USTRUCT(BlueprintType)
struct FDeprecateSlateVector2D : public FVector2f {
    GENERATED_BODY()
public:
    SLATECORE_API FDeprecateSlateVector2D();
};

