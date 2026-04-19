#pragma once
#include "CoreMinimal.h"
#include "EShaderFundamentalDimensionType.h"
#include "EShaderFundamentalType.h"
#include "ShaderValueType.generated.h"

USTRUCT(BlueprintType)
struct COMPUTEFRAMEWORK_API FShaderValueType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShaderFundamentalType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShaderFundamentalDimensionType DimensionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDynamicArray;
    
    FShaderValueType();
};

