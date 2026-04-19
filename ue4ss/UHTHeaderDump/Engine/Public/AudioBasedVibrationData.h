#pragma once
#include "CoreMinimal.h"
#include "AudioBasedVibrationData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FAudioBasedVibrationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    ENGINE_API FAudioBasedVibrationData();
};

