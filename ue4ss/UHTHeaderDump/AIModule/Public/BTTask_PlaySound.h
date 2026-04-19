#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_PlaySound.generated.h"

class USoundCue;

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_PlaySound : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundToPlay;
    
    UBTTask_PlaySound();

};

