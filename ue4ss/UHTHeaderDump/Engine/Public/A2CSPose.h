#pragma once
#include "CoreMinimal.h"
#include "A2Pose.h"
#include "A2CSPose.generated.h"

USTRUCT(BlueprintType)
struct FA2CSPose : public FA2Pose {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ComponentSpaceFlags;
    
public:
    ENGINE_API FA2CSPose();
};

