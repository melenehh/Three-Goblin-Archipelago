#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Int32RangeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FInt32RangeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FInt32RangeNetSerializerConfig();
};

