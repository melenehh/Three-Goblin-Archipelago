#pragma once
#include "CoreMinimal.h"
#include "MaterialShadingModelField.generated.h"

USTRUCT(BlueprintType)
struct FMaterialShadingModelField {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ShadingModelField;
    
public:
    ENGINE_API FMaterialShadingModelField();
};

