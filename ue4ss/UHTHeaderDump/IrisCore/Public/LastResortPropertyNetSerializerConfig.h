#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "LastResortPropertyNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FLastResortPropertyNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Property;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxAllowedObjectReferences;
    
    IRISCORE_API FLastResortPropertyNetSerializerConfig();
};

