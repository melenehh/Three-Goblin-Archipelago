#pragma once
#include "CoreMinimal.h"
#include "CachedPoseIndices.generated.h"

USTRUCT(BlueprintType)
struct FCachedPoseIndices {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> OrderedSavedPoseNodeIndices;
    
    ENGINE_API FCachedPoseIndices();
};

