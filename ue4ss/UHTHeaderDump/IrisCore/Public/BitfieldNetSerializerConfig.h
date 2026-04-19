#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "BitfieldNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FBitfieldNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitMask;
    
    IRISCORE_API FBitfieldNetSerializerConfig();
};

