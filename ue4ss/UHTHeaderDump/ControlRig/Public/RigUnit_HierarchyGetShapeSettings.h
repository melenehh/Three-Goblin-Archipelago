#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_DynamicHierarchyBase.h"
#include "RigUnit_HierarchyAddControl_ShapeSettings.h"
#include "RigUnit_HierarchyGetShapeSettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_HierarchyAddControl_ShapeSettings Settings;
    
    FRigUnit_HierarchyGetShapeSettings();
};

