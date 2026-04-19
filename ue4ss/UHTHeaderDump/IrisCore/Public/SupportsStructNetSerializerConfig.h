#pragma once
#include "CoreMinimal.h"
#include "SupportsStructNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FSupportsStructNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StructName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseStructNetSerializer;
    
    IRISCORE_API FSupportsStructNetSerializerConfig();
};

