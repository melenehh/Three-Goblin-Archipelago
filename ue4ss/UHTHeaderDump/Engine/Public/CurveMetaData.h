#pragma once
#include "CoreMinimal.h"
#include "AnimCurveType.h"
#include "BoneReference.h"
#include "CurveMetaData.generated.h"

USTRUCT(BlueprintType)
struct FCurveMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> LinkedBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimCurveType Type;
    
    ENGINE_API FCurveMetaData();
};

