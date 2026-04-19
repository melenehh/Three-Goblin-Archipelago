#pragma once
#include "CoreMinimal.h"
#include "PoseLinkBase.h"
#include "ComponentSpacePoseLink.generated.h"

USTRUCT(BlueprintType)
struct FComponentSpacePoseLink : public FPoseLinkBase {
    GENERATED_BODY()
public:
    ENGINE_API FComponentSpacePoseLink();
};

