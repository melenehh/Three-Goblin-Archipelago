#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=ERigVMSimPointIntegrateType -FallbackName=ERigVMSimPointIntegrateType
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMFourPointBezier -FallbackName=RigVMFourPointBezier
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMFunction_SimBaseMutable -FallbackName=RigVMFunction_SimBaseMutable
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMSimPoint -FallbackName=RigVMSimPoint
#include "CRSimLinearSpring.h"
#include "CRSimPointForce.h"
#include "CRSimSoftCollision.h"
#include "RigUnit_PointSimulation_BoneTarget.h"
#include "RigUnit_PointSimulation_DebugSettings.h"
#include "RigUnit_PointSimulation_WorkData.h"
#include "RigUnit_PointSimulation.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMSimPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimLinearSpring> Links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimPointForce> Forces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCRSimSoftCollision> CollisionVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedStepsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMSimPointIntegrateType IntegratorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerletBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitLocalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrimaryAimAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SecondaryAimAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_PointSimulation_DebugSettings DebugSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMFourPointBezier Bezier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigUnit_PointSimulation_WorkData WorkData;
    
    FRigUnit_PointSimulation();
};

