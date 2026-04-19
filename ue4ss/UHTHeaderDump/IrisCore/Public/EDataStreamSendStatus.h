#pragma once
#include "CoreMinimal.h"
#include "EDataStreamSendStatus.generated.h"

UENUM(BlueprintType)
enum class EDataStreamSendStatus : uint8 {
    Send,
    Pause,
};

