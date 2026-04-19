#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Uint16RangeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUint16RangeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FUint16RangeNetSerializerConfig();
};

