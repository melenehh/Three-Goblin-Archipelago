#pragma once
#include "CoreMinimal.h"
#include "SoundModulationDestinationSettings.generated.h"

class USoundModulatorBase;

USTRUCT(BlueprintType)
struct FSoundModulationDestinationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USoundModulatorBase*> Modulators;
    
    ENGINE_API FSoundModulationDestinationSettings();
};

