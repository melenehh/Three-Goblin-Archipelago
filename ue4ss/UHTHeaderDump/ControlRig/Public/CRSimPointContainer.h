#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMSimPoint -FallbackName=RigVMSimPoint
#include "CRSimContainer.h"
#include "CRSimLinearSpring.h"
#include "CRSimPointConstraint.h"
#include "CRSimPointForce.h"
#include "CRSimSoftCollision.h"
#include "CRSimPointContainer.generated.h"

USTRUCT(BlueprintType)
struct FCRSimPointContainer : public FCRSimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMSimPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimLinearSpring> Springs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimPointForce> Forces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimSoftCollision> CollisionVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimPointConstraint> Constraints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMSimPoint> PreviousStep;
    
public:
    CONTROLRIG_API FCRSimPointContainer();
};

