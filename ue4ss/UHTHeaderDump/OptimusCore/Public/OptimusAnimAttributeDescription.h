#pragma once
#include "CoreMinimal.h"
#include "OptimusDataTypeRef.h"
#include "OptimusAnimAttributeDescription.generated.h"

class UOptimusValueContainer;

USTRUCT(BlueprintType)
struct FOptimusAnimAttributeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusValueContainer* DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HlslId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    OPTIMUSCORE_API FOptimusAnimAttributeDescription();
};

