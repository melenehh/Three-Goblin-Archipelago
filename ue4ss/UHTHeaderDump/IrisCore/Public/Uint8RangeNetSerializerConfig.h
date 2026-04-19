#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Uint8RangeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUint8RangeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LowerBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FUint8RangeNetSerializerConfig();
};

