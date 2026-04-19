#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "EnumInt16NetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnumInt16NetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 LowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitCount;
    
    IRISCORE_API FEnumInt16NetSerializerConfig();
};

