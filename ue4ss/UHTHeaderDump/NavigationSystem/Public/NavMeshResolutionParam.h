#pragma once
#include "CoreMinimal.h"
#include "NavMeshResolutionParam.generated.h"

USTRUCT(BlueprintType)
struct FNavMeshResolutionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AgentMaxStepHeight;
    
    NAVIGATIONSYSTEM_API FNavMeshResolutionParam();
};

