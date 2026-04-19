#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "ArrayPropertyNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FArrayPropertyNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxElementCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ElementCountBitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FArrayProperty> Property;
    
    IRISCORE_API FArrayPropertyNetSerializerConfig();
};

