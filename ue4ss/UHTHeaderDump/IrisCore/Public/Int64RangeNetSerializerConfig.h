#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Int64RangeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FInt64RangeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FInt64RangeNetSerializerConfig();
};

