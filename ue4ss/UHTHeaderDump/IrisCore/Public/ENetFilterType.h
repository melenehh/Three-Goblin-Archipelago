#pragma once
#include "CoreMinimal.h"
#include "ENetFilterType.generated.h"

UENUM(BlueprintType)
enum class ENetFilterType : uint8 {
    PrePoll_Raw,
    PostPoll_FragmentBased,
};

