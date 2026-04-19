#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "IntNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FIntNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FIntNetSerializerConfig();
};

