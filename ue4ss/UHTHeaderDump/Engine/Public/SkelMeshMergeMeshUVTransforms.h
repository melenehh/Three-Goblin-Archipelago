#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SkelMeshMergeMeshUVTransforms.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshMergeMeshUVTransforms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> UVTransforms;
    
    ENGINE_API FSkelMeshMergeMeshUVTransforms();
};

