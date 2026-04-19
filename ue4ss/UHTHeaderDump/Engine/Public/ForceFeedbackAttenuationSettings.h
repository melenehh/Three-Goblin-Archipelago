#pragma once
#include "CoreMinimal.h"
#include "BaseAttenuationSettings.h"
#include "ForceFeedbackAttenuationSettings.generated.h"

USTRUCT(BlueprintType)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings {
    GENERATED_BODY()
public:
    ENGINE_API FForceFeedbackAttenuationSettings();
};

