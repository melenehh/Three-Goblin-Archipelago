#pragma once
#include "CoreMinimal.h"
#include "PBIKSolver.h"
#include "PBIKWorkData.generated.h"

USTRUCT(BlueprintType)
struct FPBIKWorkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedsInit;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 HashInitializedWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneSettingToSolverBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> SolverBoneToElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPBIKSolver Solver;
    
    PBIK_API FPBIKWorkData();
};

