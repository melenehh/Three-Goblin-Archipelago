#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Int16RangeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FInt16RangeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FInt16RangeNetSerializerConfig();
};

