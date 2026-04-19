#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "EnumInt64NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnumInt64NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FEnumInt64NetSerializerConfig();
};

