#pragma once
#include "CoreMinimal.h"
#include "PlayerMappableKeySlot.generated.h"

USTRUCT(BlueprintType)
struct ENHANCEDINPUT_API FPlayerMappableKeySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNumber;
    
    FPlayerMappableKeySlot();
};

