#pragma once
#include "CoreMinimal.h"
#include "DataDrivenShaderPlatformInfoInput.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDataDrivenShaderPlatformInfoSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput InputTrue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput InputFalse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataDrivenShaderPlatformInfoInput> DDSPIPropertyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContainsInvalidProperty: 1;
    
    UMaterialExpressionDataDrivenShaderPlatformInfoSwitch();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetNameOptions() const;
    
};

