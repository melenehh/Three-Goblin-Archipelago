#pragma once
#include "CoreMinimal.h"
#include "AnimNode_AssetPlayerBase.h"
#include "InputScaleBiasClampState.h"
#include "AnimNode_SequencePlayerBase.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_SequencePlayerBase : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputScaleBiasClampState PlayRateScaleBiasClampState;
    
public:
    ENGINE_API FAnimNode_SequencePlayerBase();
};

