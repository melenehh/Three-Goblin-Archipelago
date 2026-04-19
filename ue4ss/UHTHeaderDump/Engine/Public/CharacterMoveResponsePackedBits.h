#pragma once
#include "CoreMinimal.h"
#include "CharacterNetworkSerializationPackedBits.h"
#include "CharacterMoveResponsePackedBits.generated.h"

USTRUCT(BlueprintType)
struct FCharacterMoveResponsePackedBits : public FCharacterNetworkSerializationPackedBits {
    GENERATED_BODY()
public:
    ENGINE_API FCharacterMoveResponsePackedBits();
};

