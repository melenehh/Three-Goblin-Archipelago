#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundGeneratorOutput -FallbackName=SoundGeneratorOutput
#include "MetaSoundOutput.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDENGINE_API FMetaSoundOutput : public FSoundGeneratorOutput {
    GENERATED_BODY()
public:
    FMetaSoundOutput();
};

