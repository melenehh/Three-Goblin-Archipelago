#pragma once
#include "CoreMinimal.h"
#include "EDataflowWaveFunctionType.generated.h"

UENUM(BlueprintType)
enum class EDataflowWaveFunctionType : uint8 {
    Dataflow_WaveFunctionType_Cosine,
    Dataflow_WaveFunctionType_Gaussian,
    Dataflow_WaveFunctionType_Falloff,
    Dataflow_WaveFunctionType_Decay,
};

