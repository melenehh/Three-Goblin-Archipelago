#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "Uint32RangeNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUint32RangeNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FUint32RangeNetSerializerConfig();
};

