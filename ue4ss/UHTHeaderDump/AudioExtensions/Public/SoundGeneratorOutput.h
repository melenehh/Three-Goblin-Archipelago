#pragma once
#include "CoreMinimal.h"
#include "SoundGeneratorOutput.generated.h"

USTRUCT(BlueprintType)
struct FSoundGeneratorOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    AUDIOEXTENSIONS_API FSoundGeneratorOutput();
};

