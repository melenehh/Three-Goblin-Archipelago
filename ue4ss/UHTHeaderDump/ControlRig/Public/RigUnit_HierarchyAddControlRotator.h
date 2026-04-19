#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigUnit_HierarchyAddControlElement.h"
#include "RigUnit_HierarchyAddControlRotator_Settings.h"
#include "RigUnit_HierarchyAddControlRotator.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControlRotator_Settings Settings;
    
    FRigUnit_HierarchyAddControlRotator();
};

