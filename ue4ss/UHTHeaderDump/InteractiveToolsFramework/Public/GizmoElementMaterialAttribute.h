#pragma once
#include "CoreMinimal.h"
#include "GizmoElementMaterialAttribute.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FGizmoElementMaterialAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInterface> Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridesChildState;
    
    INTERACTIVETOOLSFRAMEWORK_API FGizmoElementMaterialAttribute();
};

