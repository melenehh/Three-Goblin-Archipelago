#pragma once
#include "CoreMinimal.h"
#include "PhysicsPredictionSettings.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsPredictionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicsPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicsResimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResimulationErrorThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSupportedLatencyPrediction;
    
    ENGINE_API FPhysicsPredictionSettings();
};

