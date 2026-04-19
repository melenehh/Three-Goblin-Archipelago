#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "EnumUint32NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnumUint32NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FEnumUint32NetSerializerConfig();
};

