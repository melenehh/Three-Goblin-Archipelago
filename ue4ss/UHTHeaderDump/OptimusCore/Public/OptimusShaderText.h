#pragma once
#include "CoreMinimal.h"
#include "OptimusShaderText.generated.h"

USTRUCT(BlueprintType)
struct OPTIMUSCORE_API FOptimusShaderText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Declarations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShaderText;
    
    FOptimusShaderText();
};

