#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_HierarchyAddControlElement.h"
#include "RigUnit_HierarchyAddControlTransform_Settings.h"
#include "RigUnit_HierarchyAddControlTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControlTransform_Settings Settings;
    
    FRigUnit_HierarchyAddControlTransform();
};

