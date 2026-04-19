#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_ShapeExists.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ShapeExists : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShapeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigUnit_ShapeExists();
};

