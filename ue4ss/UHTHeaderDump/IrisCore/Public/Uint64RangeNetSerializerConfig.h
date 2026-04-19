#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Uint64RangeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUint64RangeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FUint64RangeNetSerializerConfig();
};

