#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "UintNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUintNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FUintNetSerializerConfig();
};

