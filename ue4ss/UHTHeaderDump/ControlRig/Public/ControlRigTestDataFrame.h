#pragma once
#include "CoreMinimal.h"
#include "ControlRigTestDataVariable.h"
#include "RigPose.h"
#include "ControlRigTestDataFrame.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigTestDataFrame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AbsoluteTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigTestDataVariable> Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    FControlRigTestDataFrame();
};

