#pragma once
#include "CoreMinimal.h"
#include "PoseLinkBase.h"
#include "PoseLink.generated.h"

USTRUCT(BlueprintType)
struct FPoseLink : public FPoseLinkBase {
    GENERATED_BODY()
public:
    ENGINE_API FPoseLink();
};

