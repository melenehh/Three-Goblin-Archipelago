#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialAttributesInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FMaterialAttributesInput : public FExpressionInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 PropertyConnectedMask;
    
    ENGINE_API FMaterialAttributesInput();
};

