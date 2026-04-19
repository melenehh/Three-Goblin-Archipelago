#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "AnimSequencerInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FAnimSequencerInstanceProxy();
};

