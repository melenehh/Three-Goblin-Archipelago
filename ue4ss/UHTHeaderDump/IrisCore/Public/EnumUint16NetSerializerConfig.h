#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "EnumUint16NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnumUint16NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FEnumUint16NetSerializerConfig();
};

