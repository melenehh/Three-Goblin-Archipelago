#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddControlElement.h"
#include "RigUnit_HierarchyAddControlInteger_Settings.h"
#include "RigUnit_HierarchyAddControlInteger.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControlInteger_Settings Settings;
    
    FRigUnit_HierarchyAddControlInteger();
};

