#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "EnumUint64NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnumUint64NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FEnumUint64NetSerializerConfig();
};

