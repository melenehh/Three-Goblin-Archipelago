#pragma once
#include "CoreMinimal.h"
#include "DialogueContext.generated.h"

class UDialogueVoice;

USTRUCT(BlueprintType)
struct FDialogueContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueVoice* Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogueVoice*> Targets;
    
    ENGINE_API FDialogueContext();
};

