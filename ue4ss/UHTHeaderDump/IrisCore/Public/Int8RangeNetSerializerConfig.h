#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Int8RangeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FInt8RangeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FInt8RangeNetSerializerConfig();
};

