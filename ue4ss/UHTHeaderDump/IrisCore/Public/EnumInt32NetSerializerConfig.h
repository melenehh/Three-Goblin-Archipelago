#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "EnumInt32NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnumInt32NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FEnumInt32NetSerializerConfig();
};

