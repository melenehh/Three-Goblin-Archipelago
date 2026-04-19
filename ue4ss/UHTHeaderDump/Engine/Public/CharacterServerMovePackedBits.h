#pragma once
#include "CoreMinimal.h"
#include "CharacterNetworkSerializationPackedBits.h"
#include "CharacterServerMovePackedBits.generated.h"

USTRUCT(BlueprintType)
struct FCharacterServerMovePackedBits : public FCharacterNetworkSerializationPackedBits {
    GENERATED_BODY()
public:
    ENGINE_API FCharacterServerMovePackedBits();
};

