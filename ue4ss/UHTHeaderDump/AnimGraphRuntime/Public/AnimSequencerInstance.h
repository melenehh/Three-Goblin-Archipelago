#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "SequencerAnimationSupport.h"
#include "AnimSequencerInstance.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAnimSequencerInstance : public UAnimInstance, public ISequencerAnimationSupport {
    GENERATED_BODY()
public:
    UAnimSequencerInstance();


    // Fix for true pure virtual functions not being implemented
};

