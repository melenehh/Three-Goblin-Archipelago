#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigUnit_HierarchyAddControlElement.h"
#include "RigUnit_HierarchyAddControlVector2D_Settings.h"
#include "RigUnit_HierarchyAddControlVector2D.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControlVector2D_Settings Settings;
    
    FRigUnit_HierarchyAddControlVector2D();
};

