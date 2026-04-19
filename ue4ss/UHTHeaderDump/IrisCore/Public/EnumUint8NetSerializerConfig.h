#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "EnumUint8NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnumUint8NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LowerBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FEnumUint8NetSerializerConfig();
};

