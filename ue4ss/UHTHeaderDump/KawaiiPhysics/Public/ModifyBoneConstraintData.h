#pragma once
#include "CoreMinimal.h"
#include "EXPBDComplianceType.h"
#include "ModifyBoneConstraintData.generated.h"

USTRUCT(BlueprintType)
struct FModifyBoneConstraintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCompliance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXPBDComplianceType ComplianceType;
    
    KAWAIIPHYSICS_API FModifyBoneConstraintData();
};

