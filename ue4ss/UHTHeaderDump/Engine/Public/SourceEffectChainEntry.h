#pragma once
#include "CoreMinimal.h"
#include "SourceEffectChainEntry.generated.h"

class USoundEffectSourcePreset;

USTRUCT(BlueprintType)
struct FSourceEffectChainEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePreset* Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBypass: 1;
    
    ENGINE_API FSourceEffectChainEntry();
};

