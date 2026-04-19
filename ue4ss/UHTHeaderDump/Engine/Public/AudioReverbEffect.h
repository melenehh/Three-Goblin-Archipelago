#pragma once
#include "CoreMinimal.h"
#include "AudioEffectParameters.h"
#include "AudioReverbEffect.generated.h"

USTRUCT(BlueprintType)
struct FAudioReverbEffect : public FAudioEffectParameters {
    GENERATED_BODY()
public:
    ENGINE_API FAudioReverbEffect();
};

