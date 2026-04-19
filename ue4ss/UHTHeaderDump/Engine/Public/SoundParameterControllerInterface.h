#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioParameterControllerInterface -FallbackName=AudioParameterControllerInterface
#include "SoundParameterControllerInterface.generated.h"

UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class USoundParameterControllerInterface : public UAudioParameterControllerInterface {
    GENERATED_BODY()
};

class ISoundParameterControllerInterface : public IAudioParameterControllerInterface {
    GENERATED_BODY()
public:
};

