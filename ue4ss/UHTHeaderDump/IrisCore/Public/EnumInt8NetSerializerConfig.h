#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "EnumInt8NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnumInt8NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FEnumInt8NetSerializerConfig();
};

