#pragma once
#include "CoreMinimal.h"
#include "ActiveGizmo.generated.h"

class UInteractiveGizmo;

USTRUCT(BlueprintType)
struct FActiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveGizmo* Gizmo;
    
    INTERACTIVETOOLSFRAMEWORK_API FActiveGizmo();
};

