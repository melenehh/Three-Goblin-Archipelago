#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimNode_SkeletalControlBase.h"
#include "AnimNode_SpringBone.generated.h"

USTRUCT(BlueprintType)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference SpringBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDisplacement;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpringStiffness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpringDamping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ErrorResetThresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLimitDisplacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTranslateX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTranslateY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTranslateZ: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateZ: 1;
    
    ANIMGRAPHRUNTIME_API FAnimNode_SpringBone();
};

