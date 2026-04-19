#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "FieldPathNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FFieldPathNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Property;
    
    IRISCORE_API FFieldPathNetSerializerConfig();
};

