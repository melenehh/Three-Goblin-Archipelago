#pragma once
#include "CoreMinimal.h"
#include "EDataDrivenShaderPlatformInfoCondition.h"
#include "DataDrivenShaderPlatformInfoInput.generated.h"

USTRUCT(BlueprintType)
struct FDataDrivenShaderPlatformInfoInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDataDrivenShaderPlatformInfoCondition> PropertyCondition;
    
    ENGINE_API FDataDrivenShaderPlatformInfoInput();
};

